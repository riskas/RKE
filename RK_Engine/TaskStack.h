#pragma once

#include <vector>
#include "BTask.h"

class TaskStack
{

public:

	TaskStack();

	~TaskStack();

<<<<<<< HEAD
	void RegisterTask(BTask* t);
=======
	void RegisterTast(BTask* t);
>>>>>>> 5d578941b980be1f627b71b6529f09631c1d7fcd

	BTask* FindTaskToDo();

private:

	std::vector<BTask*> p_taskList;

};

