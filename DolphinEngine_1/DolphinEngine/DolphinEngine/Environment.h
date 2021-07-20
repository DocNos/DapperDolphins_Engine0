#pragma once
#include "main.h"

///////////////
/// PARENT ///
typedef class EnvironmentObject: public BaseObject
{

	
} * EnvPtr;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


  ///////////////////////////////////////////////////////
 /// PLATFORMS                                      //// 
/////////////////////////////////////////////////////// 
class PlatformObject: public EnvironmentObject
{


	
};
using PlatformObjectPtr = PlatformObject*;

class FlatPlatform: public PlatformObject
{

	
};
using FlatPlatformPtr = FlatPlatform*;

class CurvedPlatform : public PlatformObject
{


};
using CurvedPlatformPtr = CurvedPlatform*;

class MovingPlatform : public PlatformObject
{


};
using MovingPlatformPtr = MovingPlatform*;

//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


  ///////////////////////////////////////////////////////
 /// HAZARDS                                        //// 
///////////////////////////////////////////////////////

typedef class EnvHazard: public EnvironmentObject
{

	
} * HazardPtr;

typedef class GunHazard: public EnvHazard
{



	
} * GunPtr;

typedef class SpikeHazard: public EnvHazard
{


	
} * SpikePtr;

//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\