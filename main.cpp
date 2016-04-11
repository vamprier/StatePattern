// StatePattern.cpp : 定义控制台应用程序的入口点。
//

#include "War.h"
#include "ProphaseState.h"

int main(int argc, char* argv[])
{
	War* war = new War( new ProphaseState());
	for(int i = 1; i < 40;i += 5)  
	{  
		war->SetDays(i);  
		war->GetState();  
	}  
	delete war; 

	cin.ignore();

	return 0;
}

