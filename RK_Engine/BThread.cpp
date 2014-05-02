
#include "BThread.h"


BThread::BThread()
{
}


BThread::~BThread()
{
}

bool BThread::Init()
{
	return 1;
}

void BThread::Release()
{

}

unsigned int BThread::GetThreadID()
{
	return this->p_threadID;
}

