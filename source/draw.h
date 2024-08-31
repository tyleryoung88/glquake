/*
Copyright (C) 1996-1997 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

// draw.h -- these are the only functions outside the refresh allowed
// to touch the vid buffer

extern	qpic_t		*draw_disc;	// also used on sbar

void Draw_Init (void);
void Draw_Character (int x, int y, int num);
void Draw_DebugChar (char num);
void Draw_Pic (int x, int y, qpic_t *pic);
void Draw_StretchPic (int x, int y, qpic_t *pic, int x_value, int y_value);
void Draw_ColoredStretchPic (int x, int y, qpic_t *pic, int x_value, int y_value, float r, float g , float b, float a);
void Draw_ColorPic (int x, int y, qpic_t *pic, float r, float g , float b, float a);
void Draw_TransPic (int x, int y, qpic_t *pic);
void Draw_TransPicTranslate (int x, int y, qpic_t *pic, byte *translation);
void Draw_ConsoleBackground (int lines);
void Draw_BeginDisc (void);
void Draw_EndDisc (void);
void Draw_TileClear (int x, int y, int w, int h);
void Draw_Fill (int x, int y, int w, int h, float r, float g, float b, float a);
void Draw_FillByColor (int x, int y, int w, int h, float r, float g, float b, float a);
void Draw_FadeScreen (void);
void Draw_String (int x, int y, char *str);
void Draw_ColoredString(int x, int y, char *text, float r, float g, float b, float a, int scale);
void Draw_ColoredStringCentered(int y, char *text, float r, float g, float b, float a, int scale);
qpic_t *Draw_PicFromWad (char *name);
qpic_t *Draw_CachePic (char *path);
int getTextWidth(char *str, int scale);

extern float loading_cur_step;
extern int loading_step;
extern char loading_name[32];
extern float loading_num_step;
extern int font_kerningamount[96];

void Clear_LoadingFill (void);