#pragma once

#include "IBehaviorFactory.h"
#include "IFactoryObject.h"

namespace lcai
{
	namespace factory
	{
		/*
		*/		
		class BaseBehaviorFactory : public IBehaviorFactory
		{
		public:
			BaseBehaviorFactory();
			BaseBehaviorFactory(IFactoryObject* inputObject);
			virtual ~BaseBehaviorFactory();

			bool StartUp();
			bool Processing();
			bool Stop();

			bool CleanUp();

		protected:
			IFactoryObject*	_factoryObject;
		};
	}
}