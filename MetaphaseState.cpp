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
	//���ڵľ�����Ϊ 
	if (sc->GetDays() < 20)
	{
		cout<<"��"<<sc->GetDays()<<"�죺ս�����ڣ�������ֽ׶Σ�˫���������"<<endl;
	}
	else
	{
		sc->SetState( new AnaphaseState());
		sc->GetState();
	}
}