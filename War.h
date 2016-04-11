#ifndef WAR_H
#define WAR_H

#include "State.h"
#include <iostream>

using namespace std;

class State;

class War
{
public:
	War(State* s);
	~War(void);
public:
	int GetDays();
	void SetDays(int d);
	void SetState(State* s);
	void GetState();
private:
	State* st;
	int days;
};

#endif