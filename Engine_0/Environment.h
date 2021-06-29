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
typedef class EnvPlatform: public EnvironmentObject
{


	
} * EnvPlatformPtr;

typedef class FlatPlatform: public EnvPlatform
{

	
} * FlatPlatPtr;

typedef class CurvedPlatform : public EnvPlatform
{


} *CurvedPlatPtr;

typedef class MovingPlatform : public EnvPlatform
{


} *MovingPlatPtr;
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