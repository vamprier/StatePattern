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
	//ǰ�ڵľ�����Ϊ 
	if (sc->GetDays() < 10)
	{
		cout<<"��"<<sc->GetDays()<<"�죺ս�����ڣ�˫������������������̽�Է�"<<endl;
	}
	else
	{
		sc->SetState( new MetaphaseState());
		sc->GetState();
	}
}