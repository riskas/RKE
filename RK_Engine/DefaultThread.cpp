
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
<<<<<<< HEAD
	while (true)
	{
		BTask* tmp_task = this->p_taskStak->FindTaskToDo();
		if (tmp_task != 0)
		{
			tmp_task->Do();
		}
		delete tmp_task;
	}
=======
>>>>>>> 5d578941b980be1f627b71b6529f09631c1d7fcd
	return 0;
}
