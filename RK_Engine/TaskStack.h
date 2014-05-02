#pragma once

#include <vector>
#include "BTask.h"

class TaskStack
{

public:

	TaskStack();

	~TaskStack();

	void RegisterTask(BTask* t);

	BTask* FindTaskToDo();

private:

	std::vector<BTask*> p_taskList;

};

