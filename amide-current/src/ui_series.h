/* ui_series.h
 *
 * Part of amide - Amide's a Medical Image Dataset Examiner
 * Copyright (C) 2001 Andy Loening
 *
 * Author: Andy Loening <loening@ucla.edu>
 */

/*
  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.
 
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
  02111-1307, USA.
*/

#define UI_SERIES_BORDER 2

/* ui_series data structures */
typedef struct ui_series_t {
  GnomeApp * app; /* pointer to the threshold window for this study */
  amide_volume_list_t ** slices;
  amide_volume_list_t * volumes;
  GnomeCanvas * canvas;
  GnomeCanvasItem ** images;
  GdkImlibImage ** rgb_images;
  guint num_slices, rows, columns;
  realspace_t coord_frame;
  realpoint_t start;
  floatpoint_t thickness;
  volume_time_t time;
  volume_time_t duration;
  interpolation_t interpolation;
  floatpoint_t zoom;
} ui_series_t;

/* external functions */
void ui_series_slices_free(ui_series_t * ui_series);
void ui_series_free(ui_series_t ** pui_series);
ui_series_t * ui_series_init(void);
/* continued in ui_series2.h */




