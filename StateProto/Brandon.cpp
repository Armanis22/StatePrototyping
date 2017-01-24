#include "stdafx.h"
#include "Brandon.h"




void Brandon::Update()
{
	//increment the stats!
	IncreaseThirst();
	IncreaseCoding();
	
	//run the state machine
	m_pStateMachine->Update();

}


