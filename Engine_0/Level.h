#ifndef LEVEL_H
#define LEVEL_H

#include "main.h"



////////////////////////////////////////////////////////
////
class LevelObject : public BaseObject
{
	public:
		

		LevelObject(Manager<MenuLevelPtr> menuLevel)
		{
			
		}
		LevelObject(Manager<PlayLevelPtr> playLevel);
		LevelObject(Manager<DebugLevelPtr> debugLevel);
		
	private:
		//std::string levelId_;

	

};

using LevelObjectPtr = LevelObject*;



////
////////////////////////////////////////////////////////
////
class MenuLevelObject : public LevelObject
{
	// Forward declaration for cursor/button (Dunno what you gonna do here Jacob)
	class Button;
	class Cursor;

	using ButtonPtr = Button*;
	using CursorPtr = Cursor*;

	public:
		MenuLevelObject(int numButts);
		void FSM() override;
		void Render() override;
		void Execute() override;

	private:
		Manager<ButtonPtr> buttons_;
		CursorPtr cursor_;
		
		

};

using MenuLevelPtr = MenuLevelObject*;

////
/////////////////////////////////////////////////////////
////
class PlayLevelObject : public LevelObject
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

};

using PlayLevelPtr = PlayLevelObject*;

////
///////////////////////////////////////////////////////////
////
class DebugLevelObject : public LevelObject
{
	public:
		void FSM() override;
		void Render() override; 
		void Execute() override;

	private:


};

using DebugLevelPtr = DebugLevelObject*;
////
//////////////////////////////////////////////////////////

#endif