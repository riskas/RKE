
#include "TaskStack.h"


TaskStack::TaskStack()
{

}


TaskStack::~TaskStack()
{
}

void TaskStack::RegisterTask(BTask* t)
{
	this->p_taskList.push_back(t);
}


BTask* TaskStack::FindTaskToDo()
{
	if (p_taskList.size() > 0)
	{
		BTask* tmpTpr = p_taskList[0];
		this->p_taskList.erase(p_taskList.begin());
		return tmpTpr;
	}
	return 0;
}