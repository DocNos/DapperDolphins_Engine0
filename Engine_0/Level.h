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


	private:
		//std::string levelId_;
		MenuLevelPtr menuLevel_ = 0;
		PlayLevelPtr playLevel_ = 0;
		DebugLevelPtr debugLevel_ = 0;


} *LevelObjectPtr;
////
////////////////////////////////////////////////////////
////
typedef class MenuLevelObject : public LevelObject
{
	public:
		void FSM() override;
		void Render() override;
		void Execute() override;

	private:
		//Manager<InterfacePtr> interface_;
		

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
		Manager<PlayerPtr> player_;
		Manager<EnemyPtr> enemies_;
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