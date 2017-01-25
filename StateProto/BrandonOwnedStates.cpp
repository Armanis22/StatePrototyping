#include "stdafx.h"
#include "BrandonOwnedStates.h"

EnterLivingRoomAndCode* EnterLivingRoomAndCode::Instance()
{
	static EnterLivingRoomAndCode instance;
	return &instance;
}

void EnterLivingRoomAndCode::Enter(Brandon * brandon)
{
	printf("enter\n");
}

void EnterLivingRoomAndCode::Execute(Brandon * brandon)
{
	printf("execute\n");
}

void EnterLivingRoomAndCode::Exit(Brandon * brandon)
{
	printf("exit\n");
}

QuenchThirst * QuenchThirst::Instance()
{
	static QuenchThirst instance;
	return &instance;
}

void QuenchThirst::Enter(Brandon * brandon)
{
	printf("enter\n");
}

void QuenchThirst::Execute(Brandon * brandon)
{
	printf("execute\n");
}

void QuenchThirst::Exit(Brandon * brandon)
{
	printf("exit\n");
}

VisitBathroom * VisitBathroom::Instance()
{
	static VisitBathroom instance;
	return &instance;
}

void VisitBathroom::Enter(Brandon * brandon)
{
	printf("enter\n");
}

void VisitBathroom::Execute(Brandon * brandon)
{
	printf("pissin\n");
}

void VisitBathroom::Exit(Brandon * brandon)
{
	printf("exit\n");
}
