
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
	while (true)
	{
		BTask* tmp_task = this->p_taskStak->FindTaskToDo();
		if (tmp_task != 0)
		{
			tmp_task->Do();
		}
		delete tmp_task;
	}
	return 0;
}
