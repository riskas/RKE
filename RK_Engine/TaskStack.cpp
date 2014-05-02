
#include "TaskStack.h"


TaskStack::TaskStack()
{
<<<<<<< HEAD

=======
>>>>>>> 5d578941b980be1f627b71b6529f09631c1d7fcd
}


TaskStack::~TaskStack()
{
<<<<<<< HEAD

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
=======
>>>>>>> 5d578941b980be1f627b71b6529f09631c1d7fcd
}