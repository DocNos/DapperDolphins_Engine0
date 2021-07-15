#include <iostream>
#include "Engine.h"




void Engine::Update()
{
	int currLevel = 0;
	// Executes all active levels in the manager.
	// Make sure to check all states so nothing slips through
	MenuLevels_.executeT
	([](MenuLevelPtr menuLevels)// "Layer"
	{
		if(menuLevels->getState() > objRender)
		{
			menuLevels->FSM();
		}
		menuLevels->checkRenderReady();
			
	}		
	);

	PlayLevels_.executeT
	([](PlayLevelPtr playLevels)
	{
		if (playLevels->getState() > objRender)
		{
			playLevels->FSM();
		}
		playLevels->checkRenderReady();
	}		
	);

	DebugLevels_.executeT
	([](DebugLevelPtr debugLevels)
	{
		if (debugLevels->getState() > objRender)
		{
			debugLevels->FSM();
		}
		debugLevels->checkRenderReady();
	}
	);
	////////////////////////////
	/// RENDER LOOP
	////////////////////////////
	MenuLevels_.executeT
	([](MenuLevelPtr menuLevels)// "Layer"
		{
			menuLevels->Render();
		}
	);

	PlayLevels_.executeT
	([](PlayLevelPtr playLevels)
		{
			playLevels->Render();
		}
	);

	DebugLevels_.executeT
	([](DebugLevelPtr debugLevels)
		{
			debugLevels->Render();
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