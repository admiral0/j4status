/*
 * j4status - Status line generator
 *
 * Copyright © 2012 Quentin "Sardem FF7" Glidic
 *
 * This file is part of j4status.
 *
 * j4status is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * j4status is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with j4status. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __J4STATUS_J4STATUS_PLUGIN_H__
#define __J4STATUS_J4STATUS_PLUGIN_H__

typedef enum {
    J4STATUS_STATE_UNAVAILABLE = -1,
    J4STATUS_STATE_UNKNOWN = 0,
    J4STATUS_STATE_BAD,
    J4STATUS_STATE_AVERAGE,
    J4STATUS_STATE_GOOD,
    J4STATUS_STATE_URGENT
} J4statusState;

typedef struct {
    const gchar *name;
    gchar *instance;
    gchar *label;
    gchar *value;
    J4statusState state;

    gboolean dirty;
    /*
     * cache for the output plugin
     * refreshed when dirty is set to TRUE
     */
    gchar *line_cache;
} J4statusSection;

#endif /* __J4STATUS_J4STATUS_PLUGIN_H__ */