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
	//���ڵľ�����Ϊ 
	if (sc->GetDays() < 30)
	{
		cout<<"��"<<sc->GetDays()<<"�죺ս�����ڣ�˫��ƴ��һ��"<<endl;
	}
	else
	{
		sc->SetState( new EndState());
		sc->GetState();
	}
}