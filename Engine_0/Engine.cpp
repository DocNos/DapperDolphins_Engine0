#include <iostream>
#include "Engine.h"



void Engine::Init()
{
	Levels_ = Manager<LevelObjectPtr>();

	MenuLevels_ = Manager<MenuLevelPtr>();
	MenuLevels_.addObj( new MenuLevelObject(4) );
	currentLevel_ = MenuLevels_.getObj(0);
	currentLevel_->setState(objCheckStatus);

	
}


void Engine::Update()
{
	int currLevel = 0;
	Levels_.executeT
	([](LevelObjectPtr levels)
	{
	
		if(levels->getState() == objUpdate)
		{
			levels->FSM();
		}
	}
	);
	
}

void Engine::Exit()
{



	
}


/*
levels_.executeT // This won't work, want to update all the objects in the level. 
([]
(LevelObjectPtr lvl)
	{



	});*/