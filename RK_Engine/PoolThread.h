#pragma once

#include "TaskStack.h"
#include "DefaultThread.h"

class PoolThread
{
public:

	PoolThread(unsigned int nbrThreads);
	~PoolThread();

	void AddTaskToDo(BTask* t);

private:

	unsigned int p_threadNbr;
	TaskStack* p_taskStack;
	DefaultThread* p_availableThreads;

};