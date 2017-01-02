#pragma once



namespace bt
{
	/*
	behivor condtion task
	*/
	class ConditionTask
	{
	public :
		ConditionTask() {};
		virtual ~ConditionTask() {};

	private :
		
		virtual bool Check() = 0;
	};

}
