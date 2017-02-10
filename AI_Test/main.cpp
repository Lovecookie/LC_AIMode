// AI_Test.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
