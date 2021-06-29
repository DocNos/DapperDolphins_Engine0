#pragma once
#include "main.h"

// Actors-> Living entities with logic/ control
typedef class ActorObject: public BaseObject
{
public:
	void FSM() override;
	void Execute() override;
	void Render() override;

private:
	// PoolPtr health;
	// TransformPtr Transform
	// PhysicsPtr Physics
	// AnimationPtr Animation  ~ Combine all graphics? 
	// SpritePtr sprite
	
} * ActorPtr;


typedef class EnemyObject : public ActorObject
{
public:
	void AI();
	

private:	

	
} * EnemyPtr;


typedef class PlayerObject : public ActorObject
{
public:

	PlayerObject(std::string name) : name_(name)
	{}
	~PlayerObject()
	{
		// delete out of vector
		for (int i = 0; i <= 0; )
		{
			//
		}

	}
	
	// Templates for add and get (draw, create?)


private:
	std::string name_ = "none_";
	int numCmp = 0; // inc after adding each Cmp

	/*
	Cmp* physics_; // Inherit ? make it a vector
	Cmp* display_;
	Cmp* input_;
	Cmp* transform_;*/

} *PlayerPtr;          // Can call Object as ptr. 


