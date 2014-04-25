
#include "PoolThread.h"


PoolThread::PoolThread(unsigned int nbrThreads)
{

	this->p_taskStack = new TaskStack();
	this->p_availableThreads = new DefaultThread[nbrThreads];

}


PoolThread::~PoolThread()
{
}
