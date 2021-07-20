#pragma once
#include "main.h"
#include "main.h"

 ///////////////
/// PARENT ////
class InterfaceObject: public BaseObject
{


	
} ;
using InterfacePtr = InterfaceObject*;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


  ///////////////////////////////////////////////////////
 /// INPUT                                          //// 
/////////////////////////////////////////////////////// 
class InputInterface: public InterfaceObject
{
	public:
		// "Is getting input" 
		virtual bool isTriggered() = 0;
		void Render() override = 0;
		

	private:



	
};
using InputPtr = InputInterface*;

class ButtonInput: public InputInterface
{
	public:
		ButtonInput() : InputInterface(), buttTransform_(1.f)  {}
		ButtonInput(mtx3 buttTransform) : InputInterface()
		{
			// extrapolate 4 counter-winding edge vectors
		}

		
		// Check cursor position and whether clicked or not
		bool isTriggered() override;
	
		void FSM() override;
		void Execute() override;
		void Render() override;
		// 
	
	private:
		mtx3 buttTransform_; // From center of button. To find edges, consult box.
		std::vector<vec3> buttBox_;
	
};
using ButtonPtr = ButtonInput*;


class CursorInput: public InputInterface
{
	public:
		CursorInput(): InputInterface() {}

		// Check for clicks- Differentiate between which click?
		bool isTriggered() override;
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:

	
};

using CursorPtr = CursorInput*;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


  ///////////////////////////////////////////////////////
 /// OUTPUT                                         //// 
/////////////////////////////////////////////////////// 
class OutputInterface: public InterfaceObject
{



	
};
using OutputPtr = OutputInterface;

class ScoreOutput: public OutputInterface
{
	public:
		ScoreOutput() : OutputInterface() {}
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:

	
	
} ;
using ScorePtr = ScoreOutput*;

class PoolOutput: public OutputInterface
{
	public:

	private:
		float maxNum;
		float currNum;

	
};
using PoolPtr = PoolOutput*;

class HealthPool: public PoolOutput
{
	public:
		HealthPool() : PoolOutput() {}
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:
	
};
using HealthPoolPtr = HealthPool*;


class OxygenPool: public PoolOutput
{
	public:
		OxygenPool() : PoolOutput() {}
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:
	
};
using OxygenPoolPtr = OxygenPool*;

//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\