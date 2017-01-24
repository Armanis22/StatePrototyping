#pragma once
#include "State.h"

class Brandon;


//in this state brandon enters the living room and starts to code
//while in this state thirst and bladder will go up untill the need to take care of these things arises
//he will then go to the bathroom or the kitchen as needed
class EnterLivingRoomAndCode : public State
{
	EnterLivingRoomAndCode() {};

public:
	//singleton instance
	static EnterLivingRoomAndCode* Instance();

	//pretty self explanatory. why am i even commenting here? it makes no sense
	// its like chewbacca on a planet full of ewoks, it just don't make no sense
	virtual void Enter(Brandon* brandon);
	virtual void Execute(Brandon* brandon);
	virtual void Exit(Brandon* brandon);
};


// in this state brandon will get his ass out of his chair and go get a drink from the kitchen
// adversely the need to pee increases so he might go straight to the bathroom from here

class QuenchThirst : public State
{
	QuenchThirst() {};

public:
	//singleton instance
	static QuenchThirst* Instance();

	virtual void Enter(Brandon* brandon);
	virtual void Execute(Brandon* brandon);
	virtual void Exit(Brandon* brandon);
};

// use the bathroom, take a pee. might take a couple of updates. 
// i know i have had some pisses that take a little while
// specially if beer is involved
class VisitBathroom : public State
{
	VisitBathroom() {};

public:
	//singleton instance
	static VisitBathroom* Instance();

	virtual void Enter(Brandon* brandon);
	virtual void Execute(Brandon* brandon);
	virtual void Exit(Brandon* brandon);
};