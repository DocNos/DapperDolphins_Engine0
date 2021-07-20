#pragma once
#include "main.h"

// Actors-> Living entities with logic/ control
class ActorObject: public BaseObject
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
	
};
using ActorObjectPtr = ActorObject*;

class EnemyActor : public ActorObject
{
public:
	void AI();
	

private:	

	
};
using EnemyActorPtr = EnemyActor*;

typedef class PlayerActor : public ActorObject
{
public:

	PlayerActor(std::string name) : name_(name)
	{}
	~PlayerActor()
	{
		// delete out of vector
		for (int i = 0; i <= 0; )
		{
			//pop back
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

} ;          // Can call Object as ptr. 
using PlayerActorPtr = PlayerActor*;

