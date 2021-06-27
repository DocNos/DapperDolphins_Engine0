#include "Level.h"


// Remember! The FSM does no rendering, only flags for render!
void LevelObject::FSM()
{
	switch(getState())
	{
		case(objDestroyed):
		{


				
		}break;
		case(objInvalid):
		{


				
		}break;
		case(objCheckStatus):
		{



		}break;
		case(objUpdate):
		{
			Execute();
				
		}break;
	default: 
		break;
	}


		
	
}

void LevelObject::Execute()
{
	// Set up all the actors for the scene.
	// Process input for those actors
	// Process interactions between actors and environment
	// once all of these are resolved, flag for render. 
	
}



