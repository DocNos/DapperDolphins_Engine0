#include "Actor.h"

void ActorObject::FSM()
{
	switch (getState())
	{
	case(objDestroyed):
	{
		// Flag for destruction
	}break;

	case(objInvalid):
	{
		// Intialize Object
	}break;

	case(objCheckStatus):
	{
		// see if object needs to change
	}break;


	case(objUpdate):
	{

	}break;

	case(objRender):
	{

	}break;

	default: break;

	}
}

void ActorObject::Execute()
{
	
}

void ActorObject::Render()
{


	
}

void EnemyObject::AI()
{



	
}