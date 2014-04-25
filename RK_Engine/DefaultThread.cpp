
#include <iostream>
#include "DefaultThread.h"


DefaultThread::DefaultThread()
{
	std::cout<<"Ouverture Thread"<<std::endl;
}


DefaultThread::~DefaultThread()
{
}


void DefaultThread::SetTaskStackToExploit(TaskStack* t)
{
	this->p_taskStak = t;
}

unsigned int DefaultThread::Run()
{
	return 0;
}
