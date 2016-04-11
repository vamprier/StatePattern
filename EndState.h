#ifndef CONCRETESTATEA_H
#define CONCRETESTATEA_H


#include "state.h"

class EndState : public State
{
public:
	EndState();
	~EndState(void);
public:
	virtual void GetCurrentState(War* sc);
};

#endif