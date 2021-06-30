#ifndef ENGINE_H
#define ENGINE_H
#include "main.h"

typedef class Engine
{
public:
	
	Engine() :
	dt_(0.f), prevLevel_(0), nextLevel_(0)
	{
		ButtonPtr* buttons;
		currLevel_ = new MenuLevelObject(4, buttons);
	}

	void Init();
	void Update();
	void Exit();
	

private:

	float dt_;
	LevelObjectPtr currLevel_;
	LevelObjectPtr prevLevel_;
	LevelObjectPtr nextLevel_; 


	
} * EnginePtr;


#endif