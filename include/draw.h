#ifndef _DRAW_H
#define _DRAW_H

void reset0ref(void);

void moveto(
	signed int y,
	signed int x
	);

void draw_vlist_c(
	const signed char *vList
	);

void draw_synced_list_c(
	const signed char *u,
	signed int y,
	signed int x,
	unsigned int scaleMove,
	unsigned int scaleList
	);

void draw_synced_list_c_nm(
	const signed char *u,
	unsigned int scaleList
	);

void draw_synced_list_c_nm1(
	const signed char *u,
	unsigned int scaleMove,
	unsigned int scaleList
	);

#endif

