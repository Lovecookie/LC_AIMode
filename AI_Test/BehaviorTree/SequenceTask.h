#pragma once


namespace lcai
{
	class IBehaviorFactory;

	/*
		behivor sequencer
	*/
	template<class FACTORY = IBehaviorFactory>
	class SequenceTask : public TaskNode<FACTORY>
	{
	public :
		SequenceTask():TaskNode<FACTORY>() {}
		virtual ~SequenceTask() {}

		/*			
		*/
		bool Process()
		{
			return _objectFactory->Process();
		}
	};

}
