/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * dbsqlite.h
 * Copyright (C) chaitanya chandel 2010 <cchandel@yahoo.com>
 * 
 * ventura is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * ventura is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#include <sqlite3.h>
#include <Elementary.h>

void save_state(void);
void first_run(void);
void restore_state(void);
void get_bookmark_url(char *temp, char *ty);
void add_bookmark_db(char *temp, char *ty);

sqlite3 *ventura;

extern int rotate, show_images, version, full_screen;
extern char start_page[255], user_agent[255], ventura_dir[255], home_dir[255];

Elm_Genlist_Item_Class itc_gl;
