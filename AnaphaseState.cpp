#include "AnaphaseState.h"
#include "EndState.h"


AnaphaseState::AnaphaseState(void)
{
}


AnaphaseState::~AnaphaseState(void)
{
}

void AnaphaseState::GetCurrentState(War* sc)
{
	//后期的具体行为 
	if (sc->GetDays() < 30)
	{
		cout<<"第"<<sc->GetDays()<<"天：战争后期，双方拼死一搏"<<endl;
	}
	else
	{
		sc->SetState( new EndState());
		sc->GetState();
	}
}