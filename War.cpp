#include "War.h"


War::War(State* s):st(s),days(0)
{
}


War::~War(void)
{
	delete st;
}

int War::GetDays()
{
	return days;
}

void War::SetDays(int d)
{
	days = d;
}

void War::SetState(State* s)
{
	st = s;
}
void War::GetState()
{
	st->GetCurrentState(this);
}
