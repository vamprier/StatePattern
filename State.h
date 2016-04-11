#ifndef STATE_H
#define STATE_H

#include "War.h"

class War;

class State
{
public:
	State(void);
	virtual ~State(void);
public:
	virtual void GetCurrentState(War* sc) = 0;
};

#endif