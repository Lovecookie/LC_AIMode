#pragma once



namespace bt
{
	/*
	 behivor action task
	*/
	class ActionTask
	{
	public:

		ActionTask() {};
		virtual ~ActionTask() {};

		/*
		액션 처리
		*/
		virtual bool Process() { return true; }
		virtual bool UpdateAction() = 0;

	private:

	};

}