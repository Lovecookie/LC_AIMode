#pragma once

class IFactoryObject;
class ITaskNode;

namespace rcai
{
	/*
		behivor selector
	*/
	template<class TASK_OBJECT>
	class SelectTask : public ITaskNode<TASK_OBJECT>
	{
	public:
		SelectTask():ITaskNode<TASK_OBJECT>() {}
		virtual ~SelectTask() {};

		/*
		*/
		virtual bool	Process();
	};


	/*
	*/
	template<class TASK_OBJECT>
	bool SelectTask<TASK_OBJECT>::Process()
	{	
		return true;
	}

}