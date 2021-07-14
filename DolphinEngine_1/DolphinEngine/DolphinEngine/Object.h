#pragma once



typedef class Obj* ObjPtr;
enum ObjState
{
	objDestroy = -2,
	objInvalid,
	objRender,
	objCheckStatus,
	objExecute,
};

typedef class BaseObject
{
	public:
		BaseObject() : state_(objInvalid), renderReady_(0) {}
		// Remember! The FSM does no rendering, only flags for render!
		virtual void FSM() = 0;
		//virtual void checkStatus() = 0; // pure virtual
		virtual void Render() = 0;
		virtual void Execute() = 0;
		virtual bool checkRenderReady() = 0;

		ObjState getState() { return state_; }
		bool isActive()
		{
			if ((getState() > objInvalid) && (getState() <= objRender))
			{
				return true;
			}
			else
				return false;
		}
		void setState(ObjState state)
		{
			state_ = state;
		}
		void operator++() {	  ++renderReady_;	}


	private:
		ObjState state_;
		int renderReady_;
	
} *BasePtr;







