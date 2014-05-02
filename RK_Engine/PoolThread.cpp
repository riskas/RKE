
#include "PoolThread.h"


PoolThread::PoolThread(unsigned int nbrThreads)
{

	this->p_taskStack = new TaskStack();
	p_threadNbr = nbrThreads;
	this->p_availableThreads = new DefaultThread[p_threadNbr];
	for (unsigned int i = 0; i < p_threadNbr; i++)
	{
		p_availableThreads[i].SetTaskStackToExploit(this->p_taskStack);
	}
}


PoolThread::~PoolThread()
{
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