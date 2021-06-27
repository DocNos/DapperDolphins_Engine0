#pragma once


typedef class Obj* ObjPtr;
enum ObjState
{
	destroyed = -1,
	invalid,
	checkStatus,
	update,
	render
};

typedef class EngineObject
{
	public:
		virtual void FSM() = 0;
		//virtual void checkStatus() = 0; // pure virtual
		virtual void Render() = 0;
		virtual void Execute() = 0;
		ObjState getState() { return state_; }

	private:
		ObjState state_;
	
	
} *EngObjPtr;

typedef class PlayerObject : public EngineObject
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
		case(destroyed):
		{
			// Flag for destruction
		}break;

		case(invalid):
		{
			// Intialize Object
		}break;

		case(checkStatus):
		{
			// see if object needs to change
		}break;


		case(update):
		{

		}break;

		case(render):
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




