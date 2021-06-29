#pragma once
#include "main.h"

 ///////////////
/// PARENT ////
typedef class InterfaceObject: public BaseObject
{


	
} * InterfacePtr;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


  ///////////////////////////////////////////////////////
 /// INPUT                                          //// 
/////////////////////////////////////////////////////// 
typedef class InputInterface: public InterfaceObject
{


	
} * InputPtr;

typedef class ButtonInput: public InputInterface
{

	
} * ButtonPtr;

typedef class CursorInput: public InputInterface
{


	
} * CursorPtr;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


  ///////////////////////////////////////////////////////
 /// OUTPUT                                         //// 
/////////////////////////////////////////////////////// 
typedef class OutputInterface: public InterfaceObject
{



	
} * OutputPtr;

typedef class ScoreOutput: public OutputInterface
{

	
} * ScorePtr;

typedef class PoolOutput: public OutputInterface
{

	
} * PoolPtr;

typedef class HealthPool: public PoolOutput
{

	
} * HealthPoolPtr;

typedef class OxygenPool: public PoolOutput
{

	
} * OxygenPoolPtr;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\