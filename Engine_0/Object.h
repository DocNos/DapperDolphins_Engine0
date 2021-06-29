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
		
	
} *BasePtr;







