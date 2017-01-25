#pragma once

class Brandon;

class State
{
public:
	virtual			~State() {}

	//just guess what these do to the state
	virtual void	Enter(Brandon*) = 0;
	virtual void	Execute(Brandon*) = 0;
	virtual void	Exit(Brandon*) = 0;
};