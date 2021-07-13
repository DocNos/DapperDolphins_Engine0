#ifndef LEVEL_H
#define LEVEL_H

#include "main.h"



////////////////////////////////////////////////////////
////
typedef class LevelObject : public BaseObject
{
	public:
		typedef class MenuLevelObject* MenuLevelPtr;
		typedef class PlayLevelObject* PlayLevelPtr;
		typedef class DebugLevelObject* DebugLevelPtr;
		typedef class LevelObject* LevelObjectPtr;
		


		LevelObject(Manager<MenuLevelPtr> menuLevel)
		{
			
		}
		LevelObject(Manager<PlayLevelPtr> playLevel);
		LevelObject(Manager<DebugLevelPtr> debugLevel);
		
	private:
		//std::string levelId_;

	

} *LevelObjectPtr;



////
////////////////////////////////////////////////////////
////
typedef class MenuLevelObject : public LevelObject
{
	public:
		MenuLevelObject(int numButts);
		void FSM() override;
		void Render() override;
		void Execute() override;

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
		//Manager<PlayerPtr> player_;
		//Manager<EnemyPtr> enemies_;
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