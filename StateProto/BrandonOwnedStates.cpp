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
	return nullptr;
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
	return nullptr;
}

void VisitBathroom::Enter(Brandon * brandon)
{
	printf("enter\n");
}

void VisitBathroom::Execute(Brandon * brandon)
{
	printf("execute\n");
}

void VisitBathroom::Exit(Brandon * brandon)
{
	printf("exit\n");
}
