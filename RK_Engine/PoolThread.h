#pragma once

#include "TaskStack.h"
#include "DefaultThread.h"

class PoolThread
{
public:

	PoolThread(unsigned int nbrThreads);
	~PoolThread();

<<<<<<< HEAD
	void AddTaskToDo(BTask* t);

private:

	unsigned int p_threadNbr;
=======
private:

>>>>>>> 5d578941b980be1f627b71b6529f09631c1d7fcd
	TaskStack* p_taskStack;
	DefaultThread* p_availableThreads;

};