#include "MetaphaseState.h"
#include "AnaphaseState.h"


MetaphaseState::MetaphaseState(void)
{
}


MetaphaseState::~MetaphaseState(void)
{
}

void MetaphaseState::GetCurrentState(War* sc)
{
	//中期的具体行为 
	if (sc->GetDays() < 20)
	{
		cout<<"第"<<sc->GetDays()<<"天：战争中期，进入相持阶段，双发各有损耗"<<endl;
	}
	else
	{
		sc->SetState( new AnaphaseState());
		sc->GetState();
	}
}