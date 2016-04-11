#include "ProphaseState.h"
#include "MetaphaseState.h"


ProphaseState::ProphaseState(void)
{
}


ProphaseState::~ProphaseState(void)
{
}

void ProphaseState::GetCurrentState(War* sc)
{
	//前期的具体行为 
	if (sc->GetDays() < 10)
	{
		cout<<"第"<<sc->GetDays()<<"天：战争初期，双方你来我往，互相试探对方"<<endl;
	}
	else
	{
		sc->SetState( new MetaphaseState());
		sc->GetState();
	}
}