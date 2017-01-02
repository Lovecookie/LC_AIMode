#pragma once




namespace lcai
{
	namespace factory
	{
		/*
		object factory
		*/
		class IBehaviorFactory
		{
		public :
			IBehaviorFactory() {}			
			virtual ~IBehaviorFactory() {}

			/*
			*/
			virtual bool StartUp() = 0;
			/*
			*/
			virtual bool Processing() = 0;
			/*
			*/
			virtual bool Stop() = 0;

			/*
			*/
			virtual bool CleanUp() = 0;
		};
	}
}
