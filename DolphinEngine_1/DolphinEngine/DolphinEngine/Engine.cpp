#include <iostream>
#include "Engine.h"




void Engine::Update()
{
	int currLevel = 0;
	// Executes all active levels in the manager.
	// Make sure to check all states so nothing slips through
	MenuLevels_.executeT
	([](MenuLevelPtr menuLevels)
	{
		switch(menuLevels->getState())
		{			
			case(objDestroyed):   { } break;
			case(objInvalid):     { } break;
			case(objExecute):	  { } break;
			case(objCheckStatus): { } break;
			case(objFSM):		  { } break;
			case(objRender):	  { } break;			
		}					
	}		
	);

	PlayLevels_.executeT
	([](PlayLevelPtr playLevels)
	{
		switch (playLevels->getState())
		{
			case(objDestroyed): { } break;
			case(objInvalid): { } break;
			case(objExecute): { } break;
			case(objCheckStatus): { } break;
			case(objFSM): { } break;
			case(objRender): { } break;
		}
	}		
	);

	DebugLevels_.executeT
	([](DebugLevelPtr debugLevels)
	{
		switch (debugLevels->getState())
		{
			case(objDestroyed): { } break;
			case(objInvalid): { } break;
			case(objExecute): { } break;
			case(objCheckStatus): { } break;
			case(objFSM): { } break;
			case(objRender): { } break;
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