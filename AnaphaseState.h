#ifndef CONCRETESTATEB_H
#define CONCRETESTATEB_H


#include "state.h"

class AnaphaseState : public State
{
public:
	AnaphaseState(void);
	~AnaphaseState(void);
public:
	virtual void GetCurrentState(War* sc);
};

#endif