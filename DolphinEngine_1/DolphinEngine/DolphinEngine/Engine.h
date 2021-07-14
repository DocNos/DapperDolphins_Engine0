#ifndef ENGINE_H
#define ENGINE_H
#include "main.h"

typedef class Engine
{
public:

	
	
	Engine() :dt_(0.f),
			  MenuLevels_(Manager<MenuLevelPtr>()),   PlayLevels_(Manager<PlayLevelPtr>()),
			  DebugLevels_(Manager<DebugLevelPtr>())  {}
	
	template <typename levelType>
	void newLevel(levelType)
	{
		if(isType(levelType, MenuLevelPtr))
		{
			MenuLevels_.addObj(new levelType);
		}
		if (isType(levelType, PlayLevelPtr))
		{
			PlayLevels_.addObj(new levelType);
		}
		if (isType(levelType, DebugLevelPtr))
		{
			DebugLevels_.addObj(new levelType);
		}
	}
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