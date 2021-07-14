#ifndef ENGINE_H
#define ENGINE_H
#include "main.h"

typedef class Engine
{
public:

	
	
	Engine() :dt_(0.f),
			  MenuLevels_(Manager<MenuLevelPtr>()),   PlayLevels_(Manager<PlayLevelPtr>()),
			  DebugLevels_(Manager<DebugLevelPtr>())  {}
	

	//void Init();
	void Update();
	void Exit();
	

private:

	float dt_;
	Manager<MenuLevelPtr> MenuLevels_;
	Manager<PlayLevelPtr> PlayLevels_;
	Manager<DebugLevelPtr> DebugLevels_;
	


	
} * EnginePtr;


#endif