#pragma once

class IFactoryObject;
class ITaskNode;

namespace rcai
{
	/*
		behivor sequencer
	*/
	template<class TASK_OBJECT>
	class SequenceTask : public ITaskNode<TASK_OBJECT>
	{
	public :
		SequenceTask():ITaskNode<TASK_OBJECT>() {}
		virtual ~SequenceTask() {}

		/*			
		*/
		virtual bool Process();	
	};


	template<class TASK_OBJECT>
	bool SequenceTask<TASK_OBJECT>::Process()
	{
		return true;
	}



}
