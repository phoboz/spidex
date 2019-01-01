// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char web[]=
{	(signed char) +1, +18, +90, // sync and move to y, x
	(signed char) -1, -14, -75, // draw, y, x
	(signed char) +0, -8, +0, // mode, y, x
	(signed char) -1, -14, +75, // draw, y, x
	(signed char) +0, -94, -23, // mode, y, x
	(signed char) -1, +102, -63, // draw, y, x
	(signed char) +0, +0, -8, // mode, y, x
	(signed char) -1, -104, -63, // draw, y, x
	(signed char) +0, +96, -23, // mode, y, x
	(signed char) -1, +36, +0, // draw, y, x
	(signed char) +0, -14, +75, // mode, y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) +0, +40, +35, // mode, y, x
	(signed char) +1, +36, +20, // sync and move to y, x
	(signed char) -1, +0, -40, // draw, y, x
	(signed char) -1, -28, -16, // draw, y, x
	(signed char) -1, -16, +0, // draw, y, x
	(signed char) -1, -28, +16, // draw, y, x
	(signed char) -1, +0, +40, // draw, y, x
	(signed char) -1, +28, +17, // draw, y, x
	(signed char) -1, +16, +0, // draw, y, x
	(signed char) -1, +28, -17, // draw, y, x
	(signed char) +0, +27, +16, // mode, y, x
	(signed char) -1, +0, -73, // draw, y, x
	(signed char) -1, -51, -23, // draw, y, x
	(signed char) -1, -24, +0, // draw, y, x
	(signed char) +1, -12, -60, // sync and move to y, x
	(signed char) -1, -51, +24, // draw, y, x
	(signed char) -1, +0, +73, // draw, y, x
	(signed char) -1, +50, +26, // draw, y, x
	(signed char) -1, +26, +0, // draw, y, x
	(signed char) -1, +50, -27, // draw, y, x
	(signed char) +0, +46, +28, // mode, y, x
	(signed char) -1, -99, -60, // draw, y, x
	(signed char) +0, +0, -8, // mode, y, x
	(signed char) -1, +0, +8, // draw, y, x
	(signed char) -1, -6, +11, // draw, y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) -1, -6, -11, // draw, y, x
	(signed char) +1, -10, +4, // sync and move to y, x
	(signed char) -1, +0, -8, // draw, y, x
	(signed char) -1, +6, -11, // draw, y, x
	(signed char) -1, -14, -75, // draw, y, x
	(signed char) -1, -72, +38, // draw, y, x
	(signed char) -1, +0, +105, // draw, y, x
	(signed char) -1, +72, +37, // draw, y, x
	(signed char) -1, +36, +0, // draw, y, x
	(signed char) -1, +72, -38, // draw, y, x
	(signed char) -1, +0, -105, // draw, y, x
	(signed char) -1, -72, -37, // draw, y, x
	(signed char) -1, -14, +75, // draw, y, x
	(signed char) -1, +6, +11, // draw, y, x
	(signed char) -1, +102, -63, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char web_wall_1_1[]=
{	+1,
	-10, +4, // move to y, x
	+0, -8, // draw to y, x
};

const signed char web_wall_1_2[]=
{	+1,
	-4, +15, // move to y, x
	-6, -11, // draw to y, x
};

const signed char web_wall_1_3[]=
{	+1,
	+4, +15, // move to y, x
	-8, +0, // draw to y, x
};

const signed char web_wall_1_4[]=
{	+1,
	+10, +4, // move to y, x
	-6, +11, // draw to y, x
};

const signed char web_wall_1_5[]=
{	+1,
	+10, -4, // move to y, x
	+0, +8, // draw to y, x
};

const signed char web_wall_1_6[]=
{	+1,
	+4, -15, // move to y, x
	+6, +11, // draw to y, x
};

const signed char web_wall_1_7[]=
{	+1,
	-4, -15, // move to y, x
	+8, +0, // draw to y, x
};

const signed char web_wall_1_8[]=
{	+1,
	-10, -4, // move to y, x
	+6, -11, // draw to y, x
};

const signed char web_wall_2_1[]=
{	+1,
	-36, -20, // move to y, x
	+0, +40, // draw to y, x
};

const signed char web_wall_2_2[]=
{	+1,
	-36, +20, // move to y, x
	+28, +16, // draw to y, x
};

const signed char web_wall_2_3[]=
{	+1,
	-8, +37, // move to y, x
	+16, +0, // draw to y, x
};

const signed char web_wall_2_4[]=
{	+1,
	+8, +37, // move to y, x
	+28, -17, // draw to y, x
};

const signed char web_wall_2_5[]=
{	+1,
	+36, +20, // move to y, x
	+0, -40, // draw to y, x
};

const signed char web_wall_2_6[]=
{	+1,
	+36, -20, // move to y, x
	-28, -16, // draw to y, x
};

const signed char web_wall_2_7[]=
{	+1,
	+8, -36, // move to y, x
	-16, +0, // draw to y, x
};

const signed char web_wall_2_8[]=
{	+1,
	-8, -36, // move to y, x
	-28, +16, // draw to y, x
};

const signed char web_wall_3_1[]=
{	+1,
	-63, -36, // move to y, x
	+0, +73, // draw to y, x
};

const signed char web_wall_3_2[]=
{	+1,
	-63, +37, // move to y, x
	+50, +26, // draw to y, x
};

const signed char web_wall_3_3[]=
{	+1,
	-13, +63, // move to y, x
	+26, +0, // draw to y, x
};

const signed char web_wall_3_4[]=
{	+1,
	+13, +63, // move to y, x
	+50, -27, // draw to y, x
};

const signed char web_wall_3_5[]=
{	+1,
	+63, +36, // move to y, x
	+0, -73, // draw to y, x
};

const signed char web_wall_3_6[]=
{	+1,
	+63, -37, // move to y, x
	-51, -23, // draw to y, x
};

const signed char web_wall_3_7[]=
{	+1,
	+12, -60, // move to y, x
	-24, +0, // draw to y, x
};

const signed char web_wall_3_8[]=
{	+1,
	-12, -60, // move to y, x
	-51, +24, // draw to y, x
};

const signed char web_wall_4_1[]=
{	+1,
	-90, -52, // move to y, x
	+0, +105, // draw to y, x
};

const signed char web_wall_4_2[]=
{	+1,
	-90, +53, // move to y, x
	+72, +37, // draw to y, x
};

//-90, 53
//-18, 90
const signed char web_wall_coords_4_2[]=
{
	-90	,	53	,
	-89	,	54	,
	-87	,	55	,
	-85	,	56	,
	-83	,	57	,
	-81	,	58	,
	-79	,	59	,
	-77	,	60	,
	-75	,	61	,
	-73	,	62	,
	-71	,	63	,
	-69	,	64	,
	-67	,	65	,
	-65	,	66	,
	-63	,	67	,
	-61	,	68	,
	-59	,	69	,
	-57	,	70	,
	-55	,	71	,
	-54	,	72	,
	-52	,	73	,
	-50	,	74	,
	-48	,	75	,
	-46	,	76	,
	-44	,	77	,
	-42	,	78	,
	-40	,	79	,
	-38	,	80	,
	-36	,	81	,
	-34	,	82	,
	-32	,	83	,
	-30	,	84	,
	-28	,	85	,
	-26	,	86	,
	-24	,	87	,
	-22	,	88	,
	-20	,	89	,
	-18	,	90	,
	127	/* terminator */
};

const signed char web_wall_4_3[]=
{	+1,
	-18, +90, // move to y, x
	+36, +0, // draw to y, x
};

const signed char web_wall_4_4[]=
{	+1,
	+18, +90, // move to y, x
	+72, -37, // draw to y, x
};

// 18, 90
// 90, 53
const signed char web_wall_coords_4_4[]=
{
	90	,	53	,
	89	,	54	,
	87	,	55	,
	85	,	56	,
	83	,	57	,
	81	,	58	,
	79	,	59	,
	77	,	60	,
	75	,	61	,
	73	,	62	,
	71	,	63	,
	69	,	64	,
	67	,	65	,
	65	,	66	,
	63	,	67	,
	61	,	68	,
	59	,	69	,
	57	,	70	,
	55	,	71	,
	54	,	72	,
	52	,	73	,
	50	,	74	,
	48	,	75	,
	46	,	76	,
	44	,	77	,
	42	,	78	,
	40	,	79	,
	38	,	80	,
	36	,	81	,
	34	,	82	,
	32	,	83	,
	30	,	84	,
	28	,	85	,
	26	,	86	,
	24	,	87	,
	22	,	88	,
	20	,	89	,
	18	,	90	,
	127	/* terminator */
};

const signed char web_wall_4_5[]=
{	+1,
	+90, +53, // move to y, x
	+0, -106, // draw to y, x
};

const signed char web_wall_4_6[]=
{	+1,
	+90, -53, // move to y, x
	-72, -37, // draw to y, x
};

// 90, -53
// 18, -90
const signed char web_wall_coords_4_6[]=
{
	18	,	-90	,
	20	,	-89	,
	22	,	-88	,
	24	,	-87	,
	26	,	-86	,
	28	,	-85	,
	30	,	-84	,
	32	,	-83	,
	34	,	-82	,
	36	,	-81	,
	38	,	-80	,
	40	,	-79	,
	42	,	-78	,
	44	,	-77	,
	46	,	-76	,
	48	,	-75	,
	50	,	-74	,
	52	,	-73	,
	54	,	-72	,
	55	,	-71	,
	57	,	-70	,
	59	,	-69	,
	61	,	-68	,
	63	,	-67	,
	65	,	-66	,
	67	,	-65	,
	69	,	-64	,
	71	,	-63	,
	73	,	-62	,
	75	,	-61	,
	77	,	-60	,
	79	,	-59	,
	81	,	-58	,
	83	,	-57	,
	85	,	-56	,
	87	,	-55	,
	89	,	-54	,
	90	,	-53	,
	127	/* terminator */
};

const signed char web_wall_4_7[]=
{	+1,
	+18, -90, // move to y, x
	-36, +0, // draw to y, x
};

const signed char web_wall_4_8[]=
{	+1,
	-18, -90, // move to y, x
	-72, +38, // draw to y, x
};

// -18, -90
// -90, -52
const signed char web_wall_coords_4_8[]=
{
	-18	,	-90	,
	-19	,	-89	,
	-21	,	-88	,
	-23	,	-87	,
	-25	,	-86	,
	-27	,	-85	,
	-29	,	-84	,
	-31	,	-83	,
	-33	,	-82	,
	-35	,	-81	,
	-36	,	-80	,
	-38	,	-79	,
	-40	,	-78	,
	-42	,	-77	,
	-44	,	-76	,
	-46	,	-75	,
	-48	,	-74	,
	-50	,	-73	,
	-52	,	-72	,
	-54	,	-71	,
	-55	,	-70	,
	-57	,	-69	,
	-59	,	-68	,
	-61	,	-67	,
	-63	,	-66	,
	-65	,	-65	,
	-67	,	-64	,
	-69	,	-63	,
	-71	,	-62	,
	-72	,	-61	,
	-74	,	-60	,
	-76	,	-59	,
	-78	,	-58	,
	-80	,	-57	,
	-82	,	-56	,
	-84	,	-55	,
	-86	,	-54	,
	-88	,	-53	,
	-90	,	-52	,
	127	/* terminator */
};

const signed char *web_walls[]=
{
	web_wall_1_1,
	web_wall_1_2,
	web_wall_1_3,
	web_wall_1_4,
	web_wall_1_5,
	web_wall_1_6,
	web_wall_1_7,
	web_wall_1_8,
	web_wall_2_1,
	web_wall_2_2,
	web_wall_2_3,
	web_wall_2_4,
	web_wall_2_5,
	web_wall_2_6,
	web_wall_2_7,
	web_wall_2_8,
	web_wall_3_1,
	web_wall_3_2,
	web_wall_3_3,
	web_wall_3_4,
	web_wall_3_5,
	web_wall_3_6,
	web_wall_3_7,
	web_wall_3_8,
	web_wall_4_1,
	web_wall_4_2,
	web_wall_4_3,
	web_wall_4_4,
	web_wall_4_5,
	web_wall_4_6,
	web_wall_4_7,
	web_wall_4_8
};

const signed char *web_wall_coords[]=
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	web_wall_coords_4_2,
	0,
	web_wall_coords_4_4,
	0,
	web_wall_coords_4_6,
	0,
	web_wall_coords_4_8
};

// ***************************************************************************
// end of file
// ***************************************************************************
