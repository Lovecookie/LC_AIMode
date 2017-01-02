#pragma once

#include "IFactoryObject.h"
#include "../BehaviorTree/TaskNode.h"

namespace lcai
{
	namespace factory
	{
		/*
		*/
		class BaseFactoryObject : public IFactoryObject
		{
		public:
			BaseFactoryObject():IFactoryObject() {}
			virtual ~BaseFactoryObject() {}

			/*
			*/
			virtual bool StartUp() { return true; }
			/*
			*/
			virtual bool Process() { return true; }
			/*
			*/
			virtual bool Stop() { return true; }

			/*
			*/
			virtual bool CleanUp() { return true; }

		private :
			
		};
	}
}