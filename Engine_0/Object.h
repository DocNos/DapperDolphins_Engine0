#pragma once



typedef class Obj* ObjPtr;
enum ObjState
{
	objDestroyed = -1,
	objInvalid,
	objCheckStatus,
	objUpdate,
	objRender
};

typedef class BaseObject
{
	public:
		// Remember! The FSM does no rendering, only flags for render!
		virtual void FSM() = 0;
		//virtual void checkStatus() = 0; // pure virtual
		virtual void Render() = 0;
		virtual void Execute() = 0;
		ObjState getState() { return state_; }

	private:
		ObjState state_;
		
	
} *BaseObjPtr;





typedef class PlayerObject : public BaseObject
{
public:
	

	
	PlayerObject(std::string name) : name_(name)
	{}
	~PlayerObject()
	{
		// delete out of vector
		for (int i = 0; i <= 0; )
		{
			//
		}

	}
	void FSM() override
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
	void Execute() override
	{
		

		
	}
	// Templates for add and get (draw, create?)


private:
	std::string name_ = "none_";
	int numCmp = 0; // inc after adding each Cmp
	
	/*
	Cmp* physics_; // Inherit ? make it a vector
	Cmp* display_;
	Cmp* input_;
	Cmp* transform_;*/

} *PlayerObjPtr;          // Can call Object as ptr. 




