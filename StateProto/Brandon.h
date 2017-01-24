#pragma once

#include "BaseObject.h"
#include "Locations.h"
#include "StateMachine.h"
#include "Consts.h"

class Brandon :
	public BaseObject
{ 
public:
	Brandon() :
		m_location(LIVINGROOM),
		m_thirst(0),
		m_bladder(0),
		m_coding(0)
	{

	}

	//update method called everyframe to call the current state and its execute method
	void Update();

	//getters and setters along with incrementers for bladder and thirst
	int			GetBladder() { return m_bladder; }
	void		IncreaseBladder() { m_bladder++; }
	bool		BladderFull() { return m_bladder >= MaxBladder; }

	int			GetThirst() { return m_thirst; }
	void		IncreaseThirst() { m_thirst++; }
	bool		NeedDrink() { return m_thirst >= MaxThirst; }
	void		EnterKitchenAndDrink() { m_thirst = 0; m_bladder += 3; }

	int			GetCodingDone() { return m_coding; }
	void		IncreaseCoding() { m_coding++; }

	Location	GetLocation() { return m_location; }
	void		SetLocation(Location newLocation) { m_location = newLocation; }

	StateMachine* GetFSM() { return m_pStateMachine; }

	~Brandon() { delete m_pStateMachine; }

private:

	//internal variables for Brandons current levels of bladder, thirst, and coding completed
	//the higher the values the more the need for drink or bladder. coding is just a measure of work done while 
	//in the livingroom
	Location	m_location;
	int			m_bladder;
	int			m_thirst;
	int			m_coding;
	StateMachine* m_pStateMachine;

};

