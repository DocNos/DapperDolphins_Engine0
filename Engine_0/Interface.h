#pragma once
#include "main.h"

 ///////////////
/// PARENT ////
class InterfaceObject : public BaseObject
{



};
using InterfacePtr = InterfaceObject*;

//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


  ///////////////////////////////////////////////////////
 /// INPUT                                          //// 
/////////////////////////////////////////////////////// 
class InputInterface : public InterfaceObject
{
public:





private:




};

using InputPtr = InputInterface*;

class ButtonInput: public InputInterface
{
	public:
		ButtonInput(mtx3 buttTransform);
		bool active()
		{
			return true;
		}
		void FSM() override;
		void Execute() override;
		void Render() override;
		// 
	
	private:
		mtx3 buttTransform;

	
};

// Not a good practice, change later
using ButtonPtr = ButtonInput*;

class CursorInput : public InputInterface
{
public:
	CursorInput();

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
using OutputPtr = OutputInterface*;

class ScoreOutput : public OutputInterface
{
public:

	void FSM() override;
	void Execute() override;
	void Render() override;

private:



};

using ScorePtr = ScoreOutput*;

class PoolOutput : public OutputInterface
{



};
using PoolPtr = PoolOutput*;

class HealthPool : public PoolOutput
{
public:
	HealthPool();

	void FSM() override;
	void Execute() override;
	void Render() override;

private:

};
using HealthPoolPtr = HealthPool*;

class OxygenPool: public PoolOutput
{
	public:
		OxygenPool();
	
		void FSM() override;
		void Execute() override;
		void Render() override;
	
	private:
	
};
using OxygenPoolPtr = OxygenPool*;
//\
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\