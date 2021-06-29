#include "Level.h"





	//////////////////////////////////////////////////////////////////////////
   //////   MENU                                                        ///// 
  //////////////////////////////////////////////////////////////////////////
void MenuLevelObject::FSM()
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

void MenuLevelObject::Execute()
{
	// Set up all the actors for the scene.
	// Process input for those actors
	// Process interactions between actors and environment
	// once all of these are resolved, flag for render. 
	
}
void MenuLevelObject::Render()
{

	
}


//////////////////////////////////////////////////////////////////////////////


  //////////////////////////////////////////////////////////////////////////
 //////   PLAY                                                        ///// 
//////////////////////////////////////////////////////////////////////////

void PlayLevelObject::FSM()
{
	switch (getState())
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

void PlayLevelObject::Execute()
{
	// Set up all the actors for the scene.
	// Process input for those actors
	// Process interactions between actors and environment
	// once all of these are resolved, flag for render. 

}
void PlayLevelObject::Render()
{


}

/////////////////////////////////////////////////////////////////////////////


  //////////////////////////////////////////////////////////////////////////
 //////   DEBUG                                                       ///// 
//////////////////////////////////////////////////////////////////////////

void DebugLevelObject::FSM()
{
	switch (getState())
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

void DebugLevelObject::Execute()
{
	// Set up all the actors for the scene.
	// Process input for those actors
	// Process interactions between actors and environment
	// once all of these are resolved, flag for render. 

}
void DebugLevelObject::Render()
{


}

/////////////////////////////////////////////////////////////////////////