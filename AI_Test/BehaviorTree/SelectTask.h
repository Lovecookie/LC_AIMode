#pragma once

class IFactoryObject;
class ITaskNode;

namespace rcai
{
	/*
		behivor selector
	*/
	template<class TASK_UNIT>
	class SelectTask : public ITaskNode
	{
	public:
		SelectTask():ITaskNode(ETaskNodeName::TASK_SELECT) {}
		virtual ~SelectTask() {};

		/*
		*/
		virtual bool	Process();

	protected:
		TASK_UNIT* _taskObject;
	};


	/*
	*/
	template<class TASK_UNIT>
	bool SelectTask<TASK_UNIT>::Process()
	{	
		for (auto element : _childs)
		{
			if (true == element->Process())
				break;
		}

		return true;
	}

}