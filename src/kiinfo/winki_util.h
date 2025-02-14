/***************************************************************************
Copyright 2017 Hewlett Packard Enterprise Development LP.
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or (at
your option) any later version. This program is distributed in the
hope that it will be useful, but WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE. See the GNU General Public License for more details. You
should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
***************************************************************************/

extern int winki_init_actions(int (*func1)(void *, void*));
extern void winki_enable_event(int id, int (*func1)(void *, void*));
extern int winki_header_func(void *, void *);
extern void winki_update_sched_state(void *, int, int, uint64);
extern short syscall_addr_to_id(uint64);
extern int dpc_addr_to_idx(uint64);
