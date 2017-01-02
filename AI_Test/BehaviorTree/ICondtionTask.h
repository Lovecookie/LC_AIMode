#pragma once



namespace lcai
{
	/*
		behivor condtion task
	*/
	class IConditionTask
	{
	public :
		IConditionTask() {};
		virtual ~IConditionTask() {};

	private :
		
		virtual bool Check() = 0;
	};

}
