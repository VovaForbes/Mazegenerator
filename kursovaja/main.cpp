﻿#include "Descriptionofvar.h"
int main()
{
	switcher = 0;
	
	do
	{
		menu_window();
		generate_level();
		game_progress();
	}
	while (switcher == 0);
	
	return 0;
}