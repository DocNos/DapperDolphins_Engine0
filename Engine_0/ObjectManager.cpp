

#include "main.h"



void ManagerUpdate(float dt)
{
	static int renderReady = 0;
	float frameRateSec = 45.f, timer = 0.f;
	Manager<BaseObjPtr> objList;
	timer += dt;
	// Wait until all objects are in render state, then render all at once.
	
	while(true)
	{
		
		while(true)
		{
			renderReady = 0;
			objList.executeT
			([](BaseObjPtr obj)
			{				
				if (obj->getState() != objRender)
				{
					obj->FSM();					
				}
				if (obj->getState() == objRender)
				{
					++renderReady;
				}
			}
			);

			if (renderReady == objList.sizeT())
				break;
			
		}
		objList.executeT
		([](BaseObjPtr obj)	// Render Loop						
		{
			obj->Render();
			
		} 
		);
		
	}
	



}

// Lambda Function, every object					
//in list
// uses template from Manager Class
// include typeinfo specific playerstuff
// No need to have a group/ objType enum
 // Use typeinfo, separate inheritedclasses
// for each object type. 

	
	/*
	objList.execute
	([](EngObjPtr obj) // Lambda Function, every object in list
	{							  // uses template from Manager Class
		if(isType(obj, PlayerObjPtr)) // include typeinfo specific player stuff
		{							  // No need to have a group/ objType enum
			// Player				  // Use typeinfo, separate inherited classes
									  // for each object type. 
		}
		obj->Update();
	}
	objList.render
	([] (EngObjPtr obj)
	{
		
	}
	);*

	if (isType(obj, PlayerObjPtr))
	{
		// Player

	}

/*
 * reserve space for Cmps that need to be accessed very fast (Graphics)
 * custom Cmp, be able to add on to end.
 * "Boilerplate" object, then build from there

for(int i = 0; i < objList.size(); ++i)
{
	obj[i]->update();
}

for (ObjPtr obj : objList) // "for each" is faster
{
	obj->update();
}
*/