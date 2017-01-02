#pragma once



namespace lcai
{
	class IBehaviorFactory;

	/*
		behivor selector
	*/
	template<class FACTORY = IBehaviorFactory>
	class SelectTask : public TaskNode<FACTORY>
	{
	public:

		SelectTask():TaskNode<FACTORY>() {}
		virtual ~SelectTask() {};

		/*
		*/
		bool Process()
		{
			return _objectFactory->Process();
		}
	};

}