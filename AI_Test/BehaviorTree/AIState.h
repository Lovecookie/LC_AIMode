#pragma once


namespace lcai
{
	namespace task
	{
		/*
			this is ai state
		*/
		enum AIState : __int32
		{
			IDLE = 1,
			HIDE_MOVE,
			ATTACK,
			ATTACK_MOVE,
			DEFENCE,
			DEFENCE_MOVE,
			SPREAD,
		};

		/*
			this is group state
		*/
		enum AIGroupState : __int32
		{
			IDLE = 1,
			IDLE_WAIT,
			IDLE_MOVE,
			SPREAD,
		};
	}
}