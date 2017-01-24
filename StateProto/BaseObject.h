#pragma once

class BaseObject
{
public:
	// all objects must overload
	virtual void Update() = 0;
	virtual ~BaseObject() {}
};