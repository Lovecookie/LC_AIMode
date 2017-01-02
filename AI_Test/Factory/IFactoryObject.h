#pragma once


namespace lcai
{
	namespace factory
	{
		/*
		*/
		class IFactoryObject
		{
		public:
			IFactoryObject() {}
			virtual ~IFactoryObject() {}

			/*
			*/
			virtual bool StartUp() = 0;
			/*
			*/
			virtual bool Process() = 0;
			/*
			*/
			virtual bool Stop() = 0;

			/*
			*/
			virtual bool CleanUp() = 0;
		};

	}
}
