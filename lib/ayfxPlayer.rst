                              1  .module ayfxplayer.s
                              2  .bank rom(BASE=0x0000,SIZE=0x8000,FSFX=_rom)
                              3  .area .cartridge (BANK=rom) 
                              4  .area .text (BANK=rom)
                              5  .area .text.hot (BANK=rom)
                              6  .area .text.unlikely (BANK=rom)
                              7 
                              8  .bank ram(BASE=0xc880,SIZE=0x036b,FSFX=_ram)
                              9  .area .data  (BANK=ram)
                             10  .area .bss   (BANK=ram)
                             11 
                             12  .area .text
                             13 
                             14  .area .bss
                             15 
                             16  .globl _currentSFX_1
   CAA7                      17 _currentSFX_1:        .blkb       2                            ; sfx player used 
                             18  .globl _currentSFX_2
   CAA9                      19 _currentSFX_2:        .blkb       2                            ; sfx player used 
                             20  .globl _currentSFX_3
   CAAB                      21 _currentSFX_3:        .blkb       2                            ; sfx player used 
                             22  .globl _sfx_status_1
   CAAD                      23 _sfx_status_1:        .blkb       1                            ; sfx player used 
                             24  .globl _sfx_status_2
   CAAE                      25 _sfx_status_2:        .blkb       1                            ; sfx player used 
                             26  .globl _sfx_status_3
   CAAF                      27 _sfx_status_3:        .blkb       1                            ; sfx player used 
                             28  .globl _sfx_pointer_1
   CAB0                      29 _sfx_pointer_1:       .blkb       2                            ; sfx player used 
                             30  .globl _sfx_pointer_2
   CAB2                      31 _sfx_pointer_2:       .blkb       2                            ; sfx player used 
                             32  .globl _sfx_pointer_3
   CAB4                      33 _sfx_pointer_3:       .blkb       2                            ; sfx player used 
                             34 
                             35  .area .text
                             36 
                             37 ; this file is part of Release, written by Malban in 2017
                             38 ;
                             39 ; original vectrex routine were written by Richard Chadd
                             40 ;
                             41 ; (optimized version!)
                             42 ; regs used by below implementation
                             43 ; U and D
                             44 ; X is also used, but can be spared - see below comments
                             45 ; this is only channel 1 is implemented
                     C84C    46 SHADOW_BASE         =        0xC84C;0xc83f 
                             47 ;;;;;;;;;;;;;;;;
                             48 ;;;;;;;;;;;;;;;;
                             49 
                             50 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             51 
                             52  .globl sfx_endofeffect_1
   6D8D                      53 sfx_endofeffect_1: 
                             54                                                           ; set volume off channel 3 
                             55                                                           ; set reg1sf0 
                             56                                                           ; Set volume 
   6D8D CC 00 00      [ 3]   57                     LDD      #0x0000                       ; reset sfx 
   6D90 B7 C8 44      [ 5]   58                     sta      SHADOW_BASE-0x08 
   6D93 FD CA B0      [ 6]   59                     STD      _sfx_pointer_1 
   6D96 B7 CA AD      [ 5]   60                     STA      _sfx_status_1 
   6D99 FD CA A7      [ 6]   61                     std      _currentSFX_1 
                             62  .globl noay1
   6D9C                      63 noay1: 
   6D9C 39            [ 5]   64                     RTS      
                             65 
                             66  .globl sfx_doframe_intern_1
   6D9D                      67 sfx_doframe_intern_1:                                     ;#isfunction  
   6D9D B6 CA AD      [ 5]   68                     LDA      _sfx_status_1                 ; check if sfx to play 
   6DA0 27 FA         [ 3]   69                     BEQ      noay1 
   6DA2 FE CA B0      [ 6]   70                     LDU      _sfx_pointer_1                ; get current frame pointer 
   6DA5 E6 C0         [ 6]   71                     LDB      ,U+ 
   6DA7 C1 D0         [ 2]   72                     CMPB     #0xD0                         ; check first flag byte D0 
   6DA9 26 06         [ 3]   73                     BNE      sfx_checktonefreq_1          ; no match - continue to process frame 
   6DAB A6 C4         [ 4]   74                     LDA      ,U 
   6DAD 81 20         [ 2]   75                     CMPA     #0x20                         ; check second flag byte 20 
   6DAF 27 DC         [ 3]   76                     BEQ      sfx_endofeffect_1            ; match - end of effect found so stop playing 
                             77  .globl sfx_checktonefreq_1
   6DB1                      78 sfx_checktonefreq_1: 
   6DB1 C5 20         [ 2]   79                     BITB     #0b00100000                   ; if bit 5 of B is set 
   6DB3 27 07         [ 3]   80                     BEQ      sfx_checknoisefreq_1         ; skip as no tone freq data 
   6DB5 EC C1         [ 8]   81                     ldd      ,u++ ; alternative to destroying d load any 2 byte reg,
   6DB7 FD C8 4C      [ 6]   82                     std      SHADOW_BASE-00 ; here I destroy d
   6DBA E6 5D         [ 5]   83                     ldb      -3,u ; and load b anew - one instruction to many, 
                             84  .globl sfx_checknoisefreq_1
   6DBC                      85 sfx_checknoisefreq_1: 
   6DBC C5 40         [ 2]   86                     BITB     #0b01000000                   ; if bit 6 of B is only set 
   6DBE 27 05         [ 3]   87                     BEQ      sfx_checkvolume_1            ; skip as no noise freq data 
   6DC0 A6 C0         [ 6]   88                     LDA      ,U+                          ; get next data byte and copy to noise freq reg 
   6DC2 B7 C8 46      [ 5]   89                     STA      SHADOW_BASE-06               ; set noise freq 
                             90  .globl sfx_checkvolume_1
   6DC5                      91 sfx_checkvolume_1: 
   6DC5 1F 98         [ 6]   92                     tfr      b,a 
   6DC7 84 0F         [ 2]   93                     ANDA     #0b00001111                   ; get volume from bits 0-3 
   6DC9 B7 C8 44      [ 5]   94                     STA      SHADOW_BASE-0x08              ; set tone freq 
                             95  .globl sfx_checktonedisable_1
   6DCC                      96 sfx_checktonedisable_1: 
   6DCC B6 C8 45      [ 5]   97                     LDA      SHADOW_BASE-0x07              ; in the following reg 7 will be altered - load once 
   6DCF C5 10         [ 2]   98                     BITB     #0b00010000                   ; if bit 4 of B is set disable the tone 
   6DD1 27 0F         [ 3]   99                     BEQ      sfx_enabletone_1 
                            100  .globl sfx_disabletone_1
   6DD3                     101 sfx_disabletone_1: 
   6DD3 8A 01         [ 2]  102                     ORA      #0b00000001 
   6DD5 C5 80         [ 2]  103                     BITB     #0b10000000                   ; if bit7 of B is set disable noise 
   6DD7 27 18         [ 3]  104                     BEQ      sfx_enablenoise_1 
   6DD9 8A 08         [ 2]  105                     ORA      #0b00001000 
   6DDB B7 C8 45      [ 5]  106                     STA      SHADOW_BASE-0x07              ; set tone freq 
   6DDE FF CA B0      [ 6]  107                     STU      _sfx_pointer_1                ; update frame pointer to next flag byte in Y 
   6DE1 39            [ 5]  108                     RTS      
                            109 
                            110  .globl sfx_enabletone_1
   6DE2                     111 sfx_enabletone_1: 
   6DE2 84 FE         [ 2]  112                     ANDA     #0b11111110 
                            113  .globl sfx_checknoisedisable_1
   6DE4                     114 sfx_checknoisedisable_1: 
   6DE4 C5 80         [ 2]  115                     BITB     #0b10000000                   ; if bit7 of B is set disable noise 
   6DE6 27 09         [ 3]  116                     BEQ      sfx_enablenoise_1 
                            117  .globl sfx_disablenoise_1
   6DE8                     118 sfx_disablenoise_1: 
   6DE8 8A 08         [ 2]  119                     ORA      #0b00001000 
   6DEA B7 C8 45      [ 5]  120                     STA      SHADOW_BASE-0x07              ; set tone freq 
   6DED FF CA B0      [ 6]  121                     STU      _sfx_pointer_1                ; update frame pointer to next flag byte in Y 
   6DF0 39            [ 5]  122                     RTS      
                            123 
                            124  .globl sfx_enablenoise_1
   6DF1                     125 sfx_enablenoise_1: 
   6DF1 84 F7         [ 2]  126                     ANDA     #0b11110111 
   6DF3 B7 C8 45      [ 5]  127                     STA      SHADOW_BASE-0x07              ; set tone freq 
   6DF6 FF CA B0      [ 6]  128                     STU      _sfx_pointer_1                ; update frame pointer to next flag byte in Y 
   6DF9 39            [ 5]  129                     RTS      
                            130 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            131 
                            132  .globl sfx_endofeffect_2
   6DFA                     133 sfx_endofeffect_2: 
                            134                                                           ; set volume off channel 3 
                            135                                                           ; set reg1sf0 
                            136                                                           ; Set volume 
   6DFA CC 00 00      [ 3]  137                     LDD      #0x0000                       ; reset sfx 
   6DFD B7 C8 43      [ 5]  138                     sta      SHADOW_BASE-0x09 
   6E00 FD CA B2      [ 6]  139                     STD      _sfx_pointer_2 
   6E03 B7 CA AE      [ 5]  140                     STA      _sfx_status_2 
   6E06 FD CA A9      [ 6]  141                     std      _currentSFX_2 
                            142  
                            143  .globl noay2
   6E09                     144 noay2:
   6E09 39            [ 5]  145                     RTS      
                            146 
                            147  .globl sfx_doframe_intern_2
   6E0A                     148 sfx_doframe_intern_2:  ;#isfunction
                            149 
                            150 
   6E0A B6 CA AE      [ 5]  151                     LDA      _sfx_status_2                ; check if sfx to play 
   6E0D 27 FA         [ 3]  152                     BEQ      noay2 
                            153 
   6E0F FE CA B2      [ 6]  154                     LDU      _sfx_pointer_2                ; get current frame pointer 
   6E12 E6 C0         [ 6]  155                     LDB      ,U+ 
   6E14 C1 D0         [ 2]  156                     CMPB     #0xD0                         ; check first flag byte D0 
   6E16 26 06         [ 3]  157                     BNE      sfx_checktonefreq_2          ; no match - continue to process frame 
   6E18 A6 C4         [ 4]  158                     LDA      ,U 
   6E1A 81 20         [ 2]  159                     CMPA     #0x20                         ; check second flag byte 20 
   6E1C 27 DC         [ 3]  160                     BEQ      sfx_endofeffect_2            ; match - end of effect found so stop playing 
                            161  .globl sfx_checktonefreq_2
   6E1E                     162 sfx_checktonefreq_2: 
   6E1E C5 20         [ 2]  163                     BITB     #0b00100000                   ; if bit 5 of B is set 
   6E20 27 07         [ 3]  164                     BEQ      sfx_checknoisefreq_2         ; skip as no tone freq data 
   6E22 EC C1         [ 8]  165                     ldd      ,u++ ; alternative to destroying d load any 2 byte reg,
   6E24 FD C8 4A      [ 6]  166                     std      SHADOW_BASE-02 ; here I destroy d
   6E27 E6 5D         [ 5]  167                     ldb -3,u ; and load b anew - one instruction to many, 
                            168  .globl sfx_checknoisefreq_2
   6E29                     169 sfx_checknoisefreq_2: 
   6E29 C5 40         [ 2]  170                     BITB     #0b01000000                   ; if bit 6 of B is only set 
   6E2B 27 05         [ 3]  171                     BEQ      sfx_checkvolume_2            ; skip as no noise freq data 
   6E2D A6 C0         [ 6]  172                     LDA      ,U+                          ; get next data byte and copy to noise freq reg 
   6E2F B7 C8 46      [ 5]  173                     STA      SHADOW_BASE-06               ; set noise freq 
                            174  .globl sfx_checkvolume_2
   6E32                     175 sfx_checkvolume_2: 
   6E32 1F 98         [ 6]  176                     tfr      b,a 
   6E34 84 0F         [ 2]  177                     ANDA     #0b00001111                   ; get volume from bits 0-3 
   6E36 B7 C8 43      [ 5]  178                     STA      SHADOW_BASE-0x09              ; set tone freq 
                            179  .globl sfx_checktonedisable_2
   6E39                     180 sfx_checktonedisable_2: 
   6E39 B6 C8 45      [ 5]  181                     LDA      SHADOW_BASE-0x07              ; in the following reg 7 will be altered - load once 
   6E3C C5 10         [ 2]  182                     BITB     #0b00010000                   ; if bit 4 of B is set disable the tone 
   6E3E 27 0F         [ 3]  183                     BEQ      sfx_enabletone_2 
                            184  .globl sfx_disabletone_2
   6E40                     185 sfx_disabletone_2: 
   6E40 8A 02         [ 2]  186                     ORA      #0b00000010 
   6E42 C5 80         [ 2]  187                     BITB     #0b10000000                   ; if bit7 of B is set disable noise 
   6E44 27 18         [ 3]  188                     BEQ      sfx_enablenoise_2 
   6E46 8A 10         [ 2]  189                     ORA      #0b00010000 
   6E48 B7 C8 45      [ 5]  190                     STA      SHADOW_BASE-0x07              ; set tone freq 
   6E4B FF CA B2      [ 6]  191                     STU      _sfx_pointer_2                ; update frame pointer to next flag byte in Y 
   6E4E 39            [ 5]  192                     RTS      
                            193 
                            194  .globl sfx_enabletone_2
   6E4F                     195 sfx_enabletone_2: 
   6E4F 84 FD         [ 2]  196                     ANDA     #0b11111101 
                            197  .globl sfx_checknoisedisable_2
   6E51                     198 sfx_checknoisedisable_2: 
   6E51 C5 80         [ 2]  199                     BITB     #0b10000000                   ; if bit7 of B is set disable noise 
   6E53 27 09         [ 3]  200                     BEQ      sfx_enablenoise_2 
                            201  .globl sfx_disablenoise_2
   6E55                     202 sfx_disablenoise_2: 
   6E55 8A 10         [ 2]  203                     ORA      #0b00010000 
   6E57 B7 C8 45      [ 5]  204                     STA      SHADOW_BASE-0x07              ; set tone freq 
   6E5A FF CA B2      [ 6]  205                     STU      _sfx_pointer_2                ; update frame pointer to next flag byte in Y 
   6E5D 39            [ 5]  206                     RTS      
                            207 
                            208  .globl sfx_enablenoise_2
   6E5E                     209 sfx_enablenoise_2: 
   6E5E 84 EF         [ 2]  210                     ANDA     #0b11101111 
   6E60 B7 C8 45      [ 5]  211                     STA      SHADOW_BASE-0x07              ; set tone freq 
   6E63 FF CA B2      [ 6]  212                     STU      _sfx_pointer_2                ; update frame pointer to next flag byte in Y 
   6E66 39            [ 5]  213                     RTS      
                            214 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                            215  .globl sfx_endofeffect_3
   6E67                     216 sfx_endofeffect_3: 
                            217                                                           ; set volume off channel 3 
                            218                                                           ; set reg1sf0 
                            219                                                           ; Set volume 
   6E67 CC 00 00      [ 3]  220                     LDD      #0x0000                       ; reset sfx 
   6E6A B7 C8 42      [ 5]  221                     sta      SHADOW_BASE-0x0a 
   6E6D FD CA B4      [ 6]  222                     STD      _sfx_pointer_3 
   6E70 B7 CA AF      [ 5]  223                     STA      _sfx_status_3 
   6E73 FD CA AB      [ 6]  224                     std      _currentSFX_3 
                            225  
                            226  .globl noay3
   6E76                     227 noay3:
   6E76 39            [ 5]  228                     RTS      
                            229 
                            230  .globl sfx_doframe_intern_3
   6E77                     231 sfx_doframe_intern_3:  ;#isfunction
                            232 
                            233 
   6E77 B6 CA AF      [ 5]  234                     LDA      _sfx_status_3                ; check if sfx to play 
   6E7A 27 FA         [ 3]  235                     BEQ      noay3 
                            236 
   6E7C FE CA B4      [ 6]  237                     LDU      _sfx_pointer_3                ; get current frame pointer 
   6E7F E6 C0         [ 6]  238                     LDB      ,U+ 
   6E81 C1 D0         [ 2]  239                     CMPB     #0xD0                         ; check first flag byte D0 
   6E83 26 06         [ 3]  240                     BNE      sfx_checktonefreq_3          ; no match - continue to process frame 
   6E85 A6 C4         [ 4]  241                     LDA      ,U 
   6E87 81 20         [ 2]  242                     CMPA     #0x20                         ; check second flag byte 20 
   6E89 27 DC         [ 3]  243                     BEQ      sfx_endofeffect_3            ; match - end of effect found so stop playing 
                            244  .globl sfx_checktonefreq_3
   6E8B                     245 sfx_checktonefreq_3: 
   6E8B C5 20         [ 2]  246                     BITB     #0b00100000                   ; if bit 5 of B is set 
   6E8D 27 07         [ 3]  247                     BEQ      sfx_checknoisefreq_3         ; skip as no tone freq data 
   6E8F EC C1         [ 8]  248                     ldd      ,u++ ; alternative to destroying d load any 2 byte reg,
   6E91 FD C8 48      [ 6]  249                     std      SHADOW_BASE-04 ; here I destroy d
   6E94 E6 5D         [ 5]  250                     ldb -3,u ; and load b anew - one instruction to many, 
                            251  .globl sfx_checknoisefreq_3
   6E96                     252 sfx_checknoisefreq_3: 
   6E96 C5 40         [ 2]  253                     BITB     #0b01000000                   ; if bit 6 of B is only set 
   6E98 27 05         [ 3]  254                     BEQ      sfx_checkvolume_3            ; skip as no noise freq data 
   6E9A A6 C0         [ 6]  255                     LDA      ,U+                          ; get next data byte and copy to noise freq reg 
   6E9C B7 C8 46      [ 5]  256                     STA      SHADOW_BASE-06               ; set tone freq 
                            257  .globl sfx_checkvolume_3
   6E9F                     258 sfx_checkvolume_3: 
   6E9F 1F 98         [ 6]  259                     tfr      b,a 
   6EA1 84 0F         [ 2]  260                     ANDA     #0b00001111                   ; get volume from bits 0-3 
   6EA3 B7 C8 42      [ 5]  261                     STA      SHADOW_BASE-0x0A              ; set tone freq 
                            262  .globl sfx_checktonedisable_3
   6EA6                     263 sfx_checktonedisable_3: 
   6EA6 B6 C8 45      [ 5]  264                     LDA      SHADOW_BASE-0x07              ; in the following reg 7 will be altered - load once 
   6EA9 C5 10         [ 2]  265                     BITB     #0b00010000                   ; if bit 4 of B is set disable the tone 
   6EAB 27 0F         [ 3]  266                     BEQ      sfx_enabletone_3 
                            267  .globl sfx_disabletone_3
   6EAD                     268 sfx_disabletone_3: 
   6EAD 8A 04         [ 2]  269                     ORA      #0b00000100 
   6EAF C5 80         [ 2]  270                     BITB     #0b10000000                   ; if bit7 of B is set disable noise 
   6EB1 27 18         [ 3]  271                     BEQ      sfx_enablenoise_3 
   6EB3 8A 20         [ 2]  272                     ORA      #0b00100000 
   6EB5 B7 C8 45      [ 5]  273                     STA      SHADOW_BASE-0x07              ; set tone freq 
   6EB8 FF CA B4      [ 6]  274                     STU      _sfx_pointer_3                ; update frame pointer to next flag byte in Y 
   6EBB 39            [ 5]  275                     RTS      
                            276 
                            277  .globl sfx_enabletone_3
   6EBC                     278 sfx_enabletone_3: 
   6EBC 84 FB         [ 2]  279                     ANDA     #0b11111011 
                            280  .globl sfx_checknoisedisable_3
   6EBE                     281 sfx_checknoisedisable_3: 
   6EBE C5 80         [ 2]  282                     BITB     #0b10000000                   ; if bit7 of B is set disable noise 
   6EC0 27 09         [ 3]  283                     BEQ      sfx_enablenoise_3 
                            284  .globl sfx_disablenoise_3
   6EC2                     285 sfx_disablenoise_3: 
   6EC2 8A 20         [ 2]  286                     ORA      #0b00100000 
   6EC4 B7 C8 45      [ 5]  287                     STA      SHADOW_BASE-0x07              ; set tone freq 
   6EC7 FF CA B4      [ 6]  288                     STU      _sfx_pointer_3                ; update frame pointer to next flag byte in Y 
   6ECA 39            [ 5]  289                     RTS      
                            290 
                            291  .globl sfx_enablenoise_3
   6ECB                     292 sfx_enablenoise_3: 
   6ECB 84 DF         [ 2]  293                     ANDA     #0b11011111 
   6ECD B7 C8 45      [ 5]  294                     STA      SHADOW_BASE-0x07              ; set tone freq 
   6ED0 FF CA B4      [ 6]  295                     STU      _sfx_pointer_3                ; update frame pointer to next flag byte in Y 
   6ED3 39            [ 5]  296                     RTS      
ASxxxx Assembler V05.00  (Motorola 6809), page 1.
Hexidecimal [16-Bits]

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 A$ayfxPlayer.p     0046 GR  |   3 A$ayfxPlayer.p     0048 GR
  3 A$ayfxPlayer.p     004A GR  |   3 A$ayfxPlayer.p     004C GR
  3 A$ayfxPlayer.p     004E GR  |   3 A$ayfxPlayer.p     0051 GR
  3 A$ayfxPlayer.p     0054 GR  |   3 A$ayfxPlayer.p     0055 GR
  3 A$ayfxPlayer.p     0057 GR  |   3 A$ayfxPlayer.p     0059 GR
  3 A$ayfxPlayer.p     005B GR  |   3 A$ayfxPlayer.p     005D GR
  3 A$ayfxPlayer.p     0060 GR  |   3 A$ayfxPlayer.p     0063 GR
  3 A$ayfxPlayer.p     0064 GR  |   3 A$ayfxPlayer.p     0066 GR
  3 A$ayfxPlayer.p     0069 GR  |   3 A$ayfxPlayer.p     006C GR
  3 A$ayfxPlayer.p     006D GR  |   3 A$ayfxPlayer.p     0070 GR
  3 A$ayfxPlayer.p     0073 GR  |   3 A$ayfxPlayer.p     0076 GR
  3 A$ayfxPlayer.p     0079 GR  |   3 A$ayfxPlayer.p     007C GR
  3 A$ayfxPlayer.p     007D GR  |   3 A$ayfxPlayer.p     0080 GR
  3 A$ayfxPlayer.p     0082 GR  |   3 A$ayfxPlayer.p     0085 GR
  3 A$ayfxPlayer.p     0087 GR  |   3 A$ayfxPlayer.p     0089 GR
  3 A$ayfxPlayer.p     008B GR  |   3 A$ayfxPlayer.p     008D GR
  3 A$ayfxPlayer.p     008F GR  |   3 A$ayfxPlayer.p     0091 GR
  3 A$ayfxPlayer.p     0093 GR  |   3 A$ayfxPlayer.p     0095 GR
  3 A$ayfxPlayer.p     0097 GR  |   3 A$ayfxPlayer.p     009A GR
  3 A$ayfxPlayer.p     009C GR  |   3 A$ayfxPlayer.p     009E GR
  3 A$ayfxPlayer.p     00A0 GR  |   3 A$ayfxPlayer.p     00A2 GR
  3 A$ayfxPlayer.p     00A5 GR  |   3 A$ayfxPlayer.p     00A7 GR
  3 A$ayfxPlayer.p     00A9 GR  |   3 A$ayfxPlayer.p     00AC GR
  3 A$ayfxPlayer.p     00AF GR  |   3 A$ayfxPlayer.p     00B1 GR
  3 A$ayfxPlayer.p     00B3 GR  |   3 A$ayfxPlayer.p     00B5 GR
  3 A$ayfxPlayer.p     00B7 GR  |   3 A$ayfxPlayer.p     00B9 GR
  3 A$ayfxPlayer.p     00BB GR  |   3 A$ayfxPlayer.p     00BE GR
  3 A$ayfxPlayer.p     00C1 GR  |   3 A$ayfxPlayer.p     00C2 GR
  3 A$ayfxPlayer.p     00C4 GR  |   3 A$ayfxPlayer.p     00C6 GR
  3 A$ayfxPlayer.p     00C8 GR  |   3 A$ayfxPlayer.p     00CA GR
  3 A$ayfxPlayer.p     00CD GR  |   3 A$ayfxPlayer.p     00D0 GR
  3 A$ayfxPlayer.p     00D1 GR  |   3 A$ayfxPlayer.p     00D3 GR
  3 A$ayfxPlayer.p     00D6 GR  |   3 A$ayfxPlayer.p     00D9 GR
  3 A$ayfxPlayer.p     00DA GR  |   3 A$ayfxPlayer.p     00DD GR
  3 A$ayfxPlayer.p     00E0 GR  |   3 A$ayfxPlayer.p     00E3 GR
  3 A$ayfxPlayer.p     00E6 GR  |   3 A$ayfxPlayer.p     00E9 GR
  3 A$ayfxPlayer.p     00EA GR  |   3 A$ayfxPlayer.p     00ED GR
  3 A$ayfxPlayer.p     00EF GR  |   3 A$ayfxPlayer.p     00F2 GR
  3 A$ayfxPlayer.p     00F4 GR  |   3 A$ayfxPlayer.p     00F6 GR
  3 A$ayfxPlayer.p     00F8 GR  |   3 A$ayfxPlayer.p     00FA GR
  3 A$ayfxPlayer.p     00FC GR  |   3 A$ayfxPlayer.p     00FE GR
  3 A$ayfxPlayer.p     0100 GR  |   3 A$ayfxPlayer.p     0102 GR
  3 A$ayfxPlayer.p     0104 GR  |   3 A$ayfxPlayer.p     0107 GR
  3 A$ayfxPlayer.p     0109 GR  |   3 A$ayfxPlayer.p     010B GR
  3 A$ayfxPlayer.p     010D GR  |   3 A$ayfxPlayer.p     010F GR
  3 A$ayfxPlayer.p     0112 GR  |   3 A$ayfxPlayer.p     0114 GR
  3 A$ayfxPlayer.p     0116 GR  |   3 A$ayfxPlayer.p     0119 GR
  3 A$ayfxPlayer.p     011C GR  |   3 A$ayfxPlayer.p     011E GR
  3 A$ayfxPlayer.p     0120 GR  |   3 A$ayfxPlayer.p     0122 GR
  3 A$ayfxPlayer.p     0124 GR  |   3 A$ayfxPlayer.p     0126 GR
  3 A$ayfxPlayer.p     0128 GR  |   3 A$ayfxPlayer.p     012B GR
  3 A$ayfxPlayer.p     012E GR  |   3 A$ayfxPlayer.p     012F GR
  3 A$ayfxPlayer.p     0131 GR  |   3 A$ayfxPlayer.p     0133 GR
  3 A$ayfxPlayer.p     0135 GR  |   3 A$ayfxPlayer.p     0137 GR
  3 A$ayfxPlayer.p     013A GR  |   3 A$ayfxPlayer.p     013D GR
  3 A$ayfxPlayer.p     013E GR  |   3 A$ayfxPlayer.p     0140 GR
  3 A$ayfxPlayer.p     0143 GR  |   3 A$ayfxPlayer.p     0146 GR
  3 A$ayfxPlayer.p     0000 GR  |   3 A$ayfxPlayer.p     0003 GR
  3 A$ayfxPlayer.p     0006 GR  |   3 A$ayfxPlayer.p     0009 GR
  3 A$ayfxPlayer.p     000C GR  |   3 A$ayfxPlayer.p     000F GR
  3 A$ayfxPlayer.p     0010 GR  |   3 A$ayfxPlayer.p     0013 GR
  3 A$ayfxPlayer.p     0015 GR  |   3 A$ayfxPlayer.p     0018 GR
  3 A$ayfxPlayer.p     001A GR  |   3 A$ayfxPlayer.p     001C GR
  3 A$ayfxPlayer.p     001E GR  |   3 A$ayfxPlayer.p     0020 GR
  3 A$ayfxPlayer.p     0022 GR  |   3 A$ayfxPlayer.p     0024 GR
  3 A$ayfxPlayer.p     0026 GR  |   3 A$ayfxPlayer.p     0028 GR
  3 A$ayfxPlayer.p     002A GR  |   3 A$ayfxPlayer.p     002D GR
  3 A$ayfxPlayer.p     002F GR  |   3 A$ayfxPlayer.p     0031 GR
  3 A$ayfxPlayer.p     0033 GR  |   3 A$ayfxPlayer.p     0035 GR
  3 A$ayfxPlayer.p     0038 GR  |   3 A$ayfxPlayer.p     003A GR
  3 A$ayfxPlayer.p     003C GR  |   3 A$ayfxPlayer.p     003F GR
  3 A$ayfxPlayer.p     0042 GR  |   3 A$ayfxPlayer.p     0044 GR
    SHADOW_BASE    =   C84C     |   7 _currentSFX_1      0000 GR
  7 _currentSFX_2      0002 GR  |   7 _currentSFX_3      0004 GR
  7 _sfx_pointer_1     0009 GR  |   7 _sfx_pointer_2     000B GR
  7 _sfx_pointer_3     000D GR  |   7 _sfx_status_1      0006 GR
  7 _sfx_status_2      0007 GR  |   7 _sfx_status_3      0008 GR
  3 noay1              000F GR  |   3 noay2              007C GR
  3 noay3              00E9 GR  |   3 sfx_checknoise     0057 GR
  3 sfx_checknoise     00C4 GR  |   3 sfx_checknoise     0131 GR
  3 sfx_checknoise     002F GR  |   3 sfx_checknoise     009C GR
  3 sfx_checknoise     0109 GR  |   3 sfx_checktoned     003F GR
  3 sfx_checktoned     00AC GR  |   3 sfx_checktoned     0119 GR
  3 sfx_checktonef     0024 GR  |   3 sfx_checktonef     0091 GR
  3 sfx_checktonef     00FE GR  |   3 sfx_checkvolum     0038 GR
  3 sfx_checkvolum     00A5 GR  |   3 sfx_checkvolum     0112 GR
  3 sfx_disablenoi     005B GR  |   3 sfx_disablenoi     00C8 GR
  3 sfx_disablenoi     0135 GR  |   3 sfx_disableton     0046 GR
  3 sfx_disableton     00B3 GR  |   3 sfx_disableton     0120 GR
  3 sfx_doframe_in     0010 GR  |   3 sfx_doframe_in     007D GR
  3 sfx_doframe_in     00EA GR  |   3 sfx_enablenois     0064 GR
  3 sfx_enablenois     00D1 GR  |   3 sfx_enablenois     013E GR
  3 sfx_enabletone     0055 GR  |   3 sfx_enabletone     00C2 GR
  3 sfx_enabletone     012F GR  |   3 sfx_endofeffec     0000 GR
  3 sfx_endofeffec     006D GR  |   3 sfx_endofeffec     00DA GR

ASxxxx Assembler V05.00  (Motorola 6809), page 2.
Hexidecimal [16-Bits]

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
[_DSEG]
   1 _DATA            size    0   flags C0C0
[rom]
   2 .cartridge       size    0   flags 8080
   3 .text            size  147   flags 8180
   4 .text.hot        size    0   flags 8080
   5 .text.unlikely   size    0   flags 8080
[ram]
   6 .data            size    0   flags 8080
   7 .bss             size    F   flags 8080

