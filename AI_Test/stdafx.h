// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �Ǵ� ������Ʈ ���� ���� ������
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.

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