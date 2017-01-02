#pragma once

#include "BaseFactoryObject.h"
#include <list>

namespace lcai
{
	namespace factory
	{	
		template<class FactoryObject = BaseFactoryObject>
		class FactoryObjectManagement
		{
		public:
			FactoryObjectManagement() {}
			~FactoryObjectManagement() {}

			static FactoryObject* CreateObject();
			static void Release();

		private:

			static std::list<FactoryObject*> _objectContainer;
		};


		/*
		*/
		template<class FactoryObject = BaseFactoryObject>
		FactoryObject* FactoryObjectManagement<FactoryObject>::CreateObject()
		{
			FactoryObject* obj = new FactoryObject();
			return obj;
		}

		/*
		*/
		template<class FactoryObject = BaseFactoryObject>
		void FactoryObjectManagement<FactoryObject>::Release()
		{
			for each (auto element in _objectContainer)
			{
				if (nullptr != element)
				{
					delete element;
					element = nullptr;
				}
			}

			_objectContainer.clear();
		}

	}
}
