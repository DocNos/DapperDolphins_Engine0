#pragma once
#include "main.h"

///////////////
/// PARENT ///
class EnvironmentObject : public BaseObject
{


};
using EnvironmentObjectPtr = EnvironmentObject*;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


  ///////////////////////////////////////////////////////
 /// PLATFORMS                                      //// 
/////////////////////////////////////////////////////// 
class EnvPlatform : public EnvironmentObject
{



};
using EnvPlatformPtr = EnvPlatform*;

class FlatPlatform : public EnvPlatform
{


};
using FlatPlatformPtr = FlatPlatform*;

class CurvedPlatform : public EnvPlatform
{


};
using CurvedPlatformPtr = CurvedPlatform*;

class MovingPlatform : public EnvPlatform
{


};
using MovingPlatformPtr = MovingPlatform*;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


  ///////////////////////////////////////////////////////
 /// HAZARDS                                        //// 
///////////////////////////////////////////////////////

class EnvHazard : public EnvironmentObject
{


};
using EnvHazardPtr = EnvHazard*;

class GunHazard : public EnvHazard
{




};
using GunHazardPtr = GunHazard*;

class SpikeHazard : public EnvHazard
{



};
using SpikeHazardPtr = SpikeHazard*;

//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\