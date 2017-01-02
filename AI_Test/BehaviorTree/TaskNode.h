#pragma once


namespace lcai
{
	class IBehaviorFactory;

	/*
		behivor base node
	*/
	template<class FACTORY = IBehaviorFactory>
	class TaskNode
	{
	public :
		TaskNode() {}
		virtual ~TaskNode() {}
		virtual bool Process() = 0;

	protected :

		FACTORY _objectFactory;
	};
}
