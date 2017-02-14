#pragma once

#include <vector>
#include <array>
#include "../BehaviorTree/ITaskNode.h"
#include "../BehaviorTree/SelectTask.h"


namespace rcai
{
	namespace factory
	{
		enum EBehaviorNumber : int32_t
		{	
			BEHAVIOR_HEAD = 0,
		};
		
		/*
		*/
		class BehaviorPhase
		{
		public:

			BehaviorPhase();
			~BehaviorPhase();

			bool		StartUp();
			bool		Processing();
			bool		Release();

			int32_t		SetHeadTask(ITaskNode* inTask);
			int32_t		ApplyBehaviorTask(ITaskNode* inTask, int32_t parentTask = EBehaviorNumber::BEHAVIOR_HEAD);
		protected:			
			std::vector<ITaskNode*>		_behaviorTasks;
			int32_t						_nextTaskNumber = 0;
			bool						_isSetHeadNode = false;
		};
	}
}
