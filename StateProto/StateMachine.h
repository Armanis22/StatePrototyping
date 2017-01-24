#pragma once

#include "State.h"

class BaseObject;

class StateMachine
{
	//set owner of the instantiated state machine
	BaseObject* m_pOwner;
	//set current state
	State* m_pCurrentState;
	// hold a pointer to the last state for a psuedo-stack
	State* m_pPreviousState;
	
	//call this to update FSM i.e call current states execute
	void Update() const
	{
		//if current state exits, call its execute
		if (m_pCurrentState) { m_pCurrentState->Execute(m_pOwner); }
	}



	//change states: remember current state as previous, call exit of current state, set new state, call enter of current state
	void ChangeState(State* pNewState)
	{
		//keep record
		m_pPreviousState = m_pCurrentState;
		//call exit
		m_pCurrentState->Exit(m_pOwner);
		//set new state
		m_pCurrentState = pNewState;
		//enter new state
		m_pCurrentState->Enter(m_pOwner);
	}

};