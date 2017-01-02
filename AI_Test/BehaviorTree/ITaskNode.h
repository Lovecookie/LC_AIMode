#pragma once


namespace bt
{
	/*
	behivor base node
	*/
	template<class FACTORY>
	class ITaskNode
	{
	public :
		ITaskNode() {}
		virtual ~ITaskNode() {}	
		virtual bool Process() = 0;

	protected :

		FACTORY m_ObjectFactory;
	};
}
