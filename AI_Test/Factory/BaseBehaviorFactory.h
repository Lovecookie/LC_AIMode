#pragma once


namespace bt
{
	/*
	*/
	template<class OBJECT>
	class BaseBehaviorFactory : public IObjectFactory
	{
	public :
		BaseBehaviorFactory();
		virtual ~BaseBehaviorFactory();

		bool StartUp();
		bool Processing();
		bool Stop();

		bool CleanUp();

	protected :
		OBJECT* m_object;

	};





}