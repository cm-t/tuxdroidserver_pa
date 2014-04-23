/* =============== GPL HEADER =====================
 * TuxLogger.h is part of TuxDroidServer
 * Copyleft (C) 2012 Joel Matteotti <joel _DOT_ matteotti _AT_ free _DOT_ fr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA.
 *
 * ====================================================
*/

#ifndef __TUXLOGGER_H__
#define __TUXLOGGER_H__

#include <stdbool.h>


typedef unsigned char TUX_LOG_LEVEL;
typedef enum
{
 TUX_LOG_INFO=0,  
 TUX_LOG_ERROR=1, 
 TUX_LOG_DEBUG=2, 
} TUX_LOG_LEVEL_t;

void TuxLogger_setLevel(TUX_LOG_LEVEL log_level);
void TuxLogger_writeLog(TUX_LOG_LEVEL log_level, const char *fmt, ...);





#endif
