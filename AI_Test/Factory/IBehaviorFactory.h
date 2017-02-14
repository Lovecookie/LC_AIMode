#pragma once


namespace rcai
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
			virtual bool Release() = 0;

		private:


		};
	}
}
