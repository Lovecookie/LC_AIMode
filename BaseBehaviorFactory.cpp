#include "stdafx.h"
#include "BaseBehaviorFactory.h"

namespace bt
{
	/*
	*/
	template<class OBJECT>
	BaseBehaviorFactory<OBJECT>::BaseBehaviorFactory()
		:IOjbectFactory(),
		m_object(nullptr)
	{
	}

	/*
	*/
	template<class OBJECT>
	BaseBehaviorFactory<OBJECT>::~BaseBehaviorFactory()
	{
	}


	/*
	*/
	template<class OBJECT>
	bool BaseBehaviorFactory<OBJECT>::StartUp()
	{
		return true;
	}

	/*
	*/
	template<class OBJECT>
	bool BaseBehaviorFactory<OBJECT>::Processing()
	{
		return true;
	}

	/*
	*/
	template<class OBJECT>
	bool BaseBehaviorFactory<OBJECT>::Stop()
	{
		return true;
	}

	/*
	*/
	template<class OBJECT>
	bool BaseBehaviorFactory<OBJECT>::CleanUp()
	{
		return true;
	}




}