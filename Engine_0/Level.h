#ifndef LEVEL_H
#define LEVEL_H

#include "main.h"




typedef class LevelObject : public BaseObject
{
public:
	LevelObject()
	{

	}
	~LevelObject()
	{

	}
	void FSM() override;
	void Render() override; // Render all objects in level
	void Execute() override;



} *LevelObjectPtr;

#endif