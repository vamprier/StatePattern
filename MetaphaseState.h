#ifndef CONCRETESTATEC_H
#define CONCRETESTATEC_H


#include "state.h"
class MetaphaseState : public State
{
public:
	MetaphaseState(void);
	~MetaphaseState(void);
public:
	virtual void GetCurrentState(War* sc);
};

#endif