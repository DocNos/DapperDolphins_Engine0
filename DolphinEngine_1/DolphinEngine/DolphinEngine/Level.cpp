#include "Level.h"

/// THIS SHOULD ALL BE IO EVENTUALLY \\\\


mtx3* buttPos;

	//////////////////////////////////////////////////////////////////////////
   //////   MENU                                                        ///// 
  //////////////////////////////////////////////////////////////////////////

MenuLevelObject::MenuLevelObject(int numButts): LevelObject()
// Initialize base object with initializer list
{	
	
	for (int i = 0; i < numButts; ++i)
	{
		buttons_.addObj((new ButtonInput()));
	}
	cursor_ = new CursorInput();
}


void MenuLevelObject::FSM()
{
	switch (getState())
	{
		// Object is flagged for destruction
		case(objDestroy):
		{
			
			
		} break; 
		// Initial State
		case(objInvalid):
		{

			
		} break; 
		// check to see if object needs to be updated, if false, stay in checkStatus.  
		case(objCheckStatus):
		{

			
		} break; 
		// if object needs to be updated, update it. 
		case(objExecute):
		{

			
		} break; 
		// Once the object is done updating, flag it for render. Wait until all render flags
		// are up before rendering the scene.
		case(objRender):
		{

			
		} break;
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