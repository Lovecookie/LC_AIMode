#pragma once


namespace bt
{
	/*
	behivor sequencer
	*/
	template<class FACTORY = IObjectFactory>
	class SequenceTask : public ITaskNode<FACTORY>
	{
	public :
		SequenceTask():ITaskNode<FACTORY>() {}
		virtual ~SequenceTask() {}

		virtual bool Process() { return true; }

	private :


	};

}
