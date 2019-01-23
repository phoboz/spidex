                              1  .module drawwebtoc.pre.s
                              2  .area .text
                              3  .setdp 0xd000,_DATA
                              4 ;***************************************************************************
                              5 ; DEFINE SECTION
                              6 ;***************************************************************************
                              7 ; load vectrex bios routine definitions
                              8 ; include line ->                     INCLUDE  "VECTREX.I"                  ; vectrex function includes
                              9 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             10 ; this file contains includes for vectrex BIOS functions and variables      ;
                             11 ; it was written by Bruce Tomlin, slighte changed by Malban                 ;
                             12 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                             13 
                     0001    14 INCLUDE_I = 1
                             15 
                     C800    16 Vec_Snd_Shadow  =     0xC800   ;Shadow of sound chip registers (15 bytes)
                     C80F    17 Vec_Btn_State   =     0xC80F   ;Current state of all joystick buttons
                     C810    18 Vec_Prev_Btns   =     0xC810   ;Previous state of all joystick buttons
                     C811    19 Vec_Buttons     =     0xC811   ;Current toggle state of all buttons
                     C812    20 Vec_Button_1_1  =     0xC812   ;Current toggle state of stick 1 button 1
                     C813    21 Vec_Button_1_2  =     0xC813   ;Current toggle state of stick 1 button 2
                     C814    22 Vec_Button_1_3  =     0xC814   ;Current toggle state of stick 1 button 3
                     C815    23 Vec_Button_1_4  =     0xC815   ;Current toggle state of stick 1 button 4
                     C816    24 Vec_Button_2_1  =     0xC816   ;Current toggle state of stick 2 button 1
                     C817    25 Vec_Button_2_2  =     0xC817   ;Current toggle state of stick 2 button 2
                     C818    26 Vec_Button_2_3  =     0xC818   ;Current toggle state of stick 2 button 3
                     C819    27 Vec_Button_2_4  =     0xC819   ;Current toggle state of stick 2 button 4
                     C81A    28 Vec_Joy_Resltn  =     0xC81A   ;Joystick A/D resolution (0x80=min 0x00=max)
                     C81B    29 Vec_Joy_1_X     =     0xC81B   ;Joystick 1 left/right
                     C81C    30 Vec_Joy_1_Y     =     0xC81C   ;Joystick 1 up/down
                     C81D    31 Vec_Joy_2_X     =     0xC81D   ;Joystick 2 left/right
                     C81E    32 Vec_Joy_2_Y     =     0xC81E   ;Joystick 2 up/down
                     C81F    33 Vec_Joy_Mux     =     0xC81F   ;Joystick enable/mux flags (4 bytes)
                     C81F    34 Vec_Joy_Mux_1_X =     0xC81F   ;Joystick 1 X enable/mux flag (=1)
                     C820    35 Vec_Joy_Mux_1_Y =     0xC820   ;Joystick 1 Y enable/mux flag (=3)
                     C821    36 Vec_Joy_Mux_2_X =     0xC821   ;Joystick 2 X enable/mux flag (=5)
                     C822    37 Vec_Joy_Mux_2_Y =     0xC822   ;Joystick 2 Y enable/mux flag (=7)
                     C823    38 Vec_Misc_Count  =     0xC823   ;Misc counter/flag byte, zero when not in use
                     C824    39 Vec_0Ref_Enable =     0xC824   ;Check0Ref enable flag
                     C825    40 Vec_Loop_Count  =     0xC825   ;Loop counter word (incremented in Wait_Recal)
                     C827    41 Vec_Brightness  =     0xC827   ;Default brightness
                     C828    42 Vec_Dot_Dwell   =     0xC828   ;Dot dwell time?
                     C829    43 Vec_Pattern     =     0xC829   ;Dot pattern (bits)
                     C82A    44 Vec_Text_HW     =     0xC82A   ;Default text height and width
                     C82A    45 Vec_Text_Height =     0xC82A   ;Default text height
                     C82B    46 Vec_Text_Width  =     0xC82B   ;Default text width
                     C82C    47 Vec_Str_Ptr     =     0xC82C   ;Temporary string pointer for Print_Str
                     C82E    48 Vec_Counters    =     0xC82E   ;Six bytes of counters
                     C82E    49 Vec_Counter_1   =     0xC82E   ;First  counter byte
                     C82F    50 Vec_Counter_2   =     0xC82F   ;Second counter byte
                     C830    51 Vec_Counter_3   =     0xC830   ;Third  counter byte
                     C831    52 Vec_Counter_4   =     0xC831   ;Fourth counter byte
                     C832    53 Vec_Counter_5   =     0xC832   ;Fifth  counter byte
                     C833    54 Vec_Counter_6   =     0xC833   ;Sixth  counter byte
                     C834    55 Vec_RiseRun_Tmp =     0xC834   ;Temp storage word for rise/run
                     C836    56 Vec_Angle       =     0xC836   ;Angle for rise/run and rotation calculations
                     C837    57 Vec_Run_Index   =     0xC837   ;Index pair for run
                             58 ;                       0xC839   ;Pointer to copyright string during startup
                     C839    59 Vec_Rise_Index  =     0xC839   ;Index pair for rise
                             60 ;                       0xC83B   ;High score cold-start flag (=0 if valid)
                     C83B    61 Vec_RiseRun_Len =     0xC83B   ;length for rise/run
                             62 ;                       0xC83C   ;temp byte
                     C83D    63 Vec_Rfrsh       =     0xC83D   ;Refresh time (divided by 1.5MHz)
                     C83D    64 Vec_Rfrsh_lo    =     0xC83D   ;Refresh time low byte
                     C83E    65 Vec_Rfrsh_hi    =     0xC83E   ;Refresh time high byte
                     C83F    66 Vec_Music_Work  =     0xC83F   ;Music work buffer (14 bytes, backwards?)
                     C842    67 Vec_Music_Wk_A  =     0xC842   ;        register 10
                             68 ;                       0xC843   ;        register 9
                             69 ;                       0xC844   ;        register 8
                     C845    70 Vec_Music_Wk_7  =     0xC845   ;        register 7
                     C846    71 Vec_Music_Wk_6  =     0xC846   ;        register 6
                     C847    72 Vec_Music_Wk_5  =     0xC847   ;        register 5
                             73 ;                       0xC848   ;        register 4
                             74 ;                       0xC849   ;        register 3
                             75 ;                       0xC84A   ;        register 2
                     C84B    76 Vec_Music_Wk_1  =     0xC84B   ;        register 1
                             77 ;                       0xC84C   ;        register 0
                     C84D    78 Vec_Freq_Table  =     0xC84D   ;Pointer to note-to-frequency table (normally 0xFC8D)
                     C84F    79 Vec_Max_Players =     0xC84F   ;Maximum number of players for Select_Game
                     C850    80 Vec_Max_Games   =     0xC850   ;Maximum number of games for Select_Game
                     C84F    81 Vec_ADSR_Table  =     0xC84F   ;Storage for first music header word (ADSR table)
                     C851    82 Vec_Twang_Table =     0xC851   ;Storage for second music header word ('twang' table)
                     C853    83 Vec_Music_Ptr   =     0xC853   ;Music data pointer
                     C853    84 Vec_Expl_ChanA  =     0xC853   ;Used by Explosion_Snd - bit for first channel used?
                     C854    85 Vec_Expl_Chans  =     0xC854   ;Used by Explosion_Snd - bits for all channels used?
                     C855    86 Vec_Music_Chan  =     0xC855   ;Current sound channel number for Init_Music
                     C856    87 Vec_Music_Flag  =     0xC856   ;Music active flag (0x00=off 0x01=start 0x80=on)
                     C857    88 Vec_Duration    =     0xC857   ;Duration counter for Init_Music
                     C858    89 Vec_Music_Twang =     0xC858   ;3 word 'twang' table used by Init_Music
                     C858    90 Vec_Expl_1      =     0xC858   ;Four bytes copied from Explosion_Snd's U-reg parameters
                     C859    91 Vec_Expl_2      =     0xC859   ;
                     C85A    92 Vec_Expl_3      =     0xC85A   ;
                     C85B    93 Vec_Expl_4      =     0xC85B   ;
                     C85C    94 Vec_Expl_Chan   =     0xC85C   ;Used by Explosion_Snd - channel number in use?
                     C85D    95 Vec_Expl_ChanB  =     0xC85D   ;Used by Explosion_Snd - bit for second channel used?
                     C85E    96 Vec_ADSR_Timers =     0xC85E   ;ADSR timers for each sound channel (3 bytes)
                     C861    97 Vec_Music_Freq  =     0xC861   ;Storage for base frequency of each channel (3 words)
                             98 ;                       0xC85E   ;Scratch 'score' storage for Display_Option (7 bytes)
                     C867    99 Vec_Expl_Flag   =     0xC867   ;Explosion_Snd initialization flag?
                            100 ;               0xC868...0xC876   ;Unused?
                     C877   101 Vec_Expl_Timer  =     0xC877   ;Used by Explosion_Snd
                            102 ;                       0xC878   ;Unused?
                     C879   103 Vec_Num_Players =     0xC879   ;Number of players selected in Select_Game
                     C87A   104 Vec_Num_Game    =     0xC87A   ;Game number selected in Select_Game
                     C87B   105 Vec_Seed_Ptr    =     0xC87B   ;Pointer to 3-byte random number seed (=0xC87D)
                     C87D   106 Vec_Random_Seed =     0xC87D   ;Default 3-byte random number seed
                            107                                 ;
                            108 ;    0xC880 - 0xCBEA is user RAM  ;
                            109                                 ;
                     CBEA   110 Vec_Default_Stk =     0xCBEA   ;Default top-of-stack
                     CBEB   111 Vec_High_Score  =     0xCBEB   ;High score storage (7 bytes)
                     CBF2   112 Vec_SWI3_Vector =     0xCBF2   ;SWI2/SWI3 interrupt vector (3 bytes)
                     CBF2   113 Vec_SWI2_Vector =     0xCBF2   ;SWI2/SWI3 interrupt vector (3 bytes)
                     CBF5   114 Vec_FIRQ_Vector =     0xCBF5   ;FIRQ interrupt vector (3 bytes)
                     CBF8   115 Vec_IRQ_Vector  =     0xCBF8   ;IRQ interrupt vector (3 bytes)
                     CBFB   116 Vec_SWI_Vector  =     0xCBFB   ;SWI/NMI interrupt vector (3 bytes)
                     CBFB   117 Vec_NMI_Vector  =     0xCBFB   ;SWI/NMI interrupt vector (3 bytes)
                     CBFE   118 Vec_Cold_Flag   =     0xCBFE   ;Cold start flag (warm start if = 0x7321)
                            119                                 ;
                     D000   120 VIA_port_b      =     0xD000   ;VIA port B data I/O register
                            121 ;       0 sample/hold (0=enable  mux 1=disable mux)
                            122 ;       1 mux sel 0
                            123 ;       2 mux sel 1
                            124 ;       3 sound BC1
                            125 ;       4 sound BDIR
                            126 ;       5 comparator input
                            127 ;       6 external device (slot pin 35) initialized to input
                            128 ;       7 /RAMP
                     D001   129 VIA_port_a      =     0xD001   ;VIA port A data I/O register (handshaking)
                     D002   130 VIA_DDR_b       =     0xD002   ;VIA port B data direction register (0=input 1=output)
                     D003   131 VIA_DDR_a       =     0xD003   ;VIA port A data direction register (0=input 1=output)
                     D004   132 VIA_t1_cnt_lo   =     0xD004   ;VIA timer 1 count register lo (scale factor)
                     D005   133 VIA_t1_cnt_hi   =     0xD005   ;VIA timer 1 count register hi
                     D006   134 VIA_t1_lch_lo   =     0xD006   ;VIA timer 1 latch register lo
                     D007   135 VIA_t1_lch_hi   =     0xD007   ;VIA timer 1 latch register hi
                     D008   136 VIA_t2_lo       =     0xD008   ;VIA timer 2 count/latch register lo (refresh)
                     D009   137 VIA_t2_hi       =     0xD009   ;VIA timer 2 count/latch register hi
                     D00A   138 VIA_shift_reg   =     0xD00A   ;VIA shift register
                     D00B   139 VIA_aux_cntl    =     0xD00B   ;VIA auxiliary control register
                            140 ;       0 PA latch enable
                            141 ;       1 PB latch enable
                            142 ;       2 \                     110=output to CB2 under control of phase 2 clock
                            143 ;       3  > shift register control     (110 is the only mode used by the Vectrex ROM)
                            144 ;       4 /
                            145 ;       5 0=t2 one shot                 1=t2 free running
                            146 ;       6 0=t1 one shot                 1=t1 free running
                            147 ;       7 0=t1 disable PB7 output       1=t1 enable PB7 output
                     D00C   148 VIA_cntl        =     0xD00C   ;VIA control register
                            149 ;       0 CA1 control     CA1 -> SW7    0=IRQ on low 1=IRQ on high
                            150 ;       1 \
                            151 ;       2  > CA2 control  CA2 -> /ZERO  110=low 111=high
                            152 ;       3 /
                            153 ;       4 CB1 control     CB1 -> NC     0=IRQ on low 1=IRQ on high
                            154 ;       5 \
                            155 ;       6  > CB2 control  CB2 -> /BLANK 110=low 111=high
                            156 ;       7 /
                     D00D   157 VIA_int_flags   =     0xD00D   ;VIA interrupt flags register
                            158 ;               bit                             cleared by
                            159 ;       0 CA2 interrupt flag            reading or writing port A I/O
                            160 ;       1 CA1 interrupt flag            reading or writing port A I/O
                            161 ;       2 shift register interrupt flag reading or writing shift register
                            162 ;       3 CB2 interrupt flag            reading or writing port B I/O
                            163 ;       4 CB1 interrupt flag            reading or writing port A I/O
                            164 ;       5 timer 2 interrupt flag        read t2 low or write t2 high
                            165 ;       6 timer 1 interrupt flag        read t1 count low or write t1 high
                            166 ;       7 IRQ status flag               write logic 0 to IER or IFR bit
                     D00E   167 VIA_int_enable  =     0xD00E   ;VIA interrupt enable register
                            168 ;       0 CA2 interrupt enable
                            169 ;       1 CA1 interrupt enable
                            170 ;       2 shift register interrupt enable
                            171 ;       3 CB2 interrupt enable
                            172 ;       4 CB1 interrupt enable
                            173 ;       5 timer 2 interrupt enable
                            174 ;       6 timer 1 interrupt enable
                            175 ;       7 IER set/clear control
                     D00F   176 VIA_port_a_nohs =     0xD00F   ;VIA port A data I/O register (no handshaking)
                            177 
                     F000   178 Cold_Start      =     0xF000   ;
                     F06C   179 Warm_Start      =     0xF06C   ;
                     F14C   180 Init_VIA        =     0xF14C   ;
                     F164   181 Init_OS_RAM     =     0xF164   ;
                     F18B   182 Init_OS         =     0xF18B   ;
                     F192   183 Wait_Recal      =     0xF192   ;
                     F1A2   184 Set_Refresh     =     0xF1A2   ;
                     F1AA   185 DP_to_D0        =     0xF1AA   ;
                     F1AF   186 DP_to_C8        =     0xF1AF   ;
                     F1B4   187 Read_Btns_Mask  =     0xF1B4   ;
                     F1BA   188 Read_Btns       =     0xF1BA   ;
                     F1F5   189 Joy_Analog      =     0xF1F5   ;
                     F1F8   190 Joy_Digital     =     0xF1F8   ;
                     F256   191 Sound_Byte      =     0xF256   ;
                     F259   192 Sound_Byte_x    =     0xF259   ;
                     F25B   193 Sound_Byte_raw  =     0xF25B   ;
                     F272   194 Clear_Sound     =     0xF272   ;
                     F27D   195 Sound_Bytes     =     0xF27D   ;
                     F284   196 Sound_Bytes_x   =     0xF284   ;
                     F289   197 Do_Sound        =     0xF289   ;
                     F28C   198 Do_Sound_x      =     0xF28C   ;
                     F29D   199 Intensity_1F    =     0xF29D   ;
                     F2A1   200 Intensity_3F    =     0xF2A1   ;
                     F2A5   201 Intensity_5F    =     0xF2A5   ;
                     F2A9   202 Intensity_7F    =     0xF2A9   ;
                     F2AB   203 Intensity_a     =     0xF2AB   ;
                     F2BE   204 Dot_ix_b        =     0xF2BE   ;
                     F2C1   205 Dot_ix          =     0xF2C1   ;
                     F2C3   206 Dot_d           =     0xF2C3   ;
                     F2C5   207 Dot_here        =     0xF2C5   ;
                     F2D5   208 Dot_List        =     0xF2D5   ;
                     F2DE   209 Dot_List_Reset  =     0xF2DE   ;
                     F2E6   210 Recalibrate     =     0xF2E6   ;
                     F2F2   211 Moveto_x_7F     =     0xF2F2   ;
                     F2FC   212 Moveto_d_7F     =     0xF2FC   ;
                     F308   213 Moveto_ix_FF    =     0xF308   ;
                     F30C   214 Moveto_ix_7F    =     0xF30C   ;
                     F30E   215 Moveto_ix_b     =     0xF30E   ;
                     F310   216 Moveto_ix       =     0xF310   ;
                     F312   217 Moveto_d        =     0xF312   ;
                     F34A   218 Reset0Ref_D0    =     0xF34A   ;
                     F34F   219 Check0Ref       =     0xF34F   ;
                     F354   220 Reset0Ref       =     0xF354   ;
                     F35B   221 Reset_Pen       =     0xF35B   ;
                     F36B   222 Reset0Int       =     0xF36B   ;
                     F373   223 Print_Str_hwyx  =     0xF373   ;
                     F378   224 Print_Str_yx    =     0xF378   ;
                     F37A   225 Print_Str_d     =     0xF37A   ;
                     F385   226 Print_List_hw   =     0xF385   ;
                     F38A   227 Print_List      =     0xF38A   ;
                     F38C   228 Print_List_chk  =     0xF38C   ;
                     F391   229 Print_Ships_x   =     0xF391   ;
                     F393   230 Print_Ships     =     0xF393   ;
                     F3AD   231 Mov_Draw_VLc_a  =     0xF3AD   ;count y x y x ...
                     F3B1   232 Mov_Draw_VL_b   =     0xF3B1   ;y x y x ...
                     F3B5   233 Mov_Draw_VLcs   =     0xF3B5   ;count scale y x y x ...
                     F3B7   234 Mov_Draw_VL_ab  =     0xF3B7   ;y x y x ...
                     F3B9   235 Mov_Draw_VL_a   =     0xF3B9   ;y x y x ...
                     F3BC   236 Mov_Draw_VL     =     0xF3BC   ;y x y x ...
                     F3BE   237 Mov_Draw_VL_d   =     0xF3BE   ;y x y x ...
                     F3CE   238 Draw_VLc        =     0xF3CE   ;count y x y x ...
                     F3D2   239 Draw_VL_b       =     0xF3D2   ;y x y x ...
                     F3D6   240 Draw_VLcs       =     0xF3D6   ;count scale y x y x ...
                     F3D8   241 Draw_VL_ab      =     0xF3D8   ;y x y x ...
                     F3DA   242 Draw_VL_a       =     0xF3DA   ;y x y x ...
                     F3DD   243 Draw_VL         =     0xF3DD   ;y x y x ...
                     F3DF   244 Draw_Line_d     =     0xF3DF   ;y x y x ...
                     F404   245 Draw_VLp_FF     =     0xF404   ;pattern y x pattern y x ... 0x01
                     F408   246 Draw_VLp_7F     =     0xF408   ;pattern y x pattern y x ... 0x01
                     F40C   247 Draw_VLp_scale  =     0xF40C   ;scale pattern y x pattern y x ... 0x01
                     F40E   248 Draw_VLp_b      =     0xF40E   ;pattern y x pattern y x ... 0x01
                     F410   249 Draw_VLp        =     0xF410   ;pattern y x pattern y x ... 0x01
                     F434   250 Draw_Pat_VL_a   =     0xF434   ;y x y x ...
                     F437   251 Draw_Pat_VL     =     0xF437   ;y x y x ...
                     F439   252 Draw_Pat_VL_d   =     0xF439   ;y x y x ...
                     F46E   253 Draw_VL_mode    =     0xF46E   ;mode y x mode y x ... 0x01
                     F495   254 Print_Str       =     0xF495   ;
                     F511   255 Random_3        =     0xF511   ;
                     F517   256 Random          =     0xF517   ;
                     F533   257 Init_Music_Buf  =     0xF533   ;
                     F53F   258 Clear_x_b       =     0xF53F   ;
                     F542   259 Clear_C8_RAM    =     0xF542   ;never used by GCE carts?
                     F545   260 Clear_x_256     =     0xF545   ;
                     F548   261 Clear_x_d       =     0xF548   ;
                     F550   262 Clear_x_b_80    =     0xF550   ;
                     F552   263 Clear_x_b_a     =     0xF552   ;
                     F55A   264 Dec_3_Counters  =     0xF55A   ;
                     F55E   265 Dec_6_Counters  =     0xF55E   ;
                     F563   266 Dec_Counters    =     0xF563   ;
                     F56D   267 Delay_3         =     0xF56D   ;30 cycles
                     F571   268 Delay_2         =     0xF571   ;25 cycles
                     F575   269 Delay_1         =     0xF575   ;20 cycles
                     F579   270 Delay_0         =     0xF579   ;12 cycles
                     F57A   271 Delay_b         =     0xF57A   ;5*B + 10 cycles
                     F57D   272 Delay_RTS       =     0xF57D   ;5 cycles
                     F57E   273 Bitmask_a       =     0xF57E   ;
                     F584   274 Abs_a_b         =     0xF584   ;
                     F58B   275 Abs_b           =     0xF58B   ;
                     F593   276 Rise_Run_Angle  =     0xF593   ;
                     F5D9   277 Get_Rise_Idx    =     0xF5D9   ;
                     F5DB   278 Get_Run_Idx     =     0xF5DB   ;
                     F5EF   279 Get_Rise_Run    =     0xF5EF   ;
                     F5FF   280 Rise_Run_X      =     0xF5FF   ;
                     F601   281 Rise_Run_Y      =     0xF601   ;
                     F603   282 Rise_Run_Len    =     0xF603   ;
                            283 
                     F610   284 Rot_VL_ab       =     0xF610   ;
                     F616   285 Rot_VL          =     0xF616   ;
                     F61F   286 Rot_VL_Mode   =     0xF61F   ;
                     F62B   287 Rot_VL_M_dft     =     0xF62B   ;
                            288 ;Rot_VL_dft      EQU     0xF637   ;
                            289 
                            290 
                            291 ;Rot_VL_ab       EQU     0xF610   ;
                            292 ;Rot_VL          EQU     0xF616   ;
                            293 ;Rot_VL_Mode_a   EQU     0xF61F   ;
                            294 ;Rot_VL_Mode     EQU     0xF62B   ;
                            295 ;Rot_VL_dft      EQU     0xF637   ;
                            296 
                     F65B   297 Xform_Run_a     =     0xF65B   ;
                     F65D   298 Xform_Run       =     0xF65D   ;
                     F661   299 Xform_Rise_a    =     0xF661   ;
                     F663   300 Xform_Rise      =     0xF663   ;
                     F67F   301 Move_Mem_a_1    =     0xF67F   ;
                     F683   302 Move_Mem_a      =     0xF683   ;
                     F687   303 Init_Music_chk  =     0xF687   ;
                     F68D   304 Init_Music      =     0xF68D   ;
                     F692   305 Init_Music_x    =     0xF692   ;
                     F7A9   306 Select_Game     =     0xF7A9   ;
                     F84F   307 Clear_Score     =     0xF84F   ;
                     F85E   308 Add_Score_a     =     0xF85E   ;
                     F87C   309 Add_Score_d     =     0xF87C   ;
                     F8B7   310 Strip_Zeros     =     0xF8B7   ;
                     F8C7   311 Compare_Score   =     0xF8C7   ;
                     F8D8   312 New_High_Score  =     0xF8D8   ;
                     F8E5   313 Obj_Will_Hit_u  =     0xF8E5   ;
                     F8F3   314 Obj_Will_Hit    =     0xF8F3   ;
                     F8FF   315 Obj_Hit         =     0xF8FF   ;
                     F92E   316 Explosion_Snd   =     0xF92E   ;
                     FF9F   317 Draw_Grid_VL    =     0xFF9F   ;
                            318                                 ;
                     FD0D   319 music1  = 0xFD0D               ;
                     FD1D   320 music2  = 0xFD1D               ;
                     FD81   321 music3  = 0xFD81               ;
                     FDD3   322 music4  = 0xFDD3               ;
                     FE38   323 music5  = 0xFE38               ;
                     FE76   324 music6  = 0xFE76               ;
                     FEC6   325 music7  = 0xFEC6               ;
                     FEF8   326 music8  = 0xFEF8               ;
                     FF26   327 music9  = 0xFF26               ;
                     FF44   328 musica  = 0xFF44               ;
                     FF62   329 musicb  = 0xFF62               ;
                     FF7A   330 musicc  = 0xFF7A               ;
                     FF8F   331 musicd  = 0xFF8F               ;
                     F9F4   332 Char_Table = 0xF9F4
                     FBD4   333 Char_Table_End = 0xFBD4
                            334 
                            335 
                            336                     .area .text     
                            337 
                            338 ; here the cartridge program starts off
                     00E0   339 SHIFT_1             =        0b11100000 
                     00FE   340 SHIFT_2             =        0b11111110 
                            341 ; cmpx #4
                            342 ; pshs d,y,x,pc,u,cc;16
                            343 ; puls d,y,x,pc,u,cc; 16
                            344 ; pshs y,x,pc,u,cc;14
                            345 ; puls y,x,pc,u,cc; 14
                            346 ; pshs a,x,pc,u,cc;13
                            347 ; puls a,x,pc,u,cc;13
                            348 
                            349 ; pshs x,pc,u,cc;12
                            350 ; puls x,pc,u,cc;12
                            351 ; pshs pc,u,cc;10
                            352 ; puls pc,u,cc;10
                            353 ; pshs u,cc;8
                            354 ; puls u,cc;8
                            355 ; pshs u;7
                            356 ; puls u;7
                            357 
                            358 ; pshs cc;6
                            359 ; puls cc;6
                            360 ; tfr a,a; 6
                            361 ; brn 0; 3
                            362 ; NOP ; 2
                            363 
                            364 
                            365 ; Warning - direct line found!
                            366 ; direct 0xd0
                            367  .globl drawWebAsm
   6ED4                     368 drawWebAsm:
                            369 
                            370 ; macro call ->  _ZERO_VECTOR_BEAM  
   6ED4 C6 CC         [ 2]  371                     LDB      #0xCC                         ; 2 
   6ED6 D7 0C         [ 4]  372                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                            373 ; macro call ->  WAIT12
   6ED8 1F 88         [ 6]  374 	tfr a,a; wait 12 cycles
   6EDA 1F 88         [ 6]  375      tfr a,a
                            376 
   6EDC 86 CE         [ 2]  377                     LDA      #0xCE                         ;Blank low, zero high? 
   6EDE 97 0C         [ 4]  378                     STA      *VIA_cntl                    ; 
                            379 ; first WEB
   6EE0 86 10         [ 2]  380                     LDA      #16                          ;(0x7f/8) ; scalefactor 
   6EE2 97 04         [ 4]  381                     STA      *VIA_t1_cnt_lo 
                            382 ; macro call ->                     MOVE_TO_OPEN  -26, 105                ; possibly a bit less 127/11 is 15,875 
                            383 ; assuming SHIFT is zeri
   6EE4 CC 00 E6      [ 3]  384                     LDD      #0+((-26)&0xff)                  ;3 A = 0; B = Y 
   6EE7 DD 00         [ 5]  385                     STD      *VIA_port_b                  ; 6 
   6EE9 C6 69         [ 2]  386                     LDB      #105 
   6EEB 0C 00         [ 6]  387                     INC      *VIA_port_b                  ;Disable mux 
   6EED D7 01         [ 4]  388                     STB      *VIA_port_a                  ;Send X to A/D 
   6EEF 97 05         [ 4]  389                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
   6EF1 86 09         [ 2]  390                     LDA      #9                           ;(0x7f/11) ; 2 scalefactor 
   6EF3 97 04         [ 4]  391                     STA      *VIA_t1_cnt_lo               ; 4 
                            392 ; macro call ->                     CLOSE    
   6EF5 86 40         [ 2]  393                     LDA      #0x40                         ; 
                            394  .globl LF33D4
   6EF7 95 0D         [ 4]  395 LF33D4:              BITA     *VIA_int_flags               ; 
   6EF9 27 FC         [ 3]  396                     BEQ      LF33D4                        ; 
                            397 ; macro call ->                     DRAW_TO_OPEN  -70, -127               ; 127 == 11,6= 70 
   6EFB CC 00 BA      [ 3]  398                     LDD      #0+((-70)&0xff)                  ;3 A = 0; B = Y 
   6EFE DD 00         [ 5]  399                     STD      *VIA_port_b                  ; 6 
   6F00 C6 81         [ 2]  400                     LDB      #-127 
   6F02 0C 00         [ 6]  401                     INC      *VIA_port_b                  ;Disable mux 
   6F04 D7 01         [ 4]  402                     STB      *VIA_port_a                  ;Send X to A/D 
   6F06 C6 3F         [ 2]  403                     LDB      #0b00111111 
   6F08 D7 0A         [ 4]  404                     STB      *VIA_shift_reg 
   6F0A 97 05         [ 4]  405                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            406 ; macro call ->                     CLOSE_SHORT  
   6F0C C6 FE         [ 2]  407                     ldb      #SHIFT_2 
                            408  .globl LF33D6
   6F0E                     409 LF33D6: 
   6F0E 96 04         [ 4]  410                     LDA      *VIA_t1_cnt_lo 
   6F10 81 0A         [ 2]  411                     cmpa     #10 
   6F12 22 FA         [ 3]  412                     bhi      LF33D6 
   6F14 D7 0A         [ 4]  413                     stb      *VIA_shift_reg 
                            414 ; macro call ->                     DRAW_TO_OPEN  0*11, -85 
   6F16 CC 00 00      [ 3]  415                     LDD      #0+((0*11)&0xff)                  ;3 A = 0; B = Y 
   6F19 DD 00         [ 5]  416                     STD      *VIA_port_b                  ; 6 
   6F1B C6 AB         [ 2]  417                     LDB      #-85 
   6F1D 0C 00         [ 6]  418                     INC      *VIA_port_b                  ;Disable mux 
   6F1F D7 01         [ 4]  419                     STB      *VIA_port_a                  ;Send X to A/D 
   6F21 C6 3F         [ 2]  420                     LDB      #0b00111111 
   6F23 D7 0A         [ 4]  421                     STB      *VIA_shift_reg 
   6F25 97 05         [ 4]  422                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            423 ; macro call ->                     CLOSE_SHORT  
   6F27 C6 FE         [ 2]  424                     ldb      #SHIFT_2 
                            425  .globl LF33D8
   6F29                     426 LF33D8: 
   6F29 96 04         [ 4]  427                     LDA      *VIA_t1_cnt_lo 
   6F2B 81 0A         [ 2]  428                     cmpa     #10 
   6F2D 22 FA         [ 3]  429                     bhi      LF33D8 
   6F2F D7 0A         [ 4]  430                     stb      *VIA_shift_reg 
                            431 ; macro call ->                     DRAW_TO_OPEN  70, -127 
   6F31 CC 00 46      [ 3]  432                     LDD      #0+((70)&0xff)                  ;3 A = 0; B = Y 
   6F34 DD 00         [ 5]  433                     STD      *VIA_port_b                  ; 6 
   6F36 C6 81         [ 2]  434                     LDB      #-127 
   6F38 0C 00         [ 6]  435                     INC      *VIA_port_b                  ;Disable mux 
   6F3A D7 01         [ 4]  436                     STB      *VIA_port_a                  ;Send X to A/D 
   6F3C C6 3F         [ 2]  437                     LDB      #0b00111111 
   6F3E D7 0A         [ 4]  438                     STB      *VIA_shift_reg 
   6F40 97 05         [ 4]  439                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            440 ; macro call ->                     CLOSE_SHORT  
   6F42 C6 FE         [ 2]  441                     ldb      #SHIFT_2 
                            442  .globl LF33D10
   6F44                     443 LF33D10: 
   6F44 96 04         [ 4]  444                     LDA      *VIA_t1_cnt_lo 
   6F46 81 0A         [ 2]  445                     cmpa     #10 
   6F48 22 FA         [ 3]  446                     bhi      LF33D10 
   6F4A D7 0A         [ 4]  447                     stb      *VIA_shift_reg 
                            448 ; macro call ->                     DRAW_TO_OPEN_X0  85 
   6F4C CC 00 55      [ 3]  449                     LDD      #0+((85)&0xff)                  ;3 A = 0; B = Y 
   6F4F DD 00         [ 5]  450                     STD      *VIA_port_b                  ; 6 
   6F51 C6 3F         [ 2]  451                     LDB      #0b00111111 
   6F53 0C 00         [ 6]  452                     INC      *VIA_port_b                  ;Disable mux 
   6F55 97 01         [ 4]  453                     STa      *VIA_port_a                  ;Send X to A/D 
   6F57 D7 0A         [ 4]  454                     STB      *VIA_shift_reg 
   6F59 97 05         [ 4]  455                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            456 ; macro call ->                     CLOSE_SHORT  
   6F5B C6 FE         [ 2]  457                     ldb      #SHIFT_2 
                            458  .globl LF33D12
   6F5D                     459 LF33D12: 
   6F5D 96 04         [ 4]  460                     LDA      *VIA_t1_cnt_lo 
   6F5F 81 0A         [ 2]  461                     cmpa     #10 
   6F61 22 FA         [ 3]  462                     bhi      LF33D12 
   6F63 D7 0A         [ 4]  463                     stb      *VIA_shift_reg 
                            464 ; macro call ->                     DRAW_TO_OPEN  70, 127 
   6F65 CC 00 46      [ 3]  465                     LDD      #0+((70)&0xff)                  ;3 A = 0; B = Y 
   6F68 DD 00         [ 5]  466                     STD      *VIA_port_b                  ; 6 
   6F6A C6 7F         [ 2]  467                     LDB      #127 
   6F6C 0C 00         [ 6]  468                     INC      *VIA_port_b                  ;Disable mux 
   6F6E D7 01         [ 4]  469                     STB      *VIA_port_a                  ;Send X to A/D 
   6F70 C6 3F         [ 2]  470                     LDB      #0b00111111 
   6F72 D7 0A         [ 4]  471                     STB      *VIA_shift_reg 
   6F74 97 05         [ 4]  472                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            473 ; macro call ->                     CLOSE_SHORT  
   6F76 C6 FE         [ 2]  474                     ldb      #SHIFT_2 
                            475  .globl LF33D14
   6F78                     476 LF33D14: 
   6F78 96 04         [ 4]  477                     LDA      *VIA_t1_cnt_lo 
   6F7A 81 0A         [ 2]  478                     cmpa     #10 
   6F7C 22 FA         [ 3]  479                     bhi      LF33D14 
   6F7E D7 0A         [ 4]  480                     stb      *VIA_shift_reg 
                            481 ; macro call ->                     DRAW_TO_OPEN  0*11, 85 
   6F80 CC 00 00      [ 3]  482                     LDD      #0+((0*11)&0xff)                  ;3 A = 0; B = Y 
   6F83 DD 00         [ 5]  483                     STD      *VIA_port_b                  ; 6 
   6F85 C6 55         [ 2]  484                     LDB      #85 
   6F87 0C 00         [ 6]  485                     INC      *VIA_port_b                  ;Disable mux 
   6F89 D7 01         [ 4]  486                     STB      *VIA_port_a                  ;Send X to A/D 
   6F8B C6 3F         [ 2]  487                     LDB      #0b00111111 
   6F8D D7 0A         [ 4]  488                     STB      *VIA_shift_reg 
   6F8F 97 05         [ 4]  489                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            490 ; macro call ->                     CLOSE_SHORT  
   6F91 C6 FE         [ 2]  491                     ldb      #SHIFT_2 
                            492  .globl LF33D16
   6F93                     493 LF33D16: 
   6F93 96 04         [ 4]  494                     LDA      *VIA_t1_cnt_lo 
   6F95 81 0A         [ 2]  495                     cmpa     #10 
   6F97 22 FA         [ 3]  496                     bhi      LF33D16 
   6F99 D7 0A         [ 4]  497                     stb      *VIA_shift_reg 
                            498 ; macro call ->                     DRAW_TO_OPEN  -70, 127 
   6F9B CC 00 BA      [ 3]  499                     LDD      #0+((-70)&0xff)                  ;3 A = 0; B = Y 
   6F9E DD 00         [ 5]  500                     STD      *VIA_port_b                  ; 6 
   6FA0 C6 7F         [ 2]  501                     LDB      #127 
   6FA2 0C 00         [ 6]  502                     INC      *VIA_port_b                  ;Disable mux 
   6FA4 D7 01         [ 4]  503                     STB      *VIA_port_a                  ;Send X to A/D 
   6FA6 C6 3F         [ 2]  504                     LDB      #0b00111111 
   6FA8 D7 0A         [ 4]  505                     STB      *VIA_shift_reg 
   6FAA 97 05         [ 4]  506                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            507 ; macro call ->                     CLOSE_SHORT  
   6FAC C6 FE         [ 2]  508                     ldb      #SHIFT_2 
                            509  .globl LF33D18
   6FAE                     510 LF33D18: 
   6FAE 96 04         [ 4]  511                     LDA      *VIA_t1_cnt_lo 
   6FB0 81 0A         [ 2]  512                     cmpa     #10 
   6FB2 22 FA         [ 3]  513                     bhi      LF33D18 
   6FB4 D7 0A         [ 4]  514                     stb      *VIA_shift_reg 
                            515 ; macro call ->                     DRAW_TO_OPEN_X0  -85 
   6FB6 CC 00 AB      [ 3]  516                     LDD      #0+((-85)&0xff)                  ;3 A = 0; B = Y 
   6FB9 DD 00         [ 5]  517                     STD      *VIA_port_b                  ; 6 
   6FBB C6 3F         [ 2]  518                     LDB      #0b00111111 
   6FBD 0C 00         [ 6]  519                     INC      *VIA_port_b                  ;Disable mux 
   6FBF 97 01         [ 4]  520                     STa      *VIA_port_a                  ;Send X to A/D 
   6FC1 D7 0A         [ 4]  521                     STB      *VIA_shift_reg 
   6FC3 97 05         [ 4]  522                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            523 ; macro call ->                     CLOSE_SHORT  
   6FC5 C6 FE         [ 2]  524                     ldb      #SHIFT_2 
                            525  .globl LF33D20
   6FC7                     526 LF33D20: 
   6FC7 96 04         [ 4]  527                     LDA      *VIA_t1_cnt_lo 
   6FC9 81 0A         [ 2]  528                     cmpa     #10 
   6FCB 22 FA         [ 3]  529                     bhi      LF33D20 
   6FCD D7 0A         [ 4]  530                     stb      *VIA_shift_reg 
                            531 ; macro call ->  WAIT6
   6FCF 1F 88         [ 6]  532 	tfr a,a; wait 6 cycles
                            533 ; macro call ->                     _ZERO_VECTOR_BEAM  
   6FD1 C6 CC         [ 2]  534                     LDB      #0xCC                         ; 2 
   6FD3 D7 0C         [ 4]  535                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                            536 ; macro call ->  WAIT8
   6FD5 1F 88         [ 6]  537 	tfr a,a; wait 8 cycles
   6FD7 12            [ 2]  538  nop 
                            539 ; second web
   6FD8 86 CE         [ 2]  540                     LDA      #0xCE                         ;Blank low, zero high? 
   6FDA 97 0C         [ 4]  541                     STA      *VIA_cntl                    ; 
   6FDC 86 23         [ 2]  542                     LDA      #35 -0                       ;(0x7f/8) ; scalefactor 
   6FDE 97 04         [ 4]  543                     STA      *VIA_t1_cnt_lo 
                            544 ; macro call ->                     MOVE_TO_OPEN  127, 70-2               ; possibly a bit less 127/11 is 15,875 
                            545 ; assuming SHIFT is zeri
   6FE0 CC 00 7F      [ 3]  546                     LDD      #0+((127)&0xff)                  ;3 A = 0; B = Y 
   6FE3 DD 00         [ 5]  547                     STD      *VIA_port_b                  ; 6 
   6FE5 C6 44         [ 2]  548                     LDB      #70-2 
   6FE7 0C 00         [ 6]  549                     INC      *VIA_port_b                  ;Disable mux 
   6FE9 D7 01         [ 4]  550                     STB      *VIA_port_a                  ;Send X to A/D 
   6FEB 97 05         [ 4]  551                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
   6FED 86 27         [ 2]  552                     LDA      #39                          ;(0x7f/11) ; 2 scalefactor 
   6FEF 97 04         [ 4]  553                     STA      *VIA_t1_cnt_lo               ; 4 
                            554 ; macro call ->                     CLOSE    
   6FF1 86 40         [ 2]  555                     LDA      #0x40                         ; 
                            556  .globl LF33D25
   6FF3 95 0D         [ 4]  557 LF33D25:              BITA     *VIA_int_flags               ; 
   6FF5 27 FC         [ 3]  558                     BEQ      LF33D25                        ; 
                     00E0   559 SHIFT_1             =        0b11100000 
                            560 ; macro call ->                     DRAW_TO_OPEN  0, -127 
   6FF7 CC 00 00      [ 3]  561                     LDD      #0+((0)&0xff)                  ;3 A = 0; B = Y 
   6FFA DD 00         [ 5]  562                     STD      *VIA_port_b                  ; 6 
   6FFC C6 81         [ 2]  563                     LDB      #-127 
   6FFE 0C 00         [ 6]  564                     INC      *VIA_port_b                  ;Disable mux 
   7000 D7 01         [ 4]  565                     STB      *VIA_port_a                  ;Send X to A/D 
   7002 C6 3F         [ 2]  566                     LDB      #0b00111111 
   7004 D7 0A         [ 4]  567                     STB      *VIA_shift_reg 
   7006 97 05         [ 4]  568                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            569 ; macro call ->                     CLOSE_SHORT  
   7008 C6 FE         [ 2]  570                     ldb      #SHIFT_2 
                            571  .globl LF33D27
   700A                     572 LF33D27: 
   700A 96 04         [ 4]  573                     LDA      *VIA_t1_cnt_lo 
   700C 81 0A         [ 2]  574                     cmpa     #10 
   700E 22 FA         [ 3]  575                     bhi      LF33D27 
   7010 D7 0A         [ 4]  576                     stb      *VIA_shift_reg 
                            577 ; macro call ->                     DRAW_TO_OPEN  -88, -50 
   7012 CC 00 A8      [ 3]  578                     LDD      #0+((-88)&0xff)                  ;3 A = 0; B = Y 
   7015 DD 00         [ 5]  579                     STD      *VIA_port_b                  ; 6 
   7017 C6 CE         [ 2]  580                     LDB      #-50 
   7019 0C 00         [ 6]  581                     INC      *VIA_port_b                  ;Disable mux 
   701B D7 01         [ 4]  582                     STB      *VIA_port_a                  ;Send X to A/D 
   701D C6 3F         [ 2]  583                     LDB      #0b00111111 
   701F D7 0A         [ 4]  584                     STB      *VIA_shift_reg 
   7021 97 05         [ 4]  585                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            586 ; macro call ->                     CLOSE_SHORT  
   7023 C6 FE         [ 2]  587                     ldb      #SHIFT_2 
                            588  .globl LF33D29
   7025                     589 LF33D29: 
   7025 96 04         [ 4]  590                     LDA      *VIA_t1_cnt_lo 
   7027 81 0A         [ 2]  591                     cmpa     #10 
   7029 22 FA         [ 3]  592                     bhi      LF33D29 
   702B D7 0A         [ 4]  593                     stb      *VIA_shift_reg 
                            594 ; macro call ->                     DRAW_TO_OPEN_X0  -50 
   702D CC 00 CE      [ 3]  595                     LDD      #0+((-50)&0xff)                  ;3 A = 0; B = Y 
   7030 DD 00         [ 5]  596                     STD      *VIA_port_b                  ; 6 
   7032 C6 3F         [ 2]  597                     LDB      #0b00111111 
   7034 0C 00         [ 6]  598                     INC      *VIA_port_b                  ;Disable mux 
   7036 97 01         [ 4]  599                     STa      *VIA_port_a                  ;Send X to A/D 
   7038 D7 0A         [ 4]  600                     STB      *VIA_shift_reg 
   703A 97 05         [ 4]  601                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            602 ; macro call ->                     CLOSE_SHORT  
   703C C6 FE         [ 2]  603                     ldb      #SHIFT_2 
                            604  .globl LF33D31
   703E                     605 LF33D31: 
   703E 96 04         [ 4]  606                     LDA      *VIA_t1_cnt_lo 
   7040 81 0A         [ 2]  607                     cmpa     #10 
   7042 22 FA         [ 3]  608                     bhi      LF33D31 
   7044 D7 0A         [ 4]  609                     stb      *VIA_shift_reg 
                            610 ; macro call ->                     DRAW_TO_OPEN  -88,50 
   7046 CC 00 A8      [ 3]  611                     LDD      #0+((-88)&0xff)                  ;3 A = 0; B = Y 
   7049 DD 00         [ 5]  612                     STD      *VIA_port_b                  ; 6 
   704B C6 32         [ 2]  613                     LDB      #50 
   704D 0C 00         [ 6]  614                     INC      *VIA_port_b                  ;Disable mux 
   704F D7 01         [ 4]  615                     STB      *VIA_port_a                  ;Send X to A/D 
   7051 C6 3F         [ 2]  616                     LDB      #0b00111111 
   7053 D7 0A         [ 4]  617                     STB      *VIA_shift_reg 
   7055 97 05         [ 4]  618                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            619 ; macro call ->                     CLOSE_SHORT  
   7057 C6 FE         [ 2]  620                     ldb      #SHIFT_2 
                            621  .globl LF33D33
   7059                     622 LF33D33: 
   7059 96 04         [ 4]  623                     LDA      *VIA_t1_cnt_lo 
   705B 81 0A         [ 2]  624                     cmpa     #10 
   705D 22 FA         [ 3]  625                     bhi      LF33D33 
   705F D7 0A         [ 4]  626                     stb      *VIA_shift_reg 
                            627 ; macro call ->                     DRAW_TO_OPEN  0, 127 
   7061 CC 00 00      [ 3]  628                     LDD      #0+((0)&0xff)                  ;3 A = 0; B = Y 
   7064 DD 00         [ 5]  629                     STD      *VIA_port_b                  ; 6 
   7066 C6 7F         [ 2]  630                     LDB      #127 
   7068 0C 00         [ 6]  631                     INC      *VIA_port_b                  ;Disable mux 
   706A D7 01         [ 4]  632                     STB      *VIA_port_a                  ;Send X to A/D 
   706C C6 3F         [ 2]  633                     LDB      #0b00111111 
   706E D7 0A         [ 4]  634                     STB      *VIA_shift_reg 
   7070 97 05         [ 4]  635                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            636 ; macro call ->                     CLOSE_SHORT  
   7072 C6 FE         [ 2]  637                     ldb      #SHIFT_2 
                            638  .globl LF33D35
   7074                     639 LF33D35: 
   7074 96 04         [ 4]  640                     LDA      *VIA_t1_cnt_lo 
   7076 81 0A         [ 2]  641                     cmpa     #10 
   7078 22 FA         [ 3]  642                     bhi      LF33D35 
   707A D7 0A         [ 4]  643                     stb      *VIA_shift_reg 
                            644 ; macro call ->                     DRAW_TO_OPEN  88,50 
   707C CC 00 58      [ 3]  645                     LDD      #0+((88)&0xff)                  ;3 A = 0; B = Y 
   707F DD 00         [ 5]  646                     STD      *VIA_port_b                  ; 6 
   7081 C6 32         [ 2]  647                     LDB      #50 
   7083 0C 00         [ 6]  648                     INC      *VIA_port_b                  ;Disable mux 
   7085 D7 01         [ 4]  649                     STB      *VIA_port_a                  ;Send X to A/D 
   7087 C6 3F         [ 2]  650                     LDB      #0b00111111 
   7089 D7 0A         [ 4]  651                     STB      *VIA_shift_reg 
   708B 97 05         [ 4]  652                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            653 ; macro call ->                     CLOSE_SHORT  
   708D C6 FE         [ 2]  654                     ldb      #SHIFT_2 
                            655  .globl LF33D37
   708F                     656 LF33D37: 
   708F 96 04         [ 4]  657                     LDA      *VIA_t1_cnt_lo 
   7091 81 0A         [ 2]  658                     cmpa     #10 
   7093 22 FA         [ 3]  659                     bhi      LF33D37 
   7095 D7 0A         [ 4]  660                     stb      *VIA_shift_reg 
                            661 ; macro call ->                     DRAW_TO_OPEN_X0  50 
   7097 CC 00 32      [ 3]  662                     LDD      #0+((50)&0xff)                  ;3 A = 0; B = Y 
   709A DD 00         [ 5]  663                     STD      *VIA_port_b                  ; 6 
   709C C6 3F         [ 2]  664                     LDB      #0b00111111 
   709E 0C 00         [ 6]  665                     INC      *VIA_port_b                  ;Disable mux 
   70A0 97 01         [ 4]  666                     STa      *VIA_port_a                  ;Send X to A/D 
   70A2 D7 0A         [ 4]  667                     STB      *VIA_shift_reg 
   70A4 97 05         [ 4]  668                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            669 ; macro call ->                     CLOSE_SHORT  
   70A6 C6 FE         [ 2]  670                     ldb      #SHIFT_2 
                            671  .globl LF33D39
   70A8                     672 LF33D39: 
   70A8 96 04         [ 4]  673                     LDA      *VIA_t1_cnt_lo 
   70AA 81 0A         [ 2]  674                     cmpa     #10 
   70AC 22 FA         [ 3]  675                     bhi      LF33D39 
   70AE D7 0A         [ 4]  676                     stb      *VIA_shift_reg 
                            677 ; macro call ->                     DRAW_TO_OPEN  88, -50 
   70B0 CC 00 58      [ 3]  678                     LDD      #0+((88)&0xff)                  ;3 A = 0; B = Y 
   70B3 DD 00         [ 5]  679                     STD      *VIA_port_b                  ; 6 
   70B5 C6 CE         [ 2]  680                     LDB      #-50 
   70B7 0C 00         [ 6]  681                     INC      *VIA_port_b                  ;Disable mux 
   70B9 D7 01         [ 4]  682                     STB      *VIA_port_a                  ;Send X to A/D 
   70BB C6 3F         [ 2]  683                     LDB      #0b00111111 
   70BD D7 0A         [ 4]  684                     STB      *VIA_shift_reg 
   70BF 97 05         [ 4]  685                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            686 ; macro call ->                     CLOSE_SHORT  
   70C1 C6 FE         [ 2]  687                     ldb      #SHIFT_2 
                            688  .globl LF33D41
   70C3                     689 LF33D41: 
   70C3 96 04         [ 4]  690                     LDA      *VIA_t1_cnt_lo 
   70C5 81 0A         [ 2]  691                     cmpa     #10 
   70C7 22 FA         [ 3]  692                     bhi      LF33D41 
   70C9 D7 0A         [ 4]  693                     stb      *VIA_shift_reg 
                            694 ; macro call ->  WAIT12
   70CB 1F 88         [ 6]  695 	tfr a,a; wait 12 cycles
   70CD 1F 88         [ 6]  696      tfr a,a
                            697 ; macro call ->                     _ZERO_VECTOR_BEAM  
   70CF C6 CC         [ 2]  698                     LDB      #0xCC                         ; 2 
   70D1 D7 0C         [ 4]  699                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                            700 ; macro call ->  WAIT24
   70D3 34 71         [ 9]  701   pshs x,y,u,cc; wait 24 cycles
   70D5 35 71         [ 9]  702   puls x,y,u,cc
                            703 ; third
   70D7 86 CE         [ 2]  704                     LDA      #0xCE                         ;Blank low, zero high? 
   70D9 97 0C         [ 4]  705                     STA      *VIA_cntl                    ; 
   70DB 86 3E         [ 2]  706                     LDA      #64 -2                       ; scalefactor 
   70DD 97 04         [ 4]  707                     STA      *VIA_t1_cnt_lo 
                            708 ; macro call ->                     MOVE_TO_OPEN  127, 73 
                            709 ; assuming SHIFT is zeri
   70DF CC 00 7F      [ 3]  710                     LDD      #0+((127)&0xff)                  ;3 A = 0; B = Y 
   70E2 DD 00         [ 5]  711                     STD      *VIA_port_b                  ; 6 
   70E4 C6 49         [ 2]  712                     LDB      #73 
   70E6 0C 00         [ 6]  713                     INC      *VIA_port_b                  ;Disable mux 
   70E8 D7 01         [ 4]  714                     STB      *VIA_port_a                  ;Send X to A/D 
   70EA 97 05         [ 4]  715                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
   70EC 86 46         [ 2]  716                     LDA      #71 -1                       ;(0x7f/11) ; 2 scalefactor 
   70EE 97 04         [ 4]  717                     STA      *VIA_t1_cnt_lo               ; 4 
                            718 ; macro call ->                     CLOSE    
   70F0 86 40         [ 2]  719                     LDA      #0x40                         ; 
                            720  .globl LF33D46
   70F2 95 0D         [ 4]  721 LF33D46:              BITA     *VIA_int_flags               ; 
   70F4 27 FC         [ 3]  722                     BEQ      LF33D46                        ; 
                            723 ; macro call ->                     DRAW_TO_OPEN  -90, 48 
   70F6 CC 00 A6      [ 3]  724                     LDD      #0+((-90)&0xff)                  ;3 A = 0; B = Y 
   70F9 DD 00         [ 5]  725                     STD      *VIA_port_b                  ; 6 
   70FB C6 30         [ 2]  726                     LDB      #48 
   70FD 0C 00         [ 6]  727                     INC      *VIA_port_b                  ;Disable mux 
   70FF D7 01         [ 4]  728                     STB      *VIA_port_a                  ;Send X to A/D 
   7101 C6 3F         [ 2]  729                     LDB      #0b00111111 
   7103 D7 0A         [ 4]  730                     STB      *VIA_shift_reg 
   7105 97 05         [ 4]  731                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            732 ; macro call ->                     CLOSE_SHORT  
   7107 C6 FE         [ 2]  733                     ldb      #SHIFT_2 
                            734  .globl LF33D48
   7109                     735 LF33D48: 
   7109 96 04         [ 4]  736                     LDA      *VIA_t1_cnt_lo 
   710B 81 0A         [ 2]  737                     cmpa     #10 
   710D 22 FA         [ 3]  738                     bhi      LF33D48 
   710F D7 0A         [ 4]  739                     stb      *VIA_shift_reg 
                            740 ; macro call ->                     DRAW_TO_OPEN_X0  -48 
   7111 CC 00 D0      [ 3]  741                     LDD      #0+((-48)&0xff)                  ;3 A = 0; B = Y 
   7114 DD 00         [ 5]  742                     STD      *VIA_port_b                  ; 6 
   7116 C6 3F         [ 2]  743                     LDB      #0b00111111 
   7118 0C 00         [ 6]  744                     INC      *VIA_port_b                  ;Disable mux 
   711A 97 01         [ 4]  745                     STa      *VIA_port_a                  ;Send X to A/D 
   711C D7 0A         [ 4]  746                     STB      *VIA_shift_reg 
   711E 97 05         [ 4]  747                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            748 ; macro call ->                     CLOSE_SHORT  
   7120 C6 FE         [ 2]  749                     ldb      #SHIFT_2 
                            750  .globl LF33D50
   7122                     751 LF33D50: 
   7122 96 04         [ 4]  752                     LDA      *VIA_t1_cnt_lo 
   7124 81 0A         [ 2]  753                     cmpa     #10 
   7126 22 FA         [ 3]  754                     bhi      LF33D50 
   7128 D7 0A         [ 4]  755                     stb      *VIA_shift_reg 
                            756 ; macro call ->                     DRAW_TO_OPEN  -90, -48 
   712A CC 00 A6      [ 3]  757                     LDD      #0+((-90)&0xff)                  ;3 A = 0; B = Y 
   712D DD 00         [ 5]  758                     STD      *VIA_port_b                  ; 6 
   712F C6 D0         [ 2]  759                     LDB      #-48 
   7131 0C 00         [ 6]  760                     INC      *VIA_port_b                  ;Disable mux 
   7133 D7 01         [ 4]  761                     STB      *VIA_port_a                  ;Send X to A/D 
   7135 C6 3F         [ 2]  762                     LDB      #0b00111111 
   7137 D7 0A         [ 4]  763                     STB      *VIA_shift_reg 
   7139 97 05         [ 4]  764                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            765 ; macro call ->                     CLOSE_SHORT  
   713B C6 FE         [ 2]  766                     ldb      #SHIFT_2 
                            767  .globl LF33D52
   713D                     768 LF33D52: 
   713D 96 04         [ 4]  769                     LDA      *VIA_t1_cnt_lo 
   713F 81 0A         [ 2]  770                     cmpa     #10 
   7141 22 FA         [ 3]  771                     bhi      LF33D52 
   7143 D7 0A         [ 4]  772                     stb      *VIA_shift_reg 
                            773 ; macro call ->                     DRAW_TO_OPEN  0, -127 
   7145 CC 00 00      [ 3]  774                     LDD      #0+((0)&0xff)                  ;3 A = 0; B = Y 
   7148 DD 00         [ 5]  775                     STD      *VIA_port_b                  ; 6 
   714A C6 81         [ 2]  776                     LDB      #-127 
   714C 0C 00         [ 6]  777                     INC      *VIA_port_b                  ;Disable mux 
   714E D7 01         [ 4]  778                     STB      *VIA_port_a                  ;Send X to A/D 
   7150 C6 3F         [ 2]  779                     LDB      #0b00111111 
   7152 D7 0A         [ 4]  780                     STB      *VIA_shift_reg 
   7154 97 05         [ 4]  781                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            782 ; macro call ->                     CLOSE_SHORT  
   7156 C6 FE         [ 2]  783                     ldb      #SHIFT_2 
                            784  .globl LF33D54
   7158                     785 LF33D54: 
   7158 96 04         [ 4]  786                     LDA      *VIA_t1_cnt_lo 
   715A 81 0A         [ 2]  787                     cmpa     #10 
   715C 22 FA         [ 3]  788                     bhi      LF33D54 
   715E D7 0A         [ 4]  789                     stb      *VIA_shift_reg 
                            790 ; macro call ->                     DRAW_TO_OPEN  90, -48 
   7160 CC 00 5A      [ 3]  791                     LDD      #0+((90)&0xff)                  ;3 A = 0; B = Y 
   7163 DD 00         [ 5]  792                     STD      *VIA_port_b                  ; 6 
   7165 C6 D0         [ 2]  793                     LDB      #-48 
   7167 0C 00         [ 6]  794                     INC      *VIA_port_b                  ;Disable mux 
   7169 D7 01         [ 4]  795                     STB      *VIA_port_a                  ;Send X to A/D 
   716B C6 3F         [ 2]  796                     LDB      #0b00111111 
   716D D7 0A         [ 4]  797                     STB      *VIA_shift_reg 
   716F 97 05         [ 4]  798                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            799 ; macro call ->                     CLOSE_SHORT  
   7171 C6 FE         [ 2]  800                     ldb      #SHIFT_2 
                            801  .globl LF33D56
   7173                     802 LF33D56: 
   7173 96 04         [ 4]  803                     LDA      *VIA_t1_cnt_lo 
   7175 81 0A         [ 2]  804                     cmpa     #10 
   7177 22 FA         [ 3]  805                     bhi      LF33D56 
   7179 D7 0A         [ 4]  806                     stb      *VIA_shift_reg 
                            807 ; macro call ->                     DRAW_TO_OPEN_X0  48 
   717B CC 00 30      [ 3]  808                     LDD      #0+((48)&0xff)                  ;3 A = 0; B = Y 
   717E DD 00         [ 5]  809                     STD      *VIA_port_b                  ; 6 
   7180 C6 3F         [ 2]  810                     LDB      #0b00111111 
   7182 0C 00         [ 6]  811                     INC      *VIA_port_b                  ;Disable mux 
   7184 97 01         [ 4]  812                     STa      *VIA_port_a                  ;Send X to A/D 
   7186 D7 0A         [ 4]  813                     STB      *VIA_shift_reg 
   7188 97 05         [ 4]  814                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            815 ; macro call ->                     CLOSE_SHORT  
   718A C6 FE         [ 2]  816                     ldb      #SHIFT_2 
                            817  .globl LF33D58
   718C                     818 LF33D58: 
   718C 96 04         [ 4]  819                     LDA      *VIA_t1_cnt_lo 
   718E 81 0A         [ 2]  820                     cmpa     #10 
   7190 22 FA         [ 3]  821                     bhi      LF33D58 
   7192 D7 0A         [ 4]  822                     stb      *VIA_shift_reg 
                            823 ; macro call ->                     DRAW_TO_OPEN  90, 48 
   7194 CC 00 5A      [ 3]  824                     LDD      #0+((90)&0xff)                  ;3 A = 0; B = Y 
   7197 DD 00         [ 5]  825                     STD      *VIA_port_b                  ; 6 
   7199 C6 30         [ 2]  826                     LDB      #48 
   719B 0C 00         [ 6]  827                     INC      *VIA_port_b                  ;Disable mux 
   719D D7 01         [ 4]  828                     STB      *VIA_port_a                  ;Send X to A/D 
   719F C6 3F         [ 2]  829                     LDB      #0b00111111 
   71A1 D7 0A         [ 4]  830                     STB      *VIA_shift_reg 
   71A3 97 05         [ 4]  831                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            832 ; macro call ->                     CLOSE_SHORT  
   71A5 C6 FE         [ 2]  833                     ldb      #SHIFT_2 
                            834  .globl LF33D60
   71A7                     835 LF33D60: 
   71A7 96 04         [ 4]  836                     LDA      *VIA_t1_cnt_lo 
   71A9 81 0A         [ 2]  837                     cmpa     #10 
   71AB 22 FA         [ 3]  838                     bhi      LF33D60 
   71AD D7 0A         [ 4]  839                     stb      *VIA_shift_reg 
                            840 ; macro call ->                     DRAW_TO_OPEN  0, 127 
   71AF CC 00 00      [ 3]  841                     LDD      #0+((0)&0xff)                  ;3 A = 0; B = Y 
   71B2 DD 00         [ 5]  842                     STD      *VIA_port_b                  ; 6 
   71B4 C6 7F         [ 2]  843                     LDB      #127 
   71B6 0C 00         [ 6]  844                     INC      *VIA_port_b                  ;Disable mux 
   71B8 D7 01         [ 4]  845                     STB      *VIA_port_a                  ;Send X to A/D 
   71BA C6 3F         [ 2]  846                     LDB      #0b00111111 
   71BC D7 0A         [ 4]  847                     STB      *VIA_shift_reg 
   71BE 97 05         [ 4]  848                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            849 ; macro call ->                     CLOSE_SHORT  
   71C0 C6 FE         [ 2]  850                     ldb      #SHIFT_2 
                            851  .globl LF33D62
   71C2                     852 LF33D62: 
   71C2 96 04         [ 4]  853                     LDA      *VIA_t1_cnt_lo 
   71C4 81 0A         [ 2]  854                     cmpa     #10 
   71C6 22 FA         [ 3]  855                     bhi      LF33D62 
   71C8 D7 0A         [ 4]  856                     stb      *VIA_shift_reg 
                            857 ; clra
                            858 ; macro call ->  WAIT12
   71CA 1F 88         [ 6]  859 	tfr a,a; wait 12 cycles
   71CC 1F 88         [ 6]  860      tfr a,a
                            861 ; macro call ->                     _ZERO_VECTOR_BEAM  
   71CE C6 CC         [ 2]  862                     LDB      #0xCC                         ; 2 
   71D0 D7 0C         [ 4]  863                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                            864 ; macro call ->  WAIT24
   71D2 34 71         [ 9]  865   pshs x,y,u,cc; wait 24 cycles
   71D4 35 71         [ 9]  866   puls x,y,u,cc
                            867 ; fourth
   71D6 86 CE         [ 2]  868                     LDA      #0xCE                         ;Blank low, zero high? 
   71D8 97 0C         [ 4]  869                     STA      *VIA_cntl                    ; 
   71DA 86 59         [ 2]  870                     LDA      #89                          ; scalefactor 
   71DC 97 04         [ 4]  871                     STA      *VIA_t1_cnt_lo 
                            872 ; macro call ->                     MOVE_TO_OPEN  -25, 127 
                            873 ; assuming SHIFT is zeri
   71DE CC 00 E7      [ 3]  874                     LDD      #0+((-25)&0xff)                  ;3 A = 0; B = Y 
   71E1 DD 00         [ 5]  875                     STD      *VIA_port_b                  ; 6 
   71E3 C6 7F         [ 2]  876                     LDB      #127 
   71E5 0C 00         [ 6]  877                     INC      *VIA_port_b                  ;Disable mux 
   71E7 D7 01         [ 4]  878                     STB      *VIA_port_a                  ;Send X to A/D 
   71E9 97 05         [ 4]  879                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
   71EB 86 69         [ 2]  880                     LDA      #105                         ;(0x7f/11) ; 2 scalefactor 
   71ED 97 04         [ 4]  881                     STA      *VIA_t1_cnt_lo               ; 4 
                            882 ; macro call ->                     CLOSE    
   71EF 86 40         [ 2]  883                     LDA      #0x40                         ; 
                            884  .globl LF33D67
   71F1 95 0D         [ 4]  885 LF33D67:              BITA     *VIA_int_flags               ; 
   71F3 27 FC         [ 3]  886                     BEQ      LF33D67                        ; 
                            887 ; macro call ->                     DRAW_TO_OPEN_X0  43 
   71F5 CC 00 2B      [ 3]  888                     LDD      #0+((43)&0xff)                  ;3 A = 0; B = Y 
   71F8 DD 00         [ 5]  889                     STD      *VIA_port_b                  ; 6 
   71FA C6 3F         [ 2]  890                     LDB      #0b00111111 
   71FC 0C 00         [ 6]  891                     INC      *VIA_port_b                  ;Disable mux 
   71FE 97 01         [ 4]  892                     STa      *VIA_port_a                  ;Send X to A/D 
   7200 D7 0A         [ 4]  893                     STB      *VIA_shift_reg 
   7202 97 05         [ 4]  894                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            895 ; macro call ->                     CLOSE_SHORT  
   7204 C6 FE         [ 2]  896                     ldb      #SHIFT_2 
                            897  .globl LF33D69
   7206                     898 LF33D69: 
   7206 96 04         [ 4]  899                     LDA      *VIA_t1_cnt_lo 
   7208 81 0A         [ 2]  900                     cmpa     #10 
   720A 22 FA         [ 3]  901                     bhi      LF33D69 
   720C D7 0A         [ 4]  902                     stb      *VIA_shift_reg 
                            903 ; macro call ->                     DRAW_TO_OPEN  88, -45 
   720E CC 00 58      [ 3]  904                     LDD      #0+((88)&0xff)                  ;3 A = 0; B = Y 
   7211 DD 00         [ 5]  905                     STD      *VIA_port_b                  ; 6 
   7213 C6 D3         [ 2]  906                     LDB      #-45 
   7215 0C 00         [ 6]  907                     INC      *VIA_port_b                  ;Disable mux 
   7217 D7 01         [ 4]  908                     STB      *VIA_port_a                  ;Send X to A/D 
   7219 C6 3F         [ 2]  909                     LDB      #0b00111111 
   721B D7 0A         [ 4]  910                     STB      *VIA_shift_reg 
   721D 97 05         [ 4]  911                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            912 ; macro call ->                     CLOSE_SHORT  
   721F C6 FE         [ 2]  913                     ldb      #SHIFT_2 
                            914  .globl LF33D71
   7221                     915 LF33D71: 
   7221 96 04         [ 4]  916                     LDA      *VIA_t1_cnt_lo 
   7223 81 0A         [ 2]  917                     cmpa     #10 
   7225 22 FA         [ 3]  918                     bhi      LF33D71 
   7227 D7 0A         [ 4]  919                     stb      *VIA_shift_reg 
                            920 ; macro call ->                     DRAW_TO_OPEN  0, -127 
   7229 CC 00 00      [ 3]  921                     LDD      #0+((0)&0xff)                  ;3 A = 0; B = Y 
   722C DD 00         [ 5]  922                     STD      *VIA_port_b                  ; 6 
   722E C6 81         [ 2]  923                     LDB      #-127 
   7230 0C 00         [ 6]  924                     INC      *VIA_port_b                  ;Disable mux 
   7232 D7 01         [ 4]  925                     STB      *VIA_port_a                  ;Send X to A/D 
   7234 C6 3F         [ 2]  926                     LDB      #0b00111111 
   7236 D7 0A         [ 4]  927                     STB      *VIA_shift_reg 
   7238 97 05         [ 4]  928                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            929 ; macro call ->                     CLOSE_SHORT  
   723A C6 FE         [ 2]  930                     ldb      #SHIFT_2 
                            931  .globl LF33D73
   723C                     932 LF33D73: 
   723C 96 04         [ 4]  933                     LDA      *VIA_t1_cnt_lo 
   723E 81 0A         [ 2]  934                     cmpa     #10 
   7240 22 FA         [ 3]  935                     bhi      LF33D73 
   7242 D7 0A         [ 4]  936                     stb      *VIA_shift_reg 
                            937 ; macro call ->                     DRAW_TO_OPEN  -88, -45 
   7244 CC 00 A8      [ 3]  938                     LDD      #0+((-88)&0xff)                  ;3 A = 0; B = Y 
   7247 DD 00         [ 5]  939                     STD      *VIA_port_b                  ; 6 
   7249 C6 D3         [ 2]  940                     LDB      #-45 
   724B 0C 00         [ 6]  941                     INC      *VIA_port_b                  ;Disable mux 
   724D D7 01         [ 4]  942                     STB      *VIA_port_a                  ;Send X to A/D 
   724F C6 3F         [ 2]  943                     LDB      #0b00111111 
   7251 D7 0A         [ 4]  944                     STB      *VIA_shift_reg 
   7253 97 05         [ 4]  945                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            946 ; macro call ->                     CLOSE_SHORT  
   7255 C6 FE         [ 2]  947                     ldb      #SHIFT_2 
                            948  .globl LF33D75
   7257                     949 LF33D75: 
   7257 96 04         [ 4]  950                     LDA      *VIA_t1_cnt_lo 
   7259 81 0A         [ 2]  951                     cmpa     #10 
   725B 22 FA         [ 3]  952                     bhi      LF33D75 
   725D D7 0A         [ 4]  953                     stb      *VIA_shift_reg 
                            954 ; macro call ->                     DRAW_TO_OPEN_X0  -43 
   725F CC 00 D5      [ 3]  955                     LDD      #0+((-43)&0xff)                  ;3 A = 0; B = Y 
   7262 DD 00         [ 5]  956                     STD      *VIA_port_b                  ; 6 
   7264 C6 3F         [ 2]  957                     LDB      #0b00111111 
   7266 0C 00         [ 6]  958                     INC      *VIA_port_b                  ;Disable mux 
   7268 97 01         [ 4]  959                     STa      *VIA_port_a                  ;Send X to A/D 
   726A D7 0A         [ 4]  960                     STB      *VIA_shift_reg 
   726C 97 05         [ 4]  961                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            962 ; macro call ->                     CLOSE_SHORT  
   726E C6 FE         [ 2]  963                     ldb      #SHIFT_2 
                            964  .globl LF33D77
   7270                     965 LF33D77: 
   7270 96 04         [ 4]  966                     LDA      *VIA_t1_cnt_lo 
   7272 81 0A         [ 2]  967                     cmpa     #10 
   7274 22 FA         [ 3]  968                     bhi      LF33D77 
   7276 D7 0A         [ 4]  969                     stb      *VIA_shift_reg 
                            970 ; macro call ->                     DRAW_TO_OPEN  -88, 45 
   7278 CC 00 A8      [ 3]  971                     LDD      #0+((-88)&0xff)                  ;3 A = 0; B = Y 
   727B DD 00         [ 5]  972                     STD      *VIA_port_b                  ; 6 
   727D C6 2D         [ 2]  973                     LDB      #45 
   727F 0C 00         [ 6]  974                     INC      *VIA_port_b                  ;Disable mux 
   7281 D7 01         [ 4]  975                     STB      *VIA_port_a                  ;Send X to A/D 
   7283 C6 3F         [ 2]  976                     LDB      #0b00111111 
   7285 D7 0A         [ 4]  977                     STB      *VIA_shift_reg 
   7287 97 05         [ 4]  978                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            979 ; macro call ->                     CLOSE_SHORT  
   7289 C6 FE         [ 2]  980                     ldb      #SHIFT_2 
                            981  .globl LF33D79
   728B                     982 LF33D79: 
   728B 96 04         [ 4]  983                     LDA      *VIA_t1_cnt_lo 
   728D 81 0A         [ 2]  984                     cmpa     #10 
   728F 22 FA         [ 3]  985                     bhi      LF33D79 
   7291 D7 0A         [ 4]  986                     stb      *VIA_shift_reg 
                            987 ; macro call ->                     DRAW_TO_OPEN  0, 127 
   7293 CC 00 00      [ 3]  988                     LDD      #0+((0)&0xff)                  ;3 A = 0; B = Y 
   7296 DD 00         [ 5]  989                     STD      *VIA_port_b                  ; 6 
   7298 C6 7F         [ 2]  990                     LDB      #127 
   729A 0C 00         [ 6]  991                     INC      *VIA_port_b                  ;Disable mux 
   729C D7 01         [ 4]  992                     STB      *VIA_port_a                  ;Send X to A/D 
   729E C6 3F         [ 2]  993                     LDB      #0b00111111 
   72A0 D7 0A         [ 4]  994                     STB      *VIA_shift_reg 
   72A2 97 05         [ 4]  995                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                            996 ; macro call ->                     CLOSE_SHORT  
   72A4 C6 FE         [ 2]  997                     ldb      #SHIFT_2 
                            998  .globl LF33D81
   72A6                     999 LF33D81: 
   72A6 96 04         [ 4] 1000                     LDA      *VIA_t1_cnt_lo 
   72A8 81 0A         [ 2] 1001                     cmpa     #10 
   72AA 22 FA         [ 3] 1002                     bhi      LF33D81 
   72AC D7 0A         [ 4] 1003                     stb      *VIA_shift_reg 
                           1004 ; macro call ->                     DRAW_TO_OPEN  88, 45 
   72AE CC 00 58      [ 3] 1005                     LDD      #0+((88)&0xff)                  ;3 A = 0; B = Y 
   72B1 DD 00         [ 5] 1006                     STD      *VIA_port_b                  ; 6 
   72B3 C6 2D         [ 2] 1007                     LDB      #45 
   72B5 0C 00         [ 6] 1008                     INC      *VIA_port_b                  ;Disable mux 
   72B7 D7 01         [ 4] 1009                     STB      *VIA_port_a                  ;Send X to A/D 
   72B9 C6 3F         [ 2] 1010                     LDB      #0b00111111 
   72BB D7 0A         [ 4] 1011                     STB      *VIA_shift_reg 
   72BD 97 05         [ 4] 1012                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1013 ; macro call ->                     CLOSE_SHORT  
   72BF C6 FE         [ 2] 1014                     ldb      #SHIFT_2 
                           1015  .globl LF33D83
   72C1                    1016 LF33D83: 
   72C1 96 04         [ 4] 1017                     LDA      *VIA_t1_cnt_lo 
   72C3 81 0A         [ 2] 1018                     cmpa     #10 
   72C5 22 FA         [ 3] 1019                     bhi      LF33D83 
   72C7 D7 0A         [ 4] 1020                     stb      *VIA_shift_reg 
                           1021 ; macro call ->  WAIT12
   72C9 1F 88         [ 6] 1022 	tfr a,a; wait 12 cycles
   72CB 1F 88         [ 6] 1023      tfr a,a
                           1024 ; macro call ->                     _ZERO_VECTOR_BEAM  
   72CD C6 CC         [ 2] 1025                     LDB      #0xCC                         ; 2 
   72CF D7 0C         [ 4] 1026                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                           1027 ; macro call ->  WAIT24
   72D1 34 71         [ 9] 1028   pshs x,y,u,cc; wait 24 cycles
   72D3 35 71         [ 9] 1029   puls x,y,u,cc
                           1030 ; Do the Rays
                           1031 ; short rays
   72D5 86 CE         [ 2] 1032                     LDA      #0xCE                         ;Blank low, zero high? 
   72D7 97 0C         [ 4] 1033                     STA      *VIA_cntl                    ; 
   72D9 86 0D         [ 2] 1034                     LDA      #13                          ; scalefactor 
   72DB 97 04         [ 4] 1035                     STA      *VIA_t1_cnt_lo 
                           1036 ; macro call ->                     MOVE_TO_OPEN  -29, -127 
                           1037 ; assuming SHIFT is zeri
   72DD CC 00 E3      [ 3] 1038                     LDD      #0+((-29)&0xff)                  ;3 A = 0; B = Y 
   72E0 DD 00         [ 5] 1039                     STD      *VIA_port_b                  ; 6 
   72E2 C6 81         [ 2] 1040                     LDB      #-127 
   72E4 0C 00         [ 6] 1041                     INC      *VIA_port_b                  ;Disable mux 
   72E6 D7 01         [ 4] 1042                     STB      *VIA_port_a                  ;Send X to A/D 
   72E8 97 05         [ 4] 1043                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1044 ; macro call ->                     WAIT2
   72EA 12            [ 2] 1045  nop ; wait 2 cycles
   72EB 86 4A         [ 2] 1046                     LDA      #74                          ; scalefactor 
   72ED 97 04         [ 4] 1047                     STA      *VIA_t1_cnt_lo 
                           1048 ; macro call ->                     DRAW_TO_OPEN  -25, -127 
   72EF CC 00 E7      [ 3] 1049                     LDD      #0+((-25)&0xff)                  ;3 A = 0; B = Y 
   72F2 DD 00         [ 5] 1050                     STD      *VIA_port_b                  ; 6 
   72F4 C6 81         [ 2] 1051                     LDB      #-127 
   72F6 0C 00         [ 6] 1052                     INC      *VIA_port_b                  ;Disable mux 
   72F8 D7 01         [ 4] 1053                     STB      *VIA_port_a                  ;Send X to A/D 
   72FA C6 3F         [ 2] 1054                     LDB      #0b00111111 
   72FC D7 0A         [ 4] 1055                     STB      *VIA_shift_reg 
   72FE 97 05         [ 4] 1056                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1057 ; macro call ->                     CLOSE_SHORT  
   7300 C6 FE         [ 2] 1058                     ldb      #SHIFT_2 
                           1059  .globl LF33D90
   7302                    1060 LF33D90: 
   7302 96 04         [ 4] 1061                     LDA      *VIA_t1_cnt_lo 
   7304 81 0A         [ 2] 1062                     cmpa     #10 
   7306 22 FA         [ 3] 1063                     bhi      LF33D90 
   7308 D7 0A         [ 4] 1064                     stb      *VIA_shift_reg 
                           1065 ; macro call ->  WAIT12
   730A 1F 88         [ 6] 1066 	tfr a,a; wait 12 cycles
   730C 1F 88         [ 6] 1067      tfr a,a
                           1068 ; macro call ->                     _ZERO_VECTOR_BEAM  
   730E C6 CC         [ 2] 1069                     LDB      #0xCC                         ; 2 
   7310 D7 0C         [ 4] 1070                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                           1071 ; macro call ->  WAIT24
   7312 34 71         [ 9] 1072   pshs x,y,u,cc; wait 24 cycles
   7314 35 71         [ 9] 1073   puls x,y,u,cc
   7316 86 CE         [ 2] 1074                     LDA      #0xCE                         ;Blank low, zero high? 
   7318 97 0C         [ 4] 1075                     STA      *VIA_cntl                    ; 
   731A 86 0D         [ 2] 1076                     LDA      #13                          ; scalefactor 
   731C 97 04         [ 4] 1077                     STA      *VIA_t1_cnt_lo 
                           1078 ; macro call ->                     MOVE_TO_OPEN  29, -123 
                           1079 ; assuming SHIFT is zeri
   731E CC 00 1D      [ 3] 1080                     LDD      #0+((29)&0xff)                  ;3 A = 0; B = Y 
   7321 DD 00         [ 5] 1081                     STD      *VIA_port_b                  ; 6 
   7323 C6 85         [ 2] 1082                     LDB      #-123 
   7325 0C 00         [ 6] 1083                     INC      *VIA_port_b                  ;Disable mux 
   7327 D7 01         [ 4] 1084                     STB      *VIA_port_a                  ;Send X to A/D 
   7329 97 05         [ 4] 1085                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1086 ; macro call ->                     WAIT4 
   732B 12            [ 2] 1087  nop ; wait 4 cycles
   732C 12            [ 2] 1088  nop 
   732D 86 4A         [ 2] 1089                     LDA      #74                          ; scalefactor 
   732F 97 04         [ 4] 1090                     STA      *VIA_t1_cnt_lo 
                           1091 ; macro call ->                     DRAW_TO_OPEN  24, -127 
   7331 CC 00 18      [ 3] 1092                     LDD      #0+((24)&0xff)                  ;3 A = 0; B = Y 
   7334 DD 00         [ 5] 1093                     STD      *VIA_port_b                  ; 6 
   7336 C6 81         [ 2] 1094                     LDB      #-127 
   7338 0C 00         [ 6] 1095                     INC      *VIA_port_b                  ;Disable mux 
   733A D7 01         [ 4] 1096                     STB      *VIA_port_a                  ;Send X to A/D 
   733C C6 3F         [ 2] 1097                     LDB      #0b00111111 
   733E D7 0A         [ 4] 1098                     STB      *VIA_shift_reg 
   7340 97 05         [ 4] 1099                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1100 ; macro call ->                     CLOSE_SHORT  
   7342 C6 FE         [ 2] 1101                     ldb      #SHIFT_2 
                           1102  .globl LF33D97
   7344                    1103 LF33D97: 
   7344 96 04         [ 4] 1104                     LDA      *VIA_t1_cnt_lo 
   7346 81 0A         [ 2] 1105                     cmpa     #10 
   7348 22 FA         [ 3] 1106                     bhi      LF33D97 
   734A D7 0A         [ 4] 1107                     stb      *VIA_shift_reg 
                           1108 ; macro call ->  WAIT12
   734C 1F 88         [ 6] 1109 	tfr a,a; wait 12 cycles
   734E 1F 88         [ 6] 1110      tfr a,a
                           1111 ; macro call ->                     _ZERO_VECTOR_BEAM  
   7350 C6 CC         [ 2] 1112                     LDB      #0xCC                         ; 2 
   7352 D7 0C         [ 4] 1113                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                           1114 ; macro call ->  WAIT24
   7354 34 71         [ 9] 1115   pshs x,y,u,cc; wait 24 cycles
   7356 35 71         [ 9] 1116   puls x,y,u,cc
   7358 86 CE         [ 2] 1117                     LDA      #0xCE                         ;Blank low, zero high? 
   735A 97 0C         [ 4] 1118                     STA      *VIA_cntl                    ; 
   735C 86 0D         [ 2] 1119                     LDA      #13                          ; scalefactor 
   735E 97 04         [ 4] 1120                     STA      *VIA_t1_cnt_lo 
                           1121 ; macro call ->                     MOVE_TO_OPEN  25, 127 
                           1122 ; assuming SHIFT is zeri
   7360 CC 00 19      [ 3] 1123                     LDD      #0+((25)&0xff)                  ;3 A = 0; B = Y 
   7363 DD 00         [ 5] 1124                     STD      *VIA_port_b                  ; 6 
   7365 C6 7F         [ 2] 1125                     LDB      #127 
   7367 0C 00         [ 6] 1126                     INC      *VIA_port_b                  ;Disable mux 
   7369 D7 01         [ 4] 1127                     STB      *VIA_port_a                  ;Send X to A/D 
   736B 97 05         [ 4] 1128                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1129 ; macro call ->                     WAIT2
   736D 12            [ 2] 1130  nop ; wait 2 cycles
   736E 86 4A         [ 2] 1131                     LDA      #74                          ; scalefactor 
   7370 97 04         [ 4] 1132                     STA      *VIA_t1_cnt_lo 
                           1133 ; macro call ->                     DRAW_TO_OPEN  25, 127 
   7372 CC 00 19      [ 3] 1134                     LDD      #0+((25)&0xff)                  ;3 A = 0; B = Y 
   7375 DD 00         [ 5] 1135                     STD      *VIA_port_b                  ; 6 
   7377 C6 7F         [ 2] 1136                     LDB      #127 
   7379 0C 00         [ 6] 1137                     INC      *VIA_port_b                  ;Disable mux 
   737B D7 01         [ 4] 1138                     STB      *VIA_port_a                  ;Send X to A/D 
   737D C6 3F         [ 2] 1139                     LDB      #0b00111111 
   737F D7 0A         [ 4] 1140                     STB      *VIA_shift_reg 
   7381 97 05         [ 4] 1141                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1142 ; macro call ->                     CLOSE_SHORT  
   7383 C6 FE         [ 2] 1143                     ldb      #SHIFT_2 
                           1144  .globl LF33D104
   7385                    1145 LF33D104: 
   7385 96 04         [ 4] 1146                     LDA      *VIA_t1_cnt_lo 
   7387 81 0A         [ 2] 1147                     cmpa     #10 
   7389 22 FA         [ 3] 1148                     bhi      LF33D104 
   738B D7 0A         [ 4] 1149                     stb      *VIA_shift_reg 
                           1150 ; macro call ->  WAIT12
   738D 1F 88         [ 6] 1151 	tfr a,a; wait 12 cycles
   738F 1F 88         [ 6] 1152      tfr a,a
                           1153 ; macro call ->                     _ZERO_VECTOR_BEAM  
   7391 C6 CC         [ 2] 1154                     LDB      #0xCC                         ; 2 
   7393 D7 0C         [ 4] 1155                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                           1156 ; macro call ->  WAIT24
   7395 34 71         [ 9] 1157   pshs x,y,u,cc; wait 24 cycles
   7397 35 71         [ 9] 1158   puls x,y,u,cc
   7399 86 CE         [ 2] 1159                     LDA      #0xCE                         ;Blank low, zero high? 
   739B 97 0C         [ 4] 1160                     STA      *VIA_cntl                    ; 
   739D 86 0D         [ 2] 1161                     LDA      #13                          ; scalefactor 
   739F 97 04         [ 4] 1162                     STA      *VIA_t1_cnt_lo 
                           1163 ; macro call ->                     MOVE_TO_OPEN  -35, 123 
                           1164 ; assuming SHIFT is zeri
   73A1 CC 00 DD      [ 3] 1165                     LDD      #0+((-35)&0xff)                  ;3 A = 0; B = Y 
   73A4 DD 00         [ 5] 1166                     STD      *VIA_port_b                  ; 6 
   73A6 C6 7B         [ 2] 1167                     LDB      #123 
   73A8 0C 00         [ 6] 1168                     INC      *VIA_port_b                  ;Disable mux 
   73AA D7 01         [ 4] 1169                     STB      *VIA_port_a                  ;Send X to A/D 
   73AC 97 05         [ 4] 1170                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1171 ; macro call ->                     WAIT4 
   73AE 12            [ 2] 1172  nop ; wait 4 cycles
   73AF 12            [ 2] 1173  nop 
   73B0 86 4A         [ 2] 1174                     LDA      #74                          ; scalefactor 
   73B2 97 04         [ 4] 1175                     STA      *VIA_t1_cnt_lo 
                           1176 ; macro call ->                     DRAW_TO_OPEN  -24, 127 
   73B4 CC 00 E8      [ 3] 1177                     LDD      #0+((-24)&0xff)                  ;3 A = 0; B = Y 
   73B7 DD 00         [ 5] 1178                     STD      *VIA_port_b                  ; 6 
   73B9 C6 7F         [ 2] 1179                     LDB      #127 
   73BB 0C 00         [ 6] 1180                     INC      *VIA_port_b                  ;Disable mux 
   73BD D7 01         [ 4] 1181                     STB      *VIA_port_a                  ;Send X to A/D 
   73BF C6 3F         [ 2] 1182                     LDB      #0b00111111 
   73C1 D7 0A         [ 4] 1183                     STB      *VIA_shift_reg 
   73C3 97 05         [ 4] 1184                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1185 ; macro call ->                     CLOSE_SHORT  
   73C5 C6 FE         [ 2] 1186                     ldb      #SHIFT_2 
                           1187  .globl LF33D111
   73C7                    1188 LF33D111: 
   73C7 96 04         [ 4] 1189                     LDA      *VIA_t1_cnt_lo 
   73C9 81 0A         [ 2] 1190                     cmpa     #10 
   73CB 22 FA         [ 3] 1191                     bhi      LF33D111 
   73CD D7 0A         [ 4] 1192                     stb      *VIA_shift_reg 
                           1193 ; macro call ->  WAIT12
   73CF 1F 88         [ 6] 1194 	tfr a,a; wait 12 cycles
   73D1 1F 88         [ 6] 1195      tfr a,a
                           1196 ; macro call ->                     _ZERO_VECTOR_BEAM  
   73D3 C6 CC         [ 2] 1197                     LDB      #0xCC                         ; 2 
   73D5 D7 0C         [ 4] 1198                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                           1199 ; macro call ->  WAIT24
   73D7 34 71         [ 9] 1200   pshs x,y,u,cc; wait 24 cycles
   73D9 35 71         [ 9] 1201   puls x,y,u,cc
                           1202 ; long rays
   73DB 86 CE         [ 2] 1203                     LDA      #0xCE                         ;Blank low, zero high? 
   73DD 97 0C         [ 4] 1204                     STA      *VIA_cntl                    ; 
   73DF 86 07         [ 2] 1205                     LDA      #7                           ; scalefactor 
   73E1 97 04         [ 4] 1206                     STA      *VIA_t1_cnt_lo 
                           1207 ; macro call ->                     MOVE_TO_OPEN  127, -65 
                           1208 ; assuming SHIFT is zeri
   73E3 CC 00 7F      [ 3] 1209                     LDD      #0+((127)&0xff)                  ;3 A = 0; B = Y 
   73E6 DD 00         [ 5] 1210                     STD      *VIA_port_b                  ; 6 
   73E8 C6 BF         [ 2] 1211                     LDB      #-65 
   73EA 0C 00         [ 6] 1212                     INC      *VIA_port_b                  ;Disable mux 
   73EC D7 01         [ 4] 1213                     STB      *VIA_port_a                  ;Send X to A/D 
   73EE 97 05         [ 4] 1214                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1215 ; macro call ->                     WAIT4
   73F0 12            [ 2] 1216  nop ; wait 4 cycles
   73F1 12            [ 2] 1217  nop 
   73F2 86 65         [ 2] 1218                     LDA      #101                         ; scalefactor 
   73F4 97 04         [ 4] 1219                     STA      *VIA_t1_cnt_lo 
                           1220 ; macro call ->                     DRAW_TO_OPEN  127, -77 
   73F6 CC 00 7F      [ 3] 1221                     LDD      #0+((127)&0xff)                  ;3 A = 0; B = Y 
   73F9 DD 00         [ 5] 1222                     STD      *VIA_port_b                  ; 6 
   73FB C6 B3         [ 2] 1223                     LDB      #-77 
   73FD 0C 00         [ 6] 1224                     INC      *VIA_port_b                  ;Disable mux 
   73FF D7 01         [ 4] 1225                     STB      *VIA_port_a                  ;Send X to A/D 
   7401 C6 3F         [ 2] 1226                     LDB      #0b00111111 
   7403 D7 0A         [ 4] 1227                     STB      *VIA_shift_reg 
   7405 97 05         [ 4] 1228                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1229 ; macro call ->                     CLOSE_SHORT  
   7407 C6 FE         [ 2] 1230                     ldb      #SHIFT_2 
                           1231  .globl LF33D118
   7409                    1232 LF33D118: 
   7409 96 04         [ 4] 1233                     LDA      *VIA_t1_cnt_lo 
   740B 81 0A         [ 2] 1234                     cmpa     #10 
   740D 22 FA         [ 3] 1235                     bhi      LF33D118 
   740F D7 0A         [ 4] 1236                     stb      *VIA_shift_reg 
                           1237 ; macro call ->                     WAIT12
   7411 1F 88         [ 6] 1238 	tfr a,a; wait 12 cycles
   7413 1F 88         [ 6] 1239      tfr a,a
                           1240 ; macro call ->                     _ZERO_VECTOR_BEAM  
   7415 C6 CC         [ 2] 1241                     LDB      #0xCC                         ; 2 
   7417 D7 0C         [ 4] 1242                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                           1243 ; macro call ->                     WAIT28
   7419 34 77         [11] 1244  pshs y,x,d,u,cc; wait 28 cycles
   741B 35 77         [11] 1245  puls y,x,d,u,cc
   741D 86 CE         [ 2] 1246                     LDA      #0xCE                         ;Blank low, zero high? 
   741F 97 0C         [ 4] 1247                     STA      *VIA_cntl                    ; 
   7421 86 08         [ 2] 1248                     LDA      #8                           ; scalefactor 
   7423 97 04         [ 4] 1249                     STA      *VIA_t1_cnt_lo 
                           1250 ; macro call ->                     MOVE_TO_OPEN  -127, +55 
                           1251 ; assuming SHIFT is zeri
   7425 CC 00 81      [ 3] 1252                     LDD      #0+((-127)&0xff)                  ;3 A = 0; B = Y 
   7428 DD 00         [ 5] 1253                     STD      *VIA_port_b                  ; 6 
   742A C6 37         [ 2] 1254                     LDB      #+55 
   742C 0C 00         [ 6] 1255                     INC      *VIA_port_b                  ;Disable mux 
   742E D7 01         [ 4] 1256                     STB      *VIA_port_a                  ;Send X to A/D 
   7430 97 05         [ 4] 1257                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1258 ; macro call ->                     WAIT4 
   7432 12            [ 2] 1259  nop ; wait 4 cycles
   7433 12            [ 2] 1260  nop 
   7434 86 65         [ 2] 1261                     LDA      #101                         ; scalefactor 
   7436 97 04         [ 4] 1262                     STA      *VIA_t1_cnt_lo 
                           1263 ; macro call ->                     DRAW_TO_OPEN  -127, +78               ;75 
   7438 CC 00 81      [ 3] 1264                     LDD      #0+((-127)&0xff)                  ;3 A = 0; B = Y 
   743B DD 00         [ 5] 1265                     STD      *VIA_port_b                  ; 6 
   743D C6 4E         [ 2] 1266                     LDB      #+78 
   743F 0C 00         [ 6] 1267                     INC      *VIA_port_b                  ;Disable mux 
   7441 D7 01         [ 4] 1268                     STB      *VIA_port_a                  ;Send X to A/D 
   7443 C6 3F         [ 2] 1269                     LDB      #0b00111111 
   7445 D7 0A         [ 4] 1270                     STB      *VIA_shift_reg 
   7447 97 05         [ 4] 1271                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1272 ; macro call ->                     CLOSE_SHORT  
   7449 C6 FE         [ 2] 1273                     ldb      #SHIFT_2 
                           1274  .globl LF33D125
   744B                    1275 LF33D125: 
   744B 96 04         [ 4] 1276                     LDA      *VIA_t1_cnt_lo 
   744D 81 0A         [ 2] 1277                     cmpa     #10 
   744F 22 FA         [ 3] 1278                     bhi      LF33D125 
   7451 D7 0A         [ 4] 1279                     stb      *VIA_shift_reg 
                           1280 ; macro call ->                     WAIT12
   7453 1F 88         [ 6] 1281 	tfr a,a; wait 12 cycles
   7455 1F 88         [ 6] 1282      tfr a,a
                           1283 ; macro call ->                     _ZERO_VECTOR_BEAM  
   7457 C6 CC         [ 2] 1284                     LDB      #0xCC                         ; 2 
   7459 D7 0C         [ 4] 1285                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                           1286 ; macro call ->                     WAIT28
   745B 34 77         [11] 1287  pshs y,x,d,u,cc; wait 28 cycles
   745D 35 77         [11] 1288  puls y,x,d,u,cc
   745F 86 CE         [ 2] 1289                     LDA      #0xCE                         ;Blank low, zero high? 
   7461 97 0C         [ 4] 1290                     STA      *VIA_cntl                    ; 
   7463 86 07         [ 2] 1291                     LDA      #7                           ; scalefactor 
   7465 97 04         [ 4] 1292                     STA      *VIA_t1_cnt_lo 
                           1293 ; macro call ->                     MOVE_TO_OPEN  127, 55 
                           1294 ; assuming SHIFT is zeri
   7467 CC 00 7F      [ 3] 1295                     LDD      #0+((127)&0xff)                  ;3 A = 0; B = Y 
   746A DD 00         [ 5] 1296                     STD      *VIA_port_b                  ; 6 
   746C C6 37         [ 2] 1297                     LDB      #55 
   746E 0C 00         [ 6] 1298                     INC      *VIA_port_b                  ;Disable mux 
   7470 D7 01         [ 4] 1299                     STB      *VIA_port_a                  ;Send X to A/D 
   7472 97 05         [ 4] 1300                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1301 ; macro call ->                     WAIT4
   7474 12            [ 2] 1302  nop ; wait 4 cycles
   7475 12            [ 2] 1303  nop 
   7476 86 65         [ 2] 1304                     LDA      #101                         ; scalefactor 
   7478 97 04         [ 4] 1305                     STA      *VIA_t1_cnt_lo 
                           1306 ; macro call ->                     DRAW_TO_OPEN  127, 77 
   747A CC 00 7F      [ 3] 1307                     LDD      #0+((127)&0xff)                  ;3 A = 0; B = Y 
   747D DD 00         [ 5] 1308                     STD      *VIA_port_b                  ; 6 
   747F C6 4D         [ 2] 1309                     LDB      #77 
   7481 0C 00         [ 6] 1310                     INC      *VIA_port_b                  ;Disable mux 
   7483 D7 01         [ 4] 1311                     STB      *VIA_port_a                  ;Send X to A/D 
   7485 C6 3F         [ 2] 1312                     LDB      #0b00111111 
   7487 D7 0A         [ 4] 1313                     STB      *VIA_shift_reg 
   7489 97 05         [ 4] 1314                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1315 ; macro call ->                     CLOSE_SHORT  
   748B C6 FE         [ 2] 1316                     ldb      #SHIFT_2 
                           1317  .globl LF33D132
   748D                    1318 LF33D132: 
   748D 96 04         [ 4] 1319                     LDA      *VIA_t1_cnt_lo 
   748F 81 0A         [ 2] 1320                     cmpa     #10 
   7491 22 FA         [ 3] 1321                     bhi      LF33D132 
   7493 D7 0A         [ 4] 1322                     stb      *VIA_shift_reg 
                           1323 ; macro call ->                     WAIT12
   7495 1F 88         [ 6] 1324 	tfr a,a; wait 12 cycles
   7497 1F 88         [ 6] 1325      tfr a,a
                           1326 ; macro call ->                     _ZERO_VECTOR_BEAM  
   7499 C6 CC         [ 2] 1327                     LDB      #0xCC                         ; 2 
   749B D7 0C         [ 4] 1328                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                           1329 ; macro call ->                     WAIT28
   749D 34 77         [11] 1330  pshs y,x,d,u,cc; wait 28 cycles
   749F 35 77         [11] 1331  puls y,x,d,u,cc
   74A1 86 CE         [ 2] 1332                     LDA      #0xCE                         ;Blank low, zero high? 
   74A3 97 0C         [ 4] 1333                     STA      *VIA_cntl                    ; 
   74A5 86 08         [ 2] 1334                     LDA      #8                           ; scalefactor 
   74A7 97 04         [ 4] 1335                     STA      *VIA_t1_cnt_lo 
                           1336 ; macro call ->                     MOVE_TO_OPEN  -127, -55 
                           1337 ; assuming SHIFT is zeri
   74A9 CC 00 81      [ 3] 1338                     LDD      #0+((-127)&0xff)                  ;3 A = 0; B = Y 
   74AC DD 00         [ 5] 1339                     STD      *VIA_port_b                  ; 6 
   74AE C6 C9         [ 2] 1340                     LDB      #-55 
   74B0 0C 00         [ 6] 1341                     INC      *VIA_port_b                  ;Disable mux 
   74B2 D7 01         [ 4] 1342                     STB      *VIA_port_a                  ;Send X to A/D 
   74B4 97 05         [ 4] 1343                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1344 ; macro call ->                     WAIT4
   74B6 12            [ 2] 1345  nop ; wait 4 cycles
   74B7 12            [ 2] 1346  nop 
   74B8 86 65         [ 2] 1347                     LDA      #101                         ; scalefactor 
   74BA 97 04         [ 4] 1348                     STA      *VIA_t1_cnt_lo 
                           1349 ; macro call ->                     DRAW_TO_OPEN  -127, -75 
   74BC CC 00 81      [ 3] 1350                     LDD      #0+((-127)&0xff)                  ;3 A = 0; B = Y 
   74BF DD 00         [ 5] 1351                     STD      *VIA_port_b                  ; 6 
   74C1 C6 B5         [ 2] 1352                     LDB      #-75 
   74C3 0C 00         [ 6] 1353                     INC      *VIA_port_b                  ;Disable mux 
   74C5 D7 01         [ 4] 1354                     STB      *VIA_port_a                  ;Send X to A/D 
   74C7 C6 3F         [ 2] 1355                     LDB      #0b00111111 
   74C9 D7 0A         [ 4] 1356                     STB      *VIA_shift_reg 
   74CB 97 05         [ 4] 1357                     STA      *VIA_t1_cnt_hi               ;enable timer 1 
                           1358 ; macro call ->                     CLOSE_SHORT  
   74CD C6 FE         [ 2] 1359                     ldb      #SHIFT_2 
                           1360  .globl LF33D139
   74CF                    1361 LF33D139: 
   74CF 96 04         [ 4] 1362                     LDA      *VIA_t1_cnt_lo 
   74D1 81 0A         [ 2] 1363                     cmpa     #10 
   74D3 22 FA         [ 3] 1364                     bhi      LF33D139 
   74D5 D7 0A         [ 4] 1365                     stb      *VIA_shift_reg 
                           1366 ; macro call ->                     WAIT12
   74D7 1F 88         [ 6] 1367 	tfr a,a; wait 12 cycles
   74D9 1F 88         [ 6] 1368      tfr a,a
                           1369 ; macro call ->                     _ZERO_VECTOR_BEAM  
   74DB C6 CC         [ 2] 1370                     LDB      #0xCC                         ; 2 
   74DD D7 0C         [ 4] 1371                     STB      *VIA_cntl                    ; 6 /BLANK low and /ZERO low 
                           1372 ; macro call ->                     WAIT24
   74DF 34 71         [ 9] 1373   pshs x,y,u,cc; wait 24 cycles
   74E1 35 71         [ 9] 1374   puls x,y,u,cc
   74E3 4F            [ 2] 1375                     clra     
   74E4 97 0A         [ 4] 1376                     sta      *VIA_shift_reg 
   74E6 39            [ 5] 1377                     rts      
ASxxxx Assembler V05.00  (Motorola 6809), page 1.
Hexidecimal [16-Bits]

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 A$DrawWebToC.p     03D2 GR  |   2 A$DrawWebToC.p     03D4 GR
  2 A$DrawWebToC.p     03D6 GR  |   2 A$DrawWebToC.p     03D8 GR
  2 A$DrawWebToC.p     03DA GR  |   2 A$DrawWebToC.p     03DD GR
  2 A$DrawWebToC.p     03DF GR  |   2 A$DrawWebToC.p     03E1 GR
  2 A$DrawWebToC.p     03E3 GR  |   2 A$DrawWebToC.p     03E5 GR
  2 A$DrawWebToC.p     03E7 GR  |   2 A$DrawWebToC.p     03E9 GR
  2 A$DrawWebToC.p     03EB GR  |   2 A$DrawWebToC.p     03ED GR
  2 A$DrawWebToC.p     03EF GR  |   2 A$DrawWebToC.p     03F1 GR
  2 A$DrawWebToC.p     03F3 GR  |   2 A$DrawWebToC.p     03F5 GR
  2 A$DrawWebToC.p     03F7 GR  |   2 A$DrawWebToC.p     03F9 GR
  2 A$DrawWebToC.p     03FB GR  |   2 A$DrawWebToC.p     03FD GR
  2 A$DrawWebToC.p     03FF GR  |   2 A$DrawWebToC.p     0401 GR
  2 A$DrawWebToC.p     0403 GR  |   2 A$DrawWebToC.p     0405 GR
  2 A$DrawWebToC.p     0407 GR  |   2 A$DrawWebToC.p     0409 GR
  2 A$DrawWebToC.p     040C GR  |   2 A$DrawWebToC.p     040E GR
  2 A$DrawWebToC.p     0410 GR  |   2 A$DrawWebToC.p     0412 GR
  2 A$DrawWebToC.p     0414 GR  |   2 A$DrawWebToC.p     0416 GR
  2 A$DrawWebToC.p     0417 GR  |   2 A$DrawWebToC.p     0419 GR
  2 A$DrawWebToC.p     041B GR  |   2 A$DrawWebToC.p     041E GR
  2 A$DrawWebToC.p     0420 GR  |   2 A$DrawWebToC.p     0422 GR
  2 A$DrawWebToC.p     0424 GR  |   2 A$DrawWebToC.p     0426 GR
  2 A$DrawWebToC.p     0428 GR  |   2 A$DrawWebToC.p     042A GR
  2 A$DrawWebToC.p     042C GR  |   2 A$DrawWebToC.p     042E GR
  2 A$DrawWebToC.p     0430 GR  |   2 A$DrawWebToC.p     0432 GR
  2 A$DrawWebToC.p     0434 GR  |   2 A$DrawWebToC.p     0436 GR
  2 A$DrawWebToC.p     0438 GR  |   2 A$DrawWebToC.p     043A GR
  2 A$DrawWebToC.p     043C GR  |   2 A$DrawWebToC.p     043E GR
  2 A$DrawWebToC.p     0440 GR  |   2 A$DrawWebToC.p     0442 GR
  2 A$DrawWebToC.p     0444 GR  |   2 A$DrawWebToC.p     0446 GR
  2 A$DrawWebToC.p     0448 GR  |   2 A$DrawWebToC.p     044A GR
  2 A$DrawWebToC.p     044D GR  |   2 A$DrawWebToC.p     044F GR
  2 A$DrawWebToC.p     0451 GR  |   2 A$DrawWebToC.p     0453 GR
  2 A$DrawWebToC.p     0455 GR  |   2 A$DrawWebToC.p     0457 GR
  2 A$DrawWebToC.p     0458 GR  |   2 A$DrawWebToC.p     0459 GR
  2 A$DrawWebToC.p     045B GR  |   2 A$DrawWebToC.p     045D GR
  2 A$DrawWebToC.p     0460 GR  |   2 A$DrawWebToC.p     0462 GR
  2 A$DrawWebToC.p     0464 GR  |   2 A$DrawWebToC.p     0466 GR
  2 A$DrawWebToC.p     0468 GR  |   2 A$DrawWebToC.p     046A GR
  2 A$DrawWebToC.p     046C GR  |   2 A$DrawWebToC.p     046E GR
  2 A$DrawWebToC.p     0470 GR  |   2 A$DrawWebToC.p     0472 GR
  2 A$DrawWebToC.p     0474 GR  |   2 A$DrawWebToC.p     0476 GR
  2 A$DrawWebToC.p     0478 GR  |   2 A$DrawWebToC.p     047A GR
  2 A$DrawWebToC.p     047C GR  |   2 A$DrawWebToC.p     047E GR
  2 A$DrawWebToC.p     0480 GR  |   2 A$DrawWebToC.p     0482 GR
  2 A$DrawWebToC.p     0484 GR  |   2 A$DrawWebToC.p     0486 GR
  2 A$DrawWebToC.p     0488 GR  |   2 A$DrawWebToC.p     048A GR
  2 A$DrawWebToC.p     048C GR  |   2 A$DrawWebToC.p     048F GR
  2 A$DrawWebToC.p     0491 GR  |   2 A$DrawWebToC.p     0493 GR
  2 A$DrawWebToC.p     0495 GR  |   2 A$DrawWebToC.p     0497 GR
  2 A$DrawWebToC.p     0499 GR  |   2 A$DrawWebToC.p     049A GR
  2 A$DrawWebToC.p     049C GR  |   2 A$DrawWebToC.p     049E GR
  2 A$DrawWebToC.p     04A1 GR  |   2 A$DrawWebToC.p     04A3 GR
  2 A$DrawWebToC.p     04A5 GR  |   2 A$DrawWebToC.p     04A7 GR
  2 A$DrawWebToC.p     04A9 GR  |   2 A$DrawWebToC.p     04AB GR
  2 A$DrawWebToC.p     04AD GR  |   2 A$DrawWebToC.p     04AF GR
  2 A$DrawWebToC.p     04B1 GR  |   2 A$DrawWebToC.p     04B3 GR
  2 A$DrawWebToC.p     04B5 GR  |   2 A$DrawWebToC.p     04B7 GR
  2 A$DrawWebToC.p     04B9 GR  |   2 A$DrawWebToC.p     04BB GR
  2 A$DrawWebToC.p     04BD GR  |   2 A$DrawWebToC.p     04BF GR
  2 A$DrawWebToC.p     04C1 GR  |   2 A$DrawWebToC.p     04C3 GR
  2 A$DrawWebToC.p     04C5 GR  |   2 A$DrawWebToC.p     04C7 GR
  2 A$DrawWebToC.p     04C9 GR  |   2 A$DrawWebToC.p     04CB GR
  2 A$DrawWebToC.p     04CD GR  |   2 A$DrawWebToC.p     04D0 GR
  2 A$DrawWebToC.p     04D2 GR  |   2 A$DrawWebToC.p     04D4 GR
  2 A$DrawWebToC.p     04D6 GR  |   2 A$DrawWebToC.p     04D8 GR
  2 A$DrawWebToC.p     04DA GR  |   2 A$DrawWebToC.p     04DB GR
  2 A$DrawWebToC.p     04DC GR  |   2 A$DrawWebToC.p     04DE GR
  2 A$DrawWebToC.p     04E0 GR  |   2 A$DrawWebToC.p     04E3 GR
  2 A$DrawWebToC.p     04E5 GR  |   2 A$DrawWebToC.p     04E7 GR
  2 A$DrawWebToC.p     04E9 GR  |   2 A$DrawWebToC.p     04EB GR
  2 A$DrawWebToC.p     04ED GR  |   2 A$DrawWebToC.p     04EF GR
  2 A$DrawWebToC.p     04F1 GR  |   2 A$DrawWebToC.p     04F3 GR
  2 A$DrawWebToC.p     04F5 GR  |   2 A$DrawWebToC.p     04F7 GR
  2 A$DrawWebToC.p     04F9 GR  |   2 A$DrawWebToC.p     04FB GR
  2 A$DrawWebToC.p     04FD GR  |   2 A$DrawWebToC.p     04FF GR
  2 A$DrawWebToC.p     0501 GR  |   2 A$DrawWebToC.p     0503 GR
  2 A$DrawWebToC.p     0505 GR  |   2 A$DrawWebToC.p     0507 GR
  2 A$DrawWebToC.p     0509 GR  |   2 A$DrawWebToC.p     050B GR
  2 A$DrawWebToC.p     050D GR  |   2 A$DrawWebToC.p     050F GR
  2 A$DrawWebToC.p     0512 GR  |   2 A$DrawWebToC.p     0514 GR
  2 A$DrawWebToC.p     0516 GR  |   2 A$DrawWebToC.p     0518 GR
  2 A$DrawWebToC.p     051A GR  |   2 A$DrawWebToC.p     051C GR
  2 A$DrawWebToC.p     051D GR  |   2 A$DrawWebToC.p     051E GR
  2 A$DrawWebToC.p     0520 GR  |   2 A$DrawWebToC.p     0522 GR
  2 A$DrawWebToC.p     0525 GR  |   2 A$DrawWebToC.p     0527 GR
  2 A$DrawWebToC.p     0529 GR  |   2 A$DrawWebToC.p     052B GR
  2 A$DrawWebToC.p     052D GR  |   2 A$DrawWebToC.p     052F GR
  2 A$DrawWebToC.p     0531 GR  |   2 A$DrawWebToC.p     0533 GR
  2 A$DrawWebToC.p     0535 GR  |   2 A$DrawWebToC.p     0537 GR
  2 A$DrawWebToC.p     0539 GR  |   2 A$DrawWebToC.p     053B GR
  2 A$DrawWebToC.p     053D GR  |   2 A$DrawWebToC.p     053F GR
  2 A$DrawWebToC.p     0541 GR  |   2 A$DrawWebToC.p     0543 GR
  2 A$DrawWebToC.p     0545 GR  |   2 A$DrawWebToC.p     0547 GR
  2 A$DrawWebToC.p     0549 GR  |   2 A$DrawWebToC.p     054B GR
  2 A$DrawWebToC.p     054D GR  |   2 A$DrawWebToC.p     054F GR
  2 A$DrawWebToC.p     0551 GR  |   2 A$DrawWebToC.p     0554 GR
  2 A$DrawWebToC.p     0556 GR  |   2 A$DrawWebToC.p     0558 GR
  2 A$DrawWebToC.p     055A GR  |   2 A$DrawWebToC.p     055C GR
  2 A$DrawWebToC.p     055E GR  |   2 A$DrawWebToC.p     055F GR
  2 A$DrawWebToC.p     0560 GR  |   2 A$DrawWebToC.p     0562 GR
  2 A$DrawWebToC.p     0564 GR  |   2 A$DrawWebToC.p     0567 GR
  2 A$DrawWebToC.p     0569 GR  |   2 A$DrawWebToC.p     056B GR
  2 A$DrawWebToC.p     056D GR  |   2 A$DrawWebToC.p     056F GR
  2 A$DrawWebToC.p     0571 GR  |   2 A$DrawWebToC.p     0573 GR
  2 A$DrawWebToC.p     0575 GR  |   2 A$DrawWebToC.p     0577 GR
  2 A$DrawWebToC.p     0579 GR  |   2 A$DrawWebToC.p     057B GR
  2 A$DrawWebToC.p     057D GR  |   2 A$DrawWebToC.p     057F GR
  2 A$DrawWebToC.p     0581 GR  |   2 A$DrawWebToC.p     0583 GR
  2 A$DrawWebToC.p     0585 GR  |   2 A$DrawWebToC.p     0587 GR
  2 A$DrawWebToC.p     0589 GR  |   2 A$DrawWebToC.p     058B GR
  2 A$DrawWebToC.p     058D GR  |   2 A$DrawWebToC.p     058F GR
  2 A$DrawWebToC.p     0591 GR  |   2 A$DrawWebToC.p     0593 GR
  2 A$DrawWebToC.p     0596 GR  |   2 A$DrawWebToC.p     0598 GR
  2 A$DrawWebToC.p     059A GR  |   2 A$DrawWebToC.p     059C GR
  2 A$DrawWebToC.p     059E GR  |   2 A$DrawWebToC.p     05A0 GR
  2 A$DrawWebToC.p     05A1 GR  |   2 A$DrawWebToC.p     05A2 GR
  2 A$DrawWebToC.p     05A4 GR  |   2 A$DrawWebToC.p     05A6 GR
  2 A$DrawWebToC.p     05A9 GR  |   2 A$DrawWebToC.p     05AB GR
  2 A$DrawWebToC.p     05AD GR  |   2 A$DrawWebToC.p     05AF GR
  2 A$DrawWebToC.p     05B1 GR  |   2 A$DrawWebToC.p     05B3 GR
  2 A$DrawWebToC.p     05B5 GR  |   2 A$DrawWebToC.p     05B7 GR
  2 A$DrawWebToC.p     05B9 GR  |   2 A$DrawWebToC.p     05BB GR
  2 A$DrawWebToC.p     05BD GR  |   2 A$DrawWebToC.p     05BF GR
  2 A$DrawWebToC.p     05C1 GR  |   2 A$DrawWebToC.p     05C3 GR
  2 A$DrawWebToC.p     05C5 GR  |   2 A$DrawWebToC.p     05C7 GR
  2 A$DrawWebToC.p     05C9 GR  |   2 A$DrawWebToC.p     05CB GR
  2 A$DrawWebToC.p     05CD GR  |   2 A$DrawWebToC.p     05CF GR
  2 A$DrawWebToC.p     05D1 GR  |   2 A$DrawWebToC.p     05D3 GR
  2 A$DrawWebToC.p     05D5 GR  |   2 A$DrawWebToC.p     05D8 GR
  2 A$DrawWebToC.p     05DA GR  |   2 A$DrawWebToC.p     05DC GR
  2 A$DrawWebToC.p     05DE GR  |   2 A$DrawWebToC.p     05E0 GR
  2 A$DrawWebToC.p     05E2 GR  |   2 A$DrawWebToC.p     05E3 GR
  2 A$DrawWebToC.p     05E4 GR  |   2 A$DrawWebToC.p     05E6 GR
  2 A$DrawWebToC.p     05E8 GR  |   2 A$DrawWebToC.p     05EB GR
  2 A$DrawWebToC.p     05ED GR  |   2 A$DrawWebToC.p     05EF GR
  2 A$DrawWebToC.p     05F1 GR  |   2 A$DrawWebToC.p     05F3 GR
  2 A$DrawWebToC.p     05F5 GR  |   2 A$DrawWebToC.p     05F7 GR
  2 A$DrawWebToC.p     05F9 GR  |   2 A$DrawWebToC.p     05FB GR
  2 A$DrawWebToC.p     05FD GR  |   2 A$DrawWebToC.p     05FF GR
  2 A$DrawWebToC.p     0601 GR  |   2 A$DrawWebToC.p     0603 GR
  2 A$DrawWebToC.p     0605 GR  |   2 A$DrawWebToC.p     0607 GR
  2 A$DrawWebToC.p     0609 GR  |   2 A$DrawWebToC.p     060B GR
  2 A$DrawWebToC.p     060D GR  |   2 A$DrawWebToC.p     060F GR
  2 A$DrawWebToC.p     0610 GR  |   2 A$DrawWebToC.p     0612 GR
  2 A$DrawWebToC.p     0000 GR  |   2 A$DrawWebToC.p     0000 GR
  2 A$DrawWebToC.p     0002 GR  |   2 A$DrawWebToC.p     0004 GR
  2 A$DrawWebToC.p     0006 GR  |   2 A$DrawWebToC.p     0008 GR
  2 A$DrawWebToC.p     000A GR  |   2 A$DrawWebToC.p     000C GR
  2 A$DrawWebToC.p     000E GR  |   2 A$DrawWebToC.p     0010 GR
  2 A$DrawWebToC.p     0013 GR  |   2 A$DrawWebToC.p     0015 GR
  2 A$DrawWebToC.p     0017 GR  |   2 A$DrawWebToC.p     0019 GR
  2 A$DrawWebToC.p     001B GR  |   2 A$DrawWebToC.p     001D GR
  2 A$DrawWebToC.p     001F GR  |   2 A$DrawWebToC.p     0021 GR
  2 A$DrawWebToC.p     0023 GR  |   2 A$DrawWebToC.p     0025 GR
  2 A$DrawWebToC.p     0027 GR  |   2 A$DrawWebToC.p     002A GR
  2 A$DrawWebToC.p     002C GR  |   2 A$DrawWebToC.p     002E GR
  2 A$DrawWebToC.p     0030 GR  |   2 A$DrawWebToC.p     0032 GR
  2 A$DrawWebToC.p     0034 GR  |   2 A$DrawWebToC.p     0036 GR
  2 A$DrawWebToC.p     0038 GR  |   2 A$DrawWebToC.p     003A GR
  2 A$DrawWebToC.p     003C GR  |   2 A$DrawWebToC.p     003E GR
  2 A$DrawWebToC.p     0040 GR  |   2 A$DrawWebToC.p     0042 GR
  2 A$DrawWebToC.p     0045 GR  |   2 A$DrawWebToC.p     0047 GR
  2 A$DrawWebToC.p     0049 GR  |   2 A$DrawWebToC.p     004B GR
  2 A$DrawWebToC.p     004D GR  |   2 A$DrawWebToC.p     004F GR
  2 A$DrawWebToC.p     0051 GR  |   2 A$DrawWebToC.p     0053 GR
  2 A$DrawWebToC.p     0055 GR  |   2 A$DrawWebToC.p     0057 GR
  2 A$DrawWebToC.p     0059 GR  |   2 A$DrawWebToC.p     005B GR
  2 A$DrawWebToC.p     005D GR  |   2 A$DrawWebToC.p     0060 GR
  2 A$DrawWebToC.p     0062 GR  |   2 A$DrawWebToC.p     0064 GR
  2 A$DrawWebToC.p     0066 GR  |   2 A$DrawWebToC.p     0068 GR
  2 A$DrawWebToC.p     006A GR  |   2 A$DrawWebToC.p     006C GR
  2 A$DrawWebToC.p     006E GR  |   2 A$DrawWebToC.p     0070 GR
  2 A$DrawWebToC.p     0072 GR  |   2 A$DrawWebToC.p     0074 GR
  2 A$DrawWebToC.p     0076 GR  |   2 A$DrawWebToC.p     0078 GR
  2 A$DrawWebToC.p     007B GR  |   2 A$DrawWebToC.p     007D GR
  2 A$DrawWebToC.p     007F GR  |   2 A$DrawWebToC.p     0081 GR
  2 A$DrawWebToC.p     0083 GR  |   2 A$DrawWebToC.p     0085 GR
  2 A$DrawWebToC.p     0087 GR  |   2 A$DrawWebToC.p     0089 GR
  2 A$DrawWebToC.p     008B GR  |   2 A$DrawWebToC.p     008D GR
  2 A$DrawWebToC.p     008F GR  |   2 A$DrawWebToC.p     0091 GR
  2 A$DrawWebToC.p     0094 GR  |   2 A$DrawWebToC.p     0096 GR
  2 A$DrawWebToC.p     0098 GR  |   2 A$DrawWebToC.p     009A GR
  2 A$DrawWebToC.p     009C GR  |   2 A$DrawWebToC.p     009E GR
  2 A$DrawWebToC.p     00A0 GR  |   2 A$DrawWebToC.p     00A2 GR
  2 A$DrawWebToC.p     00A4 GR  |   2 A$DrawWebToC.p     00A6 GR
  2 A$DrawWebToC.p     00A8 GR  |   2 A$DrawWebToC.p     00AA GR
  2 A$DrawWebToC.p     00AC GR  |   2 A$DrawWebToC.p     00AF GR
  2 A$DrawWebToC.p     00B1 GR  |   2 A$DrawWebToC.p     00B3 GR
  2 A$DrawWebToC.p     00B5 GR  |   2 A$DrawWebToC.p     00B7 GR
  2 A$DrawWebToC.p     00B9 GR  |   2 A$DrawWebToC.p     00BB GR
  2 A$DrawWebToC.p     00BD GR  |   2 A$DrawWebToC.p     00BF GR
  2 A$DrawWebToC.p     00C1 GR  |   2 A$DrawWebToC.p     00C3 GR
  2 A$DrawWebToC.p     00C5 GR  |   2 A$DrawWebToC.p     00C7 GR
  2 A$DrawWebToC.p     00CA GR  |   2 A$DrawWebToC.p     00CC GR
  2 A$DrawWebToC.p     00CE GR  |   2 A$DrawWebToC.p     00D0 GR
  2 A$DrawWebToC.p     00D2 GR  |   2 A$DrawWebToC.p     00D4 GR
  2 A$DrawWebToC.p     00D6 GR  |   2 A$DrawWebToC.p     00D8 GR
  2 A$DrawWebToC.p     00DA GR  |   2 A$DrawWebToC.p     00DC GR
  2 A$DrawWebToC.p     00DE GR  |   2 A$DrawWebToC.p     00E0 GR
  2 A$DrawWebToC.p     00E2 GR  |   2 A$DrawWebToC.p     00E5 GR
  2 A$DrawWebToC.p     00E7 GR  |   2 A$DrawWebToC.p     00E9 GR
  2 A$DrawWebToC.p     00EB GR  |   2 A$DrawWebToC.p     00ED GR
  2 A$DrawWebToC.p     00EF GR  |   2 A$DrawWebToC.p     00F1 GR
  2 A$DrawWebToC.p     00F3 GR  |   2 A$DrawWebToC.p     00F5 GR
  2 A$DrawWebToC.p     00F7 GR  |   2 A$DrawWebToC.p     00F9 GR
  2 A$DrawWebToC.p     00FB GR  |   2 A$DrawWebToC.p     00FD GR
  2 A$DrawWebToC.p     00FF GR  |   2 A$DrawWebToC.p     0101 GR
  2 A$DrawWebToC.p     0103 GR  |   2 A$DrawWebToC.p     0104 GR
  2 A$DrawWebToC.p     0106 GR  |   2 A$DrawWebToC.p     0108 GR
  2 A$DrawWebToC.p     010A GR  |   2 A$DrawWebToC.p     010C GR
  2 A$DrawWebToC.p     010F GR  |   2 A$DrawWebToC.p     0111 GR
  2 A$DrawWebToC.p     0113 GR  |   2 A$DrawWebToC.p     0115 GR
  2 A$DrawWebToC.p     0117 GR  |   2 A$DrawWebToC.p     0119 GR
  2 A$DrawWebToC.p     011B GR  |   2 A$DrawWebToC.p     011D GR
  2 A$DrawWebToC.p     011F GR  |   2 A$DrawWebToC.p     0121 GR
  2 A$DrawWebToC.p     0123 GR  |   2 A$DrawWebToC.p     0126 GR
  2 A$DrawWebToC.p     0128 GR  |   2 A$DrawWebToC.p     012A GR
  2 A$DrawWebToC.p     012C GR  |   2 A$DrawWebToC.p     012E GR
  2 A$DrawWebToC.p     0130 GR  |   2 A$DrawWebToC.p     0132 GR
  2 A$DrawWebToC.p     0134 GR  |   2 A$DrawWebToC.p     0136 GR
  2 A$DrawWebToC.p     0138 GR  |   2 A$DrawWebToC.p     013A GR
  2 A$DrawWebToC.p     013C GR  |   2 A$DrawWebToC.p     013E GR
  2 A$DrawWebToC.p     0141 GR  |   2 A$DrawWebToC.p     0143 GR
  2 A$DrawWebToC.p     0145 GR  |   2 A$DrawWebToC.p     0147 GR
  2 A$DrawWebToC.p     0149 GR  |   2 A$DrawWebToC.p     014B GR
  2 A$DrawWebToC.p     014D GR  |   2 A$DrawWebToC.p     014F GR
  2 A$DrawWebToC.p     0151 GR  |   2 A$DrawWebToC.p     0153 GR
  2 A$DrawWebToC.p     0155 GR  |   2 A$DrawWebToC.p     0157 GR
  2 A$DrawWebToC.p     0159 GR  |   2 A$DrawWebToC.p     015C GR
  2 A$DrawWebToC.p     015E GR  |   2 A$DrawWebToC.p     0160 GR
  2 A$DrawWebToC.p     0162 GR  |   2 A$DrawWebToC.p     0164 GR
  2 A$DrawWebToC.p     0166 GR  |   2 A$DrawWebToC.p     0168 GR
  2 A$DrawWebToC.p     016A GR  |   2 A$DrawWebToC.p     016C GR
  2 A$DrawWebToC.p     016E GR  |   2 A$DrawWebToC.p     0170 GR
  2 A$DrawWebToC.p     0172 GR  |   2 A$DrawWebToC.p     0175 GR
  2 A$DrawWebToC.p     0177 GR  |   2 A$DrawWebToC.p     0179 GR
  2 A$DrawWebToC.p     017B GR  |   2 A$DrawWebToC.p     017D GR
  2 A$DrawWebToC.p     017F GR  |   2 A$DrawWebToC.p     0181 GR
  2 A$DrawWebToC.p     0183 GR  |   2 A$DrawWebToC.p     0185 GR
  2 A$DrawWebToC.p     0187 GR  |   2 A$DrawWebToC.p     0189 GR
  2 A$DrawWebToC.p     018B GR  |   2 A$DrawWebToC.p     018D GR
  2 A$DrawWebToC.p     0190 GR  |   2 A$DrawWebToC.p     0192 GR
  2 A$DrawWebToC.p     0194 GR  |   2 A$DrawWebToC.p     0196 GR
  2 A$DrawWebToC.p     0198 GR  |   2 A$DrawWebToC.p     019A GR
  2 A$DrawWebToC.p     019C GR  |   2 A$DrawWebToC.p     019E GR
  2 A$DrawWebToC.p     01A0 GR  |   2 A$DrawWebToC.p     01A2 GR
  2 A$DrawWebToC.p     01A4 GR  |   2 A$DrawWebToC.p     01A6 GR
  2 A$DrawWebToC.p     01A8 GR  |   2 A$DrawWebToC.p     01AB GR
  2 A$DrawWebToC.p     01AD GR  |   2 A$DrawWebToC.p     01AF GR
  2 A$DrawWebToC.p     01B1 GR  |   2 A$DrawWebToC.p     01B3 GR
  2 A$DrawWebToC.p     01B5 GR  |   2 A$DrawWebToC.p     01B7 GR
  2 A$DrawWebToC.p     01B9 GR  |   2 A$DrawWebToC.p     01BB GR
  2 A$DrawWebToC.p     01BD GR  |   2 A$DrawWebToC.p     01BF GR
  2 A$DrawWebToC.p     01C1 GR  |   2 A$DrawWebToC.p     01C3 GR
  2 A$DrawWebToC.p     01C6 GR  |   2 A$DrawWebToC.p     01C8 GR
  2 A$DrawWebToC.p     01CA GR  |   2 A$DrawWebToC.p     01CC GR
  2 A$DrawWebToC.p     01CE GR  |   2 A$DrawWebToC.p     01D0 GR
  2 A$DrawWebToC.p     01D2 GR  |   2 A$DrawWebToC.p     01D4 GR
  2 A$DrawWebToC.p     01D6 GR  |   2 A$DrawWebToC.p     01D8 GR
  2 A$DrawWebToC.p     01DA GR  |   2 A$DrawWebToC.p     01DC GR
  2 A$DrawWebToC.p     01DF GR  |   2 A$DrawWebToC.p     01E1 GR
  2 A$DrawWebToC.p     01E3 GR  |   2 A$DrawWebToC.p     01E5 GR
  2 A$DrawWebToC.p     01E7 GR  |   2 A$DrawWebToC.p     01E9 GR
  2 A$DrawWebToC.p     01EB GR  |   2 A$DrawWebToC.p     01ED GR
  2 A$DrawWebToC.p     01EF GR  |   2 A$DrawWebToC.p     01F1 GR
  2 A$DrawWebToC.p     01F3 GR  |   2 A$DrawWebToC.p     01F5 GR
  2 A$DrawWebToC.p     01F7 GR  |   2 A$DrawWebToC.p     01F9 GR
  2 A$DrawWebToC.p     01FB GR  |   2 A$DrawWebToC.p     01FD GR
  2 A$DrawWebToC.p     01FF GR  |   2 A$DrawWebToC.p     0201 GR
  2 A$DrawWebToC.p     0203 GR  |   2 A$DrawWebToC.p     0205 GR
  2 A$DrawWebToC.p     0207 GR  |   2 A$DrawWebToC.p     0209 GR
  2 A$DrawWebToC.p     020B GR  |   2 A$DrawWebToC.p     020E GR
  2 A$DrawWebToC.p     0210 GR  |   2 A$DrawWebToC.p     0212 GR
  2 A$DrawWebToC.p     0214 GR  |   2 A$DrawWebToC.p     0216 GR
  2 A$DrawWebToC.p     0218 GR  |   2 A$DrawWebToC.p     021A GR
  2 A$DrawWebToC.p     021C GR  |   2 A$DrawWebToC.p     021E GR
  2 A$DrawWebToC.p     0220 GR  |   2 A$DrawWebToC.p     0222 GR
  2 A$DrawWebToC.p     0225 GR  |   2 A$DrawWebToC.p     0227 GR
  2 A$DrawWebToC.p     0229 GR  |   2 A$DrawWebToC.p     022B GR
  2 A$DrawWebToC.p     022D GR  |   2 A$DrawWebToC.p     022F GR
  2 A$DrawWebToC.p     0231 GR  |   2 A$DrawWebToC.p     0233 GR
  2 A$DrawWebToC.p     0235 GR  |   2 A$DrawWebToC.p     0237 GR
  2 A$DrawWebToC.p     0239 GR  |   2 A$DrawWebToC.p     023B GR
  2 A$DrawWebToC.p     023D GR  |   2 A$DrawWebToC.p     0240 GR
  2 A$DrawWebToC.p     0242 GR  |   2 A$DrawWebToC.p     0244 GR
  2 A$DrawWebToC.p     0246 GR  |   2 A$DrawWebToC.p     0248 GR
  2 A$DrawWebToC.p     024A GR  |   2 A$DrawWebToC.p     024C GR
  2 A$DrawWebToC.p     024E GR  |   2 A$DrawWebToC.p     0250 GR
  2 A$DrawWebToC.p     0252 GR  |   2 A$DrawWebToC.p     0254 GR
  2 A$DrawWebToC.p     0256 GR  |   2 A$DrawWebToC.p     0259 GR
  2 A$DrawWebToC.p     025B GR  |   2 A$DrawWebToC.p     025D GR
  2 A$DrawWebToC.p     025F GR  |   2 A$DrawWebToC.p     0261 GR
  2 A$DrawWebToC.p     0263 GR  |   2 A$DrawWebToC.p     0265 GR
  2 A$DrawWebToC.p     0267 GR  |   2 A$DrawWebToC.p     0269 GR
  2 A$DrawWebToC.p     026B GR  |   2 A$DrawWebToC.p     026D GR
  2 A$DrawWebToC.p     026F GR  |   2 A$DrawWebToC.p     0271 GR
  2 A$DrawWebToC.p     0274 GR  |   2 A$DrawWebToC.p     0276 GR
  2 A$DrawWebToC.p     0278 GR  |   2 A$DrawWebToC.p     027A GR
  2 A$DrawWebToC.p     027C GR  |   2 A$DrawWebToC.p     027E GR
  2 A$DrawWebToC.p     0280 GR  |   2 A$DrawWebToC.p     0282 GR
  2 A$DrawWebToC.p     0284 GR  |   2 A$DrawWebToC.p     0286 GR
  2 A$DrawWebToC.p     0288 GR  |   2 A$DrawWebToC.p     028A GR
  2 A$DrawWebToC.p     028C GR  |   2 A$DrawWebToC.p     028F GR
  2 A$DrawWebToC.p     0291 GR  |   2 A$DrawWebToC.p     0293 GR
  2 A$DrawWebToC.p     0295 GR  |   2 A$DrawWebToC.p     0297 GR
  2 A$DrawWebToC.p     0299 GR  |   2 A$DrawWebToC.p     029B GR
  2 A$DrawWebToC.p     029D GR  |   2 A$DrawWebToC.p     029F GR
  2 A$DrawWebToC.p     02A1 GR  |   2 A$DrawWebToC.p     02A3 GR
  2 A$DrawWebToC.p     02A5 GR  |   2 A$DrawWebToC.p     02A7 GR
  2 A$DrawWebToC.p     02AA GR  |   2 A$DrawWebToC.p     02AC GR
  2 A$DrawWebToC.p     02AE GR  |   2 A$DrawWebToC.p     02B0 GR
  2 A$DrawWebToC.p     02B2 GR  |   2 A$DrawWebToC.p     02B4 GR
  2 A$DrawWebToC.p     02B6 GR  |   2 A$DrawWebToC.p     02B8 GR
  2 A$DrawWebToC.p     02BA GR  |   2 A$DrawWebToC.p     02BC GR
  2 A$DrawWebToC.p     02BE GR  |   2 A$DrawWebToC.p     02C0 GR
  2 A$DrawWebToC.p     02C3 GR  |   2 A$DrawWebToC.p     02C5 GR
  2 A$DrawWebToC.p     02C7 GR  |   2 A$DrawWebToC.p     02C9 GR
  2 A$DrawWebToC.p     02CB GR  |   2 A$DrawWebToC.p     02CD GR
  2 A$DrawWebToC.p     02CF GR  |   2 A$DrawWebToC.p     02D1 GR
  2 A$DrawWebToC.p     02D3 GR  |   2 A$DrawWebToC.p     02D5 GR
  2 A$DrawWebToC.p     02D7 GR  |   2 A$DrawWebToC.p     02D9 GR
  2 A$DrawWebToC.p     02DB GR  |   2 A$DrawWebToC.p     02DE GR
  2 A$DrawWebToC.p     02E0 GR  |   2 A$DrawWebToC.p     02E2 GR
  2 A$DrawWebToC.p     02E4 GR  |   2 A$DrawWebToC.p     02E6 GR
  2 A$DrawWebToC.p     02E8 GR  |   2 A$DrawWebToC.p     02EA GR
  2 A$DrawWebToC.p     02EC GR  |   2 A$DrawWebToC.p     02EE GR
  2 A$DrawWebToC.p     02F0 GR  |   2 A$DrawWebToC.p     02F2 GR
  2 A$DrawWebToC.p     02F4 GR  |   2 A$DrawWebToC.p     02F6 GR
  2 A$DrawWebToC.p     02F8 GR  |   2 A$DrawWebToC.p     02FA GR
  2 A$DrawWebToC.p     02FC GR  |   2 A$DrawWebToC.p     02FE GR
  2 A$DrawWebToC.p     0300 GR  |   2 A$DrawWebToC.p     0302 GR
  2 A$DrawWebToC.p     0304 GR  |   2 A$DrawWebToC.p     0306 GR
  2 A$DrawWebToC.p     0308 GR  |   2 A$DrawWebToC.p     030A GR
  2 A$DrawWebToC.p     030D GR  |   2 A$DrawWebToC.p     030F GR
  2 A$DrawWebToC.p     0311 GR  |   2 A$DrawWebToC.p     0313 GR
  2 A$DrawWebToC.p     0315 GR  |   2 A$DrawWebToC.p     0317 GR
  2 A$DrawWebToC.p     0319 GR  |   2 A$DrawWebToC.p     031B GR
  2 A$DrawWebToC.p     031D GR  |   2 A$DrawWebToC.p     031F GR
  2 A$DrawWebToC.p     0321 GR  |   2 A$DrawWebToC.p     0324 GR
  2 A$DrawWebToC.p     0326 GR  |   2 A$DrawWebToC.p     0328 GR
  2 A$DrawWebToC.p     032A GR  |   2 A$DrawWebToC.p     032C GR
  2 A$DrawWebToC.p     032E GR  |   2 A$DrawWebToC.p     0330 GR
  2 A$DrawWebToC.p     0332 GR  |   2 A$DrawWebToC.p     0334 GR
  2 A$DrawWebToC.p     0336 GR  |   2 A$DrawWebToC.p     0338 GR
  2 A$DrawWebToC.p     033A GR  |   2 A$DrawWebToC.p     033D GR
  2 A$DrawWebToC.p     033F GR  |   2 A$DrawWebToC.p     0341 GR
  2 A$DrawWebToC.p     0343 GR  |   2 A$DrawWebToC.p     0345 GR
  2 A$DrawWebToC.p     0347 GR  |   2 A$DrawWebToC.p     0349 GR
  2 A$DrawWebToC.p     034B GR  |   2 A$DrawWebToC.p     034D GR
  2 A$DrawWebToC.p     034F GR  |   2 A$DrawWebToC.p     0351 GR
  2 A$DrawWebToC.p     0353 GR  |   2 A$DrawWebToC.p     0355 GR
  2 A$DrawWebToC.p     0358 GR  |   2 A$DrawWebToC.p     035A GR
  2 A$DrawWebToC.p     035C GR  |   2 A$DrawWebToC.p     035E GR
  2 A$DrawWebToC.p     0360 GR  |   2 A$DrawWebToC.p     0362 GR
  2 A$DrawWebToC.p     0364 GR  |   2 A$DrawWebToC.p     0366 GR
  2 A$DrawWebToC.p     0368 GR  |   2 A$DrawWebToC.p     036A GR
  2 A$DrawWebToC.p     036C GR  |   2 A$DrawWebToC.p     036E GR
  2 A$DrawWebToC.p     0370 GR  |   2 A$DrawWebToC.p     0373 GR
  2 A$DrawWebToC.p     0375 GR  |   2 A$DrawWebToC.p     0377 GR
  2 A$DrawWebToC.p     0379 GR  |   2 A$DrawWebToC.p     037B GR
  2 A$DrawWebToC.p     037D GR  |   2 A$DrawWebToC.p     037F GR
  2 A$DrawWebToC.p     0381 GR  |   2 A$DrawWebToC.p     0383 GR
  2 A$DrawWebToC.p     0385 GR  |   2 A$DrawWebToC.p     0387 GR
  2 A$DrawWebToC.p     0389 GR  |   2 A$DrawWebToC.p     038B GR
  2 A$DrawWebToC.p     038E GR  |   2 A$DrawWebToC.p     0390 GR
  2 A$DrawWebToC.p     0392 GR  |   2 A$DrawWebToC.p     0394 GR
  2 A$DrawWebToC.p     0396 GR  |   2 A$DrawWebToC.p     0398 GR
  2 A$DrawWebToC.p     039A GR  |   2 A$DrawWebToC.p     039C GR
  2 A$DrawWebToC.p     039E GR  |   2 A$DrawWebToC.p     03A0 GR
  2 A$DrawWebToC.p     03A2 GR  |   2 A$DrawWebToC.p     03A4 GR
  2 A$DrawWebToC.p     03A7 GR  |   2 A$DrawWebToC.p     03A9 GR
  2 A$DrawWebToC.p     03AB GR  |   2 A$DrawWebToC.p     03AD GR
  2 A$DrawWebToC.p     03AF GR  |   2 A$DrawWebToC.p     03B1 GR
  2 A$DrawWebToC.p     03B3 GR  |   2 A$DrawWebToC.p     03B5 GR
  2 A$DrawWebToC.p     03B7 GR  |   2 A$DrawWebToC.p     03B9 GR
  2 A$DrawWebToC.p     03BB GR  |   2 A$DrawWebToC.p     03BD GR
  2 A$DrawWebToC.p     03BF GR  |   2 A$DrawWebToC.p     03C2 GR
  2 A$DrawWebToC.p     03C4 GR  |   2 A$DrawWebToC.p     03C6 GR
  2 A$DrawWebToC.p     03C8 GR  |   2 A$DrawWebToC.p     03CA GR
  2 A$DrawWebToC.p     03CC GR  |   2 A$DrawWebToC.p     03CE GR
  2 A$DrawWebToC.p     03D0 GR  |     Abs_a_b        =   F584 
    Abs_b          =   F58B     |     Add_Score_a    =   F85E 
    Add_Score_d    =   F87C     |     Bitmask_a      =   F57E 
    Char_Table     =   F9F4     |     Char_Table_End =   FBD4 
    Check0Ref      =   F34F     |     Clear_C8_RAM   =   F542 
    Clear_Score    =   F84F     |     Clear_Sound    =   F272 
    Clear_x_256    =   F545     |     Clear_x_b      =   F53F 
    Clear_x_b_80   =   F550     |     Clear_x_b_a    =   F552 
    Clear_x_d      =   F548     |     Cold_Start     =   F000 
    Compare_Score  =   F8C7     |     DP_to_C8       =   F1AF 
    DP_to_D0       =   F1AA     |     Dec_3_Counters =   F55A 
    Dec_6_Counters =   F55E     |     Dec_Counters   =   F563 
    Delay_0        =   F579     |     Delay_1        =   F575 
    Delay_2        =   F571     |     Delay_3        =   F56D 
    Delay_RTS      =   F57D     |     Delay_b        =   F57A 
    Do_Sound       =   F289     |     Do_Sound_x     =   F28C 
    Dot_List       =   F2D5     |     Dot_List_Reset =   F2DE 
    Dot_d          =   F2C3     |     Dot_here       =   F2C5 
    Dot_ix         =   F2C1     |     Dot_ix_b       =   F2BE 
    Draw_Grid_VL   =   FF9F     |     Draw_Line_d    =   F3DF 
    Draw_Pat_VL    =   F437     |     Draw_Pat_VL_a  =   F434 
    Draw_Pat_VL_d  =   F439     |     Draw_VL        =   F3DD 
    Draw_VL_a      =   F3DA     |     Draw_VL_ab     =   F3D8 
    Draw_VL_b      =   F3D2     |     Draw_VL_mode   =   F46E 
    Draw_VLc       =   F3CE     |     Draw_VLcs      =   F3D6 
    Draw_VLp       =   F410     |     Draw_VLp_7F    =   F408 
    Draw_VLp_FF    =   F404     |     Draw_VLp_b     =   F40E 
    Draw_VLp_scale =   F40C     |     Explosion_Snd  =   F92E 
    Get_Rise_Idx   =   F5D9     |     Get_Rise_Run   =   F5EF 
    Get_Run_Idx    =   F5DB     |     INCLUDE_I      =   0001 
    Init_Music     =   F68D     |     Init_Music_Buf =   F533 
    Init_Music_chk =   F687     |     Init_Music_x   =   F692 
    Init_OS        =   F18B     |     Init_OS_RAM    =   F164 
    Init_VIA       =   F14C     |     Intensity_1F   =   F29D 
    Intensity_3F   =   F2A1     |     Intensity_5F   =   F2A5 
    Intensity_7F   =   F2A9     |     Intensity_a    =   F2AB 
    Joy_Analog     =   F1F5     |     Joy_Digital    =   F1F8 
  2 LF33D10            0070 GR  |   2 LF33D104           04B1 GR
  2 LF33D111           04F3 GR  |   2 LF33D118           0535 GR
  2 LF33D12            0089 GR  |   2 LF33D125           0577 GR
  2 LF33D132           05B9 GR  |   2 LF33D139           05FB GR
  2 LF33D14            00A4 GR  |   2 LF33D16            00BF GR
  2 LF33D18            00DA GR  |   2 LF33D20            00F3 GR
  2 LF33D25            011F GR  |   2 LF33D27            0136 GR
  2 LF33D29            0151 GR  |   2 LF33D31            016A GR
  2 LF33D33            0185 GR  |   2 LF33D35            01A0 GR
  2 LF33D37            01BB GR  |   2 LF33D39            01D4 GR
  2 LF33D4             0023 GR  |   2 LF33D41            01EF GR
  2 LF33D46            021E GR  |   2 LF33D48            0235 GR
  2 LF33D50            024E GR  |   2 LF33D52            0269 GR
  2 LF33D54            0284 GR  |   2 LF33D56            029F GR
  2 LF33D58            02B8 GR  |   2 LF33D6             003A GR
  2 LF33D60            02D3 GR  |   2 LF33D62            02EE GR
  2 LF33D67            031D GR  |   2 LF33D69            0332 GR
  2 LF33D71            034D GR  |   2 LF33D73            0368 GR
  2 LF33D75            0383 GR  |   2 LF33D77            039C GR
  2 LF33D79            03B7 GR  |   2 LF33D8             0055 GR
  2 LF33D81            03D2 GR  |   2 LF33D83            03ED GR
  2 LF33D90            042E GR  |   2 LF33D97            0470 GR
    Mov_Draw_VL    =   F3BC     |     Mov_Draw_VL_a  =   F3B9 
    Mov_Draw_VL_ab =   F3B7     |     Mov_Draw_VL_b  =   F3B1 
    Mov_Draw_VL_d  =   F3BE     |     Mov_Draw_VLc_a =   F3AD 
    Mov_Draw_VLcs  =   F3B5     |     Move_Mem_a     =   F683 
    Move_Mem_a_1   =   F67F     |     Moveto_d       =   F312 
    Moveto_d_7F    =   F2FC     |     Moveto_ix      =   F310 
    Moveto_ix_7F   =   F30C     |     Moveto_ix_FF   =   F308 
    Moveto_ix_b    =   F30E     |     Moveto_x_7F    =   F2F2 
    New_High_Score =   F8D8     |     Obj_Hit        =   F8FF 
    Obj_Will_Hit   =   F8F3     |     Obj_Will_Hit_u =   F8E5 
    Print_List     =   F38A     |     Print_List_chk =   F38C 
    Print_List_hw  =   F385     |     Print_Ships    =   F393 
    Print_Ships_x  =   F391     |     Print_Str      =   F495 
    Print_Str_d    =   F37A     |     Print_Str_hwyx =   F373 
    Print_Str_yx   =   F378     |     Random         =   F517 
    Random_3       =   F511     |     Read_Btns      =   F1BA 
    Read_Btns_Mask =   F1B4     |     Recalibrate    =   F2E6 
    Reset0Int      =   F36B     |     Reset0Ref      =   F354 
    Reset0Ref_D0   =   F34A     |     Reset_Pen      =   F35B 
    Rise_Run_Angle =   F593     |     Rise_Run_Len   =   F603 
    Rise_Run_X     =   F5FF     |     Rise_Run_Y     =   F601 
    Rot_VL         =   F616     |     Rot_VL_M_dft   =   F62B 
    Rot_VL_Mode    =   F61F     |     Rot_VL_ab      =   F610 
    SHIFT_1        =   00E0     |     SHIFT_2        =   00FE 
    Select_Game    =   F7A9     |     Set_Refresh    =   F1A2 
    Sound_Byte     =   F256     |     Sound_Byte_raw =   F25B 
    Sound_Byte_x   =   F259     |     Sound_Bytes    =   F27D 
    Sound_Bytes_x  =   F284     |     Strip_Zeros    =   F8B7 
    VIA_DDR_a      =   D003     |     VIA_DDR_b      =   D002 
    VIA_aux_cntl   =   D00B     |     VIA_cntl       =   D00C 
    VIA_int_enable =   D00E     |     VIA_int_flags  =   D00D 
    VIA_port_a     =   D001     |     VIA_port_a_noh =   D00F 
    VIA_port_b     =   D000     |     VIA_shift_reg  =   D00A 
    VIA_t1_cnt_hi  =   D005     |     VIA_t1_cnt_lo  =   D004 
    VIA_t1_lch_hi  =   D007     |     VIA_t1_lch_lo  =   D006 
    VIA_t2_hi      =   D009     |     VIA_t2_lo      =   D008 
    Vec_0Ref_Enabl =   C824     |     Vec_ADSR_Table =   C84F 
    Vec_ADSR_Timer =   C85E     |     Vec_Angle      =   C836 
    Vec_Brightness =   C827     |     Vec_Btn_State  =   C80F 
    Vec_Button_1_1 =   C812     |     Vec_Button_1_2 =   C813 
    Vec_Button_1_3 =   C814     |     Vec_Button_1_4 =   C815 
    Vec_Button_2_1 =   C816     |     Vec_Button_2_2 =   C817 
    Vec_Button_2_3 =   C818     |     Vec_Button_2_4 =   C819 
    Vec_Buttons    =   C811     |     Vec_Cold_Flag  =   CBFE 
    Vec_Counter_1  =   C82E     |     Vec_Counter_2  =   C82F 
    Vec_Counter_3  =   C830     |     Vec_Counter_4  =   C831 
    Vec_Counter_5  =   C832     |     Vec_Counter_6  =   C833 
    Vec_Counters   =   C82E     |     Vec_Default_St =   CBEA 
    Vec_Dot_Dwell  =   C828     |     Vec_Duration   =   C857 
    Vec_Expl_1     =   C858     |     Vec_Expl_2     =   C859 
    Vec_Expl_3     =   C85A     |     Vec_Expl_4     =   C85B 
    Vec_Expl_Chan  =   C85C     |     Vec_Expl_ChanA =   C853 
    Vec_Expl_ChanB =   C85D     |     Vec_Expl_Chans =   C854 
    Vec_Expl_Flag  =   C867     |     Vec_Expl_Timer =   C877 
    Vec_FIRQ_Vecto =   CBF5     |     Vec_Freq_Table =   C84D 
    Vec_High_Score =   CBEB     |     Vec_IRQ_Vector =   CBF8 
    Vec_Joy_1_X    =   C81B     |     Vec_Joy_1_Y    =   C81C 
    Vec_Joy_2_X    =   C81D     |     Vec_Joy_2_Y    =   C81E 
    Vec_Joy_Mux    =   C81F     |     Vec_Joy_Mux_1_ =   C81F 
    Vec_Joy_Mux_1_ =   C820     |     Vec_Joy_Mux_2_ =   C821 
    Vec_Joy_Mux_2_ =   C822     |     Vec_Joy_Resltn =   C81A 
    Vec_Loop_Count =   C825     |     Vec_Max_Games  =   C850 
    Vec_Max_Player =   C84F     |     Vec_Misc_Count =   C823 
    Vec_Music_Chan =   C855     |     Vec_Music_Flag =   C856 
    Vec_Music_Freq =   C861     |     Vec_Music_Ptr  =   C853 
    Vec_Music_Twan =   C858     |     Vec_Music_Wk_1 =   C84B 
    Vec_Music_Wk_5 =   C847     |     Vec_Music_Wk_6 =   C846 
    Vec_Music_Wk_7 =   C845     |     Vec_Music_Wk_A =   C842 
    Vec_Music_Work =   C83F     |     Vec_NMI_Vector =   CBFB 
    Vec_Num_Game   =   C87A     |     Vec_Num_Player =   C879 
    Vec_Pattern    =   C829     |     Vec_Prev_Btns  =   C810 
    Vec_Random_See =   C87D     |     Vec_Rfrsh      =   C83D 
    Vec_Rfrsh_hi   =   C83E     |     Vec_Rfrsh_lo   =   C83D 
    Vec_RiseRun_Le =   C83B     |     Vec_RiseRun_Tm =   C834 
    Vec_Rise_Index =   C839     |     Vec_Run_Index  =   C837 
    Vec_SWI2_Vecto =   CBF2     |     Vec_SWI3_Vecto =   CBF2 
    Vec_SWI_Vector =   CBFB     |     Vec_Seed_Ptr   =   C87B 
    Vec_Snd_Shadow =   C800     |     Vec_Str_Ptr    =   C82C 
    Vec_Text_HW    =   C82A     |     Vec_Text_Heigh =   C82A 
    Vec_Text_Width =   C82B     |     Vec_Twang_Tabl =   C851 
    Wait_Recal     =   F192     |     Warm_Start     =   F06C 
    Xform_Rise     =   F663     |     Xform_Rise_a   =   F661 
    Xform_Run      =   F65D     |     Xform_Run_a    =   F65B 
  2 drawWebAsm         0000 GR  |     music1         =   FD0D 
    music2         =   FD1D     |     music3         =   FD81 
    music4         =   FDD3     |     music5         =   FE38 
    music6         =   FE76     |     music7         =   FEC6 
    music8         =   FEF8     |     music9         =   FF26 
    musica         =   FF44     |     musicb         =   FF62 
    musicc         =   FF7A     |     musicd         =   FF8F 

ASxxxx Assembler V05.00  (Motorola 6809), page 2.
Hexidecimal [16-Bits]

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  613   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

