#pragma once

class BThread
{

public:

	BThread();
	virtual ~BThread();

	bool Init();
	void Release();

	virtual unsigned int Run() = 0;
	unsigned int GetThreadID();

private:

	unsigned int p_threadID;
	void * p_hThread;

};

