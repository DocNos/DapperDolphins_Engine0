#ifndef LEVEL_H
#define LEVEL_H

#include "main.h"





typedef class LevelObject : public BaseObject
{
public:
	typedef class MenuLevelObject* MenuLevelPtr;
	typedef class PlayLevelObject* PlayLevelPtr;
	typedef class DebugLevelObject* DebugLevelPtr;
	
	LevelObject(std::string id) : levelId_(id)
	{}
	~LevelObject()
	{

	}
	void FSM() override;
	void Render() override; // Render all objects in level
	void Execute() override;
	


private:
	std::string levelId_;
	MenuLevelPtr menuLevel_;
	PlayLevelPtr playLevel_;
	DebugLevelPtr debugLevel_;
	// Actors and environment goes here


} *LevelObjectPtr;

typedef class MenuLevelObject : public LevelObject
{
public:


private:
	Manager<UIPtr> UIManager;
	

} *MenuLevelPtr;


typedef class PlayLevelObject : public LevelObject
{
public:


private:


} *PlayLevelPtr;

typedef class DebugLevelObject : public LevelObject
{
public:


private:


} *DebugLevelPtr;


#endif