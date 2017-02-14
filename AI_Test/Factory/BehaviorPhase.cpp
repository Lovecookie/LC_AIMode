#include "stdafx.h"
#include "BehaviorPhase.h" 



namespace rcai
{
	namespace factory
	{
		/*
		*/
		BehaviorPhase::BehaviorPhase()
		{
		}

		/*
		*/
		BehaviorPhase::~BehaviorPhase()
		{
			for (auto element : _behaviorTasks)
			{
				element->Clear();
			}

			_behaviorTasks.clear();
		}


		/*
		*/
		bool BehaviorPhase::StartUp()
		{
			return true;
		}

		/*
		*/
		bool BehaviorPhase::Processing()
		{
			_behaviorTasks[EBehaviorNumber::BEHAVIOR_HEAD]->Process();
			return true;
		}

		/*
		*/
		bool BehaviorPhase::Release()
		{
			for (auto element : _behaviorTasks)
			{
				element->Clear();
				delete element;
				element = nullptr;
			}

			_behaviorTasks.clear();
			return true;
		}

		/*
		*/		
		int32_t BehaviorPhase::SetHeadTask(ITaskNode* inTask)
		{	
			if (true == _isSetHeadNode)
				return -1;

			_isSetHeadNode = true;
			inTask->_nodeIndex = _nextTaskNumber++;
			inTask->Ready();

			_behaviorTasks.push_back(inTask);

			return inTask->_nodeIndex;
		}

		/*
		*/		
		int32_t BehaviorPhase::ApplyBehaviorTask(ITaskNode* inTask, int32_t parentTask)
		{
			if (_behaviorTasks.size() < parentTask)
				return -1;

			inTask->_nodeIndex = _nextTaskNumber++;
			inTask->_parentNode = _behaviorTasks[parentTask];
			inTask->Ready();
			_behaviorTasks[parentTask]->ApplyTask(inTask);
			_behaviorTasks[parentTask]->Ready();
			_behaviorTasks.push_back(inTask);

			return inTask->_nodeIndex;
		}

	}
}