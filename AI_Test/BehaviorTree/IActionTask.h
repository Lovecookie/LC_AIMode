#pragma once



namespace lcai
{
	/*
		behivor action task
	*/
	class IActionTask
	{
	public:

		IActionTask() {};
		virtual ~IActionTask() {};

		/*
			action process
		*/
		virtual bool Process() = 0;
		virtual bool UpdateAction() = 0;

	private:

	};

}