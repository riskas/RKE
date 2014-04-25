#pragma once

#include "TaskStack.h"
#include "DefaultThread.h"

class PoolThread
{
public:

	PoolThread(unsigned int nbrThreads);
	~PoolThread();

private:

	TaskStack* p_taskStack;
	DefaultThread* p_availableThreads;

};