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
		�׼� ó��
		*/
		virtual bool Process() { return true; }
		virtual bool UpdateAction() = 0;

	private:

	};

}