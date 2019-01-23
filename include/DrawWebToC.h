#pragma once

#include <vectrex.h>

#define __ass	asm volatile

#define __DO_WEB   drawWebAsm

#define __ass	asm volatile

#define asm_drawWebAsm() __MC6809_jsr_drawWebAsm(__DO_WEB, DO_WEB)
#define __MC6809_jsr_drawWebAsm(args...)	__mc6809_jsr_drawWebAsm(args)



#define __mc6809_jsr_drawWebAsm(func, name, regs...) { \
	__ass( \
		"jsr " #func "; " #name "\n\t" \
		:: \
		: "s", "memory", "cc","a","b","d","dp","u"); \
}


__INLINE void drawWeb() \
  {asm_drawWebAsm(); } 




