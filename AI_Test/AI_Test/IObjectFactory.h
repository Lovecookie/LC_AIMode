#pragma once


namespace bt
{
	namespace factory
	{
		/*
		object factory
		*/		
		class IObjectFactory
		{
		public :
			IObjectFactory() {}
			virtual ~IObjectFactory() {}

			virtual bool StartUp() = 0;

			virtual bool Processing() = 0;
			virtual bool Stop() = 0;

			virtual bool CleanUp() = 0;
		};
	}
}
