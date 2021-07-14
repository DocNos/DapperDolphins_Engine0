#pragma once



typedef class Obj* ObjPtr;
enum ObjState
{
	objDestroyed = -1,
	objInvalid,
	objExecute,
	objCheckStatus,
	objFSM,
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

	private:
		ObjState state_;
		
	
} *BasePtr;







