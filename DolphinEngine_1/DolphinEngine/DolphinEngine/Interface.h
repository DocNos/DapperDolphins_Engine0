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
		// "Is getting input" 
		virtual bool isTriggered() = 0;
	
		

	private:



	
} * InputPtr;

typedef class ButtonInput: public InputInterface
{
	public:
		ButtonInput() : InputInterface(), buttTransform(1.f)  {}
		ButtonInput(mtx3 buttTransform) : InputInterface() {}

		// Check cursor position and whether clicked or not
		bool isTriggered() override;
	
		void FSM() override;
		void Execute() override;
		void Render() override;
		// 
	
	private:
		mtx3 buttTransform;

	
} * ButtonPtr;

typedef class CursorInput: public InputInterface
{
	public:
		CursorInput(): InputInterface() {}

		// Check for clicks- Differentiate between which click?
		bool isTriggered() override;
	
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
		ScoreOutput() : OutputInterface() {}
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:

	
	
} * ScorePtr;

typedef class PoolOutput: public OutputInterface
{
	public:

	private:
		float maxNum;
		float currNum;

	
} * PoolPtr;

typedef class HealthPool: public PoolOutput
{
	public:
		HealthPool() : PoolOutput() {}
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:
	
} * HealthPoolPtr;

typedef class OxygenPool: public PoolOutput
{
	public:
		OxygenPool() : PoolOutput() {}
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:
	
} * OxygenPoolPtr;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\