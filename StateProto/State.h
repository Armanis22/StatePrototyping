#pragma once
#include "BaseObject.h"

class State
{
public:
	virtual			~State() {}

	virtual void	Enter(BaseObject*) = 0;
	virtual void	Execute(BaseObject*) = 0;
	virtual void	Exit(BaseObject*) = 0;
};