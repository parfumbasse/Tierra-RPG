#ifndef STATE_TOP_DOWN_RPG_H
#define STATE_TOP_DOWN_RPG_H

#include <gbdk/platform.h>

void topdown_rpg_init(void) BANKED;
void topdown_rpg_update(void) BANKED;

extern UBYTE topdown_rpg_grid;
extern UWORD direction_change_delay;

#endif
