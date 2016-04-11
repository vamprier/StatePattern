#ifndef CONCRETESTATED_H
#define CONCRETESTATED_H

#include "state.h"

class ProphaseState : public State
{
public:
	ProphaseState(void);
	~ProphaseState(void);
public:
	virtual void GetCurrentState(War* sc);
};

#endif