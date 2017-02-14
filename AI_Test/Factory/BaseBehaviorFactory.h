#pragma once

#include <vector>

class BehaviorPhase;

namespace rcai
{
	namespace factory
	{
		enum EPhase : int32_t
		{
			PHASE_BEGIN = 0,
			PHASE_1 = 0,
			PHASE_2 = 1,
			PHASE_3 = 2,
			PHASE_4 = 3,
			PHASE_5 = 4,
			PHASE_6 = 5,
			PHASE_7 = 6,
			PHASE_8 = 7,
			PHASE_9 = 8,
			PHASE_10 = 9,
			PHASE_END,
		};

		/*
		*/
		template<class TASK_UNIT>
		class BaseBehaviorFactory : public IBehaviorFactory
		{
		public:
			BaseBehaviorFactory();
			BaseBehaviorFactory(TASK_UNIT* inObject);
			virtual ~BaseBehaviorFactory();
			virtual bool StartUp();
			virtual bool Processing();
			virtual bool Release();
			
			void		SetPhase(EPhase phase) { _currentPhase = phase; }
			void		SetObject(TASK_UNIT* inObject) { _factoryUnit = inObject; }
			TASK_UNIT*	GetObject() { return _factoryUnit; }
			bool		AttachPhase(EPhase phaseType, BehaviorPhase* part);

		public :

			std::string		LatlyErrorMessage;

		protected:
			TASK_UNIT*	_factoryUnit = nullptr;
			EPhase		_currentPhase;

			std::vector<BehaviorPhase*>	_behaviorPhase;			
		};


		/*
		*/
		template<class TASK_UNIT>
		BaseBehaviorFactory<TASK_UNIT>::BaseBehaviorFactory()
			:IBehaviorFactory()
		{
		}

		/*
		*/
		template<class TASK_UNIT>
		BaseBehaviorFactory<TASK_UNIT>::BaseBehaviorFactory(TASK_UNIT* inObject)
			:IBehaviorFactory(),
			_factoryUnit(inObject)
		{
		}


		/*
		*/
		template<class TASK_UNIT>
		BaseBehaviorFactory<TASK_UNIT>::~BaseBehaviorFactory()
		{	
			Release();
		}


		/*
		*/
		template<class TASK_UNIT>
		bool BaseBehaviorFactory<TASK_UNIT>::StartUp()
		{	
			return true;
		}

		/*
		*/
		template<class TASK_UNIT>
		bool BaseBehaviorFactory<TASK_UNIT>::Processing()
		{	
			return _behaviorPhase[_currentPhase]->Processing();			
		}

		/*
		*/
		template<class TASK_UNIT>
		bool BaseBehaviorFactory<TASK_UNIT>::Release()
		{
			if (_behaviorPhase.empty())
				return false;

			for (auto element : _behaviorPhase)
			{
				element->Release();
			}

			_behaviorPhase.clear();
			return true;
		}

		/*
		*/
		template<class TASK_UNIT>
		bool BaseBehaviorFactory<TASK_UNIT>::AttachPhase(EPhase phaseType, BehaviorPhase* part)
		{
			if (_behaviorPhase.size() < phaseType)
			{
				LatlyErrorMessage = "overflow phaseType error";
				return false;
			}

			_behaviorPhase.push_back(part);
			return true;
		}

	}
}