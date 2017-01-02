#include "stdafx.h"
#include "BaseBehaviorFactory.h"

namespace lcai
{
	namespace factory
	{
		BaseBehaviorFactory::BaseBehaviorFactory()
			:IBehaviorFactory(),
			_factoryObject(nullptr)
		{
		}

		/*
		*/		
		BaseBehaviorFactory::BaseBehaviorFactory(IFactoryObject* inputObject)
			:IBehaviorFactory(),
			_factoryObject(inputObject)
		{	
		}


		/*
		*/		
		BaseBehaviorFactory::~BaseBehaviorFactory()
		{
		}


		/*
		*/		
		bool BaseBehaviorFactory::StartUp()
		{
			_factoryObject->StartUp();

			return true;
		}

		/*
		*/		
		bool BaseBehaviorFactory::Processing()
		{
			_factoryObject->Process();

			return true;
		}

		/*
		*/		
		bool BaseBehaviorFactory::Stop()
		{
			_factoryObject->Stop();

			return true;
		}

		/*
		*/		
		bool BaseBehaviorFactory::CleanUp()
		{
			/*if (_factoryObject != nullptr)
			{
				delete _factoryObject;
				_factoryObject = nullptr;
			}*/

			return true;
		}



	}
}