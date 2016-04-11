#include "EndState.h"


EndState::EndState()
{

}


EndState::~EndState(void)
{
}

//结束阶段的具体行为
void EndState::GetCurrentState(War* sc)
{
	cout<<"战争结束"<<endl;
}
