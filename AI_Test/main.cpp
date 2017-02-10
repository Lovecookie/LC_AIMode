// AI_Test.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Factory\BaseBehaviorFactory.h"
#include "BehaviorTree\SelectTask.h"


int main()
{	
	rcai::factory::BaseBehaviorFactory<int> behaviorFactory;
	behaviorFactory.StartUp();

	auto firstTask = new rcai::SelectTask<int>();
	behaviorFactory.ApplyHeadTask(firstTask);


	getchar();

	return 0;
}
