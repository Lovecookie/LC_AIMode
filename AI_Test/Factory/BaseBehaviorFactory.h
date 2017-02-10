#pragma once

//#include <array>
#include <vector>
#include "../BehaviorTree/ITaskNode.h"
#include "../BehaviorTree/SelectTask.h"
#include "IBehaviorFactory.h"
#include "IFactoryObject.h"


namespace rcai
{
	namespace factory
	{
		enum EBehaviorNumber : int
		{
			BEHAVIOR_HEAD = 0,
		};

		/*
		*/
		template<class TASK_OBJECT>
		class BaseBehaviorFactory : public IBehaviorFactory
		{
		public:
			BaseBehaviorFactory();
			BaseBehaviorFactory(TASK_OBJECT* inObject);
			virtual ~BaseBehaviorFactory();
			virtual bool StartUp();
			virtual bool Processing();
			virtual bool Stop();

			virtual bool Release();

			void SetObject(TASK_OBJECT* inObject) { _factoryUnit = inObject; }

			void ApplyHeadTask(ITaskNode<TASK_OBJECT>* inTask);
			void ApplyBehaviorTask(ITaskNode<TASK_OBJECT*>* inTask, int parentTask);

		protected:
			TASK_OBJECT*							_factoryUnit;
			std::vector<ITaskNode<TASK_OBJECT>*>	_behaviorTasks;
			std::vector<int>						_parentNumbers;

			int										_nextTaskNumber = 0;
		};

		/*
		*/
		template<class TASK_OBJECT>
		BaseBehaviorFactory<TASK_OBJECT>::BaseBehaviorFactory()
			:IBehaviorFactory(),
			_factoryUnit(nullptr)
		{
		}

		/*
		*/
		template<class TASK_OBJECT>
		BaseBehaviorFactory<TASK_OBJECT>::BaseBehaviorFactory(TASK_OBJECT* inObject)
			:IBehaviorFactory(),
			_factoryUnit(inObject)
		{
		}


		/*
		*/
		template<class TASK_OBJECT>
		BaseBehaviorFactory<TASK_OBJECT>::~BaseBehaviorFactory()
		{
		}


		/*
		*/
		template<class TASK_OBJECT>
		bool BaseBehaviorFactory<TASK_OBJECT>::StartUp()
		{	
			ITaskNode<TASK_OBJECT>* newTask = new SelectTask<TASK_OBJECT>();
			newTask->_BehaviorNumber = _nextTaskNumber++;

			_behaviorTasks.push_back(newTask);
			_parentNumbers.push_back(0);

			return true;
		}

		/*
		*/
		template<class TASK_OBJECT>
		bool BaseBehaviorFactory<TASK_OBJECT>::Processing()
		{

			return true;
		}

		/*
		*/
		template<class TASK_OBJECT>
		bool BaseBehaviorFactory<TASK_OBJECT>::Stop()
		{

			return true;
		}

		/*
		*/
		template<class TASK_OBJECT>
		bool BaseBehaviorFactory<TASK_OBJECT>::Release()
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
		template<class TASK_OBJECT>
		void BaseBehaviorFactory<TASK_OBJECT>::ApplyHeadTask(ITaskNode<TASK_OBJECT>* inTask)
		{	
			inTask->_BehaviorNumber = _nextTaskNumber++;
			_behaviorTasks[0]->ApplyTask(inTask->_BehaviorNumber);

			_behaviorTasks.push_back(inTask);
		}

		/*
		*/
		template<class TASK_OBJECT>
		void BaseBehaviorFactory<TASK_OBJECT>::ApplyBehaviorTask(ITaskNode<TASK_OBJECT*>* inTask, int parentTask)
		{
			if (_behaviorTasks.size() < parentTask)
				return;

			inTask->_BehaviorNumber = _nextTaskNumber++;
			_behaviorTasks[parentTask]->ApplyTask(inTask->_BehaviorNumber);

			_behaviorTasks.push_back(inTask);
		}


	}
}