#pragma once
#include "BThread.h"
#include "TaskStack.h"
class DefaultThread :
	public BThread
{
public:
	DefaultThread();
	~DefaultThread();

	void SetTaskStackToExploit(TaskStack* t);
	unsigned int Run();

private:
	TaskStack* p_taskStak;
};

