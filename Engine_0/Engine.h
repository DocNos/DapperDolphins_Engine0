#ifndef ENGINE_H
#define ENGINE_H
#include "main.h"

typedef class Engine
{
public:
	
	Engine() :
	dt_(0.f)
	{}

	void Init();
	void Update();
	void Exit();
	

private:

	float dt_;
	Manager<LevelObjectPtr> Levels_;
	Manager<MenuLevelPtr> MenuLevels_;
	Manager<PlayLevelPtr> PlayLevels_;
	Manager<DebugLevelPtr> DebugLevels_;
	LevelObjectPtr currentLevel_;


	
} * EnginePtr;


#endif