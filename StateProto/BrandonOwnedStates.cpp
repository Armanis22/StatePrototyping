#include "stdafx.h"
#include "BrandonOwnedStates.h"
#include "Brandon.h"

EnterLivingRoomAndCode* EnterLivingRoomAndCode::Instance()
{
	static EnterLivingRoomAndCode instance;
	return &instance;
}

void EnterLivingRoomAndCode::Enter(Brandon * brandon)
{
	if (!brandon->GetLocation() != LIVINGROOM)
	{
		printf("Brandon: This code isnt going to write itself\n");
		brandon->SetLocation(LIVINGROOM);
	}
}

void EnterLivingRoomAndCode::Execute(Brandon * brandon)
{
	brandon->IncreaseCoding();
	brandon->IncreaseThirst();
	
	printf("Brandon: code... code... fucking error!!!... fixed!... code\n");
	

	if (brandon->NeedDrink())
	{
		brandon->GetFSM()->ChangeState(QuenchThirst::Instance());
	}

}

void EnterLivingRoomAndCode::Exit(Brandon * brandon)
{
	printf("Brandon: gotta take a short break\n");
}

QuenchThirst * QuenchThirst::Instance()
{
	static QuenchThirst instance;
	return &instance;
}

void QuenchThirst::Enter(Brandon * brandon)
{
	if (!brandon->GetLocation() != KITCHEN)
	{
		printf("Brandon: Natty Daddy time!\n");
		brandon->SetLocation(KITCHEN);
	}
}

void QuenchThirst::Execute(Brandon * brandon)
{
	brandon->EnterKitchenAndDrink();
	printf("Brandon: glug... glug... glug...\n");
	if (brandon->BladderFull())
	{
		brandon->GetFSM()->ChangeState(VisitBathroom::Instance());
	}
	else if (brandon->GetThirst() == 0)
	{
		brandon->GetFSM()->ChangeState(EnterLivingRoomAndCode::Instance());
	}
}

void QuenchThirst::Exit(Brandon * brandon)
{
	printf("Brandon: mmmmmmmmm beeer\n");
}

VisitBathroom * VisitBathroom::Instance()
{
	static VisitBathroom instance;
	return &instance;
}

void VisitBathroom::Enter(Brandon * brandon)
{
	if (brandon->GetLocation() != BATHROOM)
	{
		printf("Brandon: man I gotta piss...\n");
		brandon->SetLocation(BATHROOM);
	}
}

void VisitBathroom::Execute(Brandon * brandon)
{
	if (brandon->BladderFull())
	{
		printf("Brandon: AHHH relief.\n");
		brandon->EmptyBladder();
		brandon->GetFSM()->ChangeState(EnterLivingRoomAndCode::Instance());
	}
}

void VisitBathroom::Exit(Brandon * brandon)
{
	printf("Brandon: Time to get back to work!\n");
}
