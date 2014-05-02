
#include "PoolThread.h"


PoolThread::PoolThread(unsigned int nbrThreads)
{

	this->p_taskStack = new TaskStack();
<<<<<<< HEAD
	p_threadNbr = nbrThreads;
	this->p_availableThreads = new DefaultThread[p_threadNbr];
	for (unsigned int i = 0; i < p_threadNbr; i++)
	{
		p_availableThreads[i].SetTaskStackToExploit(this->p_taskStack);
	}
=======
	this->p_availableThreads = new DefaultThread[nbrThreads];

>>>>>>> 5d578941b980be1f627b71b6529f09631c1d7fcd
}


PoolThread::~PoolThread()
{
<<<<<<< HEAD
	delete this->p_taskStack;
	for (unsigned int i = 0; i < p_threadNbr; i++)
	{
		p_availableThreads[i].Release();
	}
	delete[] p_availableThreads;
}

void PoolThread::AddTaskToDo(BTask* t)
{
	this->p_taskStack->RegisterTask(t);
}
=======
}
>>>>>>> 5d578941b980be1f627b71b6529f09631c1d7fcd
