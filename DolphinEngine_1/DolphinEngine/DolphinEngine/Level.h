#ifndef LEVEL_H
#define LEVEL_H

#include "main.h"



////////////////////////////////////////////////////////
////
class LevelObject : public BaseObject
{
	public:
		typedef class MenuLevelObject* MenuLevelPtr;
		typedef class PlayLevelObject* PlayLevelPtr;
		typedef class DebugLevelObject* DebugLevelPtr;
		typedef class LevelObject* LevelObjectPtr;
		
		// Base level ctor allocates space for all types of levels. (They are vectors)
		
		
		
		
	private:
		

	

};

using LevelObjectPtr = LevelObject*;



////
////////////////////////////////////////////////////////
////
typedef class MenuLevelObject : public LevelObject
{
	public:
		MenuLevelObject(int numButts) : LevelObject() {}
		/*
		bool checkRenderReady() override
		{
			BasePtr base = this;
			if(base->getState() > objRender)
			{
				
			}
		}*/
		void Execute() override;
		void FSM() override;
		void Render() override;
		

	private:
		Manager<ButtonPtr> buttons_;
		CursorPtr cursor_;
		
		

} *MenuLevelPtr;
////
/////////////////////////////////////////////////////////
////
typedef class PlayLevelObject : public LevelObject
{
	public:
		void FSM() override;
		void Render() override; 
		void Execute() override;

	private:
		// Manager<PlayerPtr> player_;
		// Manager<EnemyPtr> enemies_;
		// Manager<EnvironmentPtr> environment_;
		// Manager<InterfacePtr> interface_;
		// Manager<ItemPtr> items_;

} *PlayLevelPtr;
////
///////////////////////////////////////////////////////////
////
typedef class DebugLevelObject : public LevelObject
{
	public:
		void FSM() override;
		void Render() override; 
		void Execute() override;

	private:


} *DebugLevelPtr;
////
//////////////////////////////////////////////////////////

#endif