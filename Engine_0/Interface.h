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
	public:


	
		void FSM() override;
		void Execute() override;
		void Render() override;

	private:



	
} * InputPtr;

typedef class ButtonInput: public InputInterface
{
	public:
		ButtonInput();
		
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:


	
} * ButtonPtr;

typedef class CursorInput: public InputInterface
{
	public:
		CursorInput();
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:

	
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
	public:
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:

	
	
} * ScorePtr;

typedef class PoolOutput: public OutputInterface
{


	
} * PoolPtr;

typedef class HealthPool: public PoolOutput
{
	public:
		HealthPool();
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:
	
} * HealthPoolPtr;

typedef class OxygenPool: public PoolOutput
{
	public:
		OxygenPool();
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:
	
} * OxygenPoolPtr;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\