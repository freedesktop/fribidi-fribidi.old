/* FriBidi - Library of BiDi algorithm
 * Copyright (C) 1999 Dov Grobgeld
 * Copyright (C) 2001 Behdad Esfahbod
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */
#ifndef FRIBIDI_CHAR_SETS_CAP_RTL_H
#define FRIBIDI_CHAR_SETS_CAP_RTL_H

#include "fribidi.h"

#define fribidi_char_set_name_cap_rtl "CapRTL"
#define fribidi_char_set_title_cap_rtl "CapRTL (Test)"
guchar *fribidi_char_set_desc_cap_rtl ();
gboolean fribidi_char_set_enter_cap_rtl (void);
gboolean fribidi_char_set_leave_cap_rtl (void);

FriBidiChar fribidi_cap_rtl_to_unicode_c (guchar ch);
gint fribidi_cap_rtl_to_unicode (guchar * s,
				 /* Output */
				 FriBidiChar * us);
guchar fribidi_unicode_to_cap_rtl_c (FriBidiChar uch);
gint fribidi_unicode_to_cap_rtl (FriBidiChar * us, gint length,
				 /* Output */
				 guchar * s);

#endif /* FRIBIDI_CHAR_SETS_CAP_RTL_H */
