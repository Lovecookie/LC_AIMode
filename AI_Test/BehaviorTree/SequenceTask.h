#pragma once

class IFactoryObject;
class ITaskNode;

namespace rcai
{
	/*
		behivor sequencer
	*/
	template<class TASK_UNIT>
	class SequenceTask : public ITaskNode
	{
	public :
		SequenceTask():ITaskNode(ETaskNodeName::TASK_SEQUENCE) {}
		virtual ~SequenceTask() {}

		/*			
		*/
		virtual bool Process();	

	protected :
		TASK_UNIT* _taskObject;
	};


	template<class TASK_UNIT>
	bool SequenceTask<TASK_UNIT>::Process()
	{
		for (auto element : _childs)
		{
			if (false == element->Process())
				break;
		}

		return false;
	}



}
