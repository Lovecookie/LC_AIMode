// AI_Test.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"



int main()
{	
	rcai::factory::BehaviorPhase	behaviorPhase;
	behaviorPhase.StartUp();

	behaviorPhase.SetHeadTask(new rcai::SelectTask<int>());
	
	int leftIndex = behaviorPhase.ApplyBehaviorTask(new rcai::SelectTask<int>(), 0);
	int rightIndex = behaviorPhase.ApplyBehaviorTask(new rcai::SelectTask<int>(), 0);
	
	behaviorPhase.ApplyBehaviorTask(new rcai::SelectTask<int>(), leftIndex);
	behaviorPhase.ApplyBehaviorTask(new rcai::SelectTask<int>(), rightIndex);	

	rcai::factory::BaseBehaviorFactory<int> behaviorFactory;
	behaviorFactory.AttachPhase(rcai::factory::EPhase::PHASE_1, &behaviorPhase);

	behaviorFactory.Processing();

	behaviorFactory.Release();

	getchar();

	return 0;
}
