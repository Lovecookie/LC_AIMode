// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.

#include "./Factory/BaseBehaviorFactory.h"
#include "./Factory/BaseFactoryObject.h"
#include "./Factory/IBehaviorFactory.h"
#include "./Factory/BehaviorPhase.h"
#include "./Factory/FactoryObjectManagement.h"
#include "./BehaviorTree/ITaskNode.h"
#include "./BehaviorTree/SelectTask.h"
#include "./BehaviorTree/SequenceTask.h"
#include "./BehaviorTree/CondtionTask.h"
#include "./BehaviorTree/ActionTask.h"