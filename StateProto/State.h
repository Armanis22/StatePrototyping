#pragma once
#include "BaseObject.h"

class State
{
public:
	virtual			~State() {}

	//just guess what these do to the state
	virtual void	Enter(BaseObject*) = 0;
	virtual void	Execute(BaseObject*) = 0;
	virtual void	Exit(BaseObject*) = 0;
};