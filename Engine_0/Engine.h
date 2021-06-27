#ifndef ENGINE_H
#define ENGINE_H
#include "main.h"

typedef class Engine
{
public:
	
	Engine()
	{
		
	}
	~Engine(){}

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