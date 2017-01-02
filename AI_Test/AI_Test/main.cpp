// AI_Test.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


#include <vector>
#include <list>
#include <unordered_map>
#include <map>
#include <iostream>
#include <chrono>
#include <windows.h>


#include "ITaskNode.h"
#include "SequenceTask.h"

int main()
{	
	UINT32 tempInt = -1;

	std::cout << tempInt << std::endl;

	getchar();

	return 0;
}


//std::map<int, int> tempMap;
//for (int idx = 0; idx < 90000; ++idx)
//{
//	tempMap[idx] = idx;
//}
//
//auto start = std::chrono::system_clock::now();
//for (auto itr = tempMap.begin(); itr != tempMap.end(); ++itr)
//{
//}
//auto end = std::chrono::system_clock::now();
//
//std::chrono::duration<double> sec = end - start;
//std::cout << "map for ==> " << sec.count() << std::endl << std::endl;
//
//
//start = std::chrono::system_clock::now();
//for (auto itr : tempMap)
//{
//}
//end = std::chrono::system_clock::now();
//
//sec = end - start;
//std::cout << "map foreach ==> " << sec.count() << std::endl;
//
//getchar();

//int main()
//{
//	std::list<int> tempList;
//	tempList.push_back(1);
//	tempList.push_back(2);
//	tempList.push_back(3);
//	tempList.push_back(4);
//
//	std::vector<int> tempVector;
//	tempVector.push_back(1);
//	tempVector.push_back(2);
//	tempVector.push_back(3);
//	tempVector.push_back(4);
//
//	auto start = std::chrono::system_clock::now();		
//	for(auto i : tempList)
//	{
//		std::cout << i << std::endl;
//	}	
//	auto end = std::chrono::system_clock::now();
//
//	std::chrono::duration<double> sec = end - start;
//	std::cout << "list time => " << sec.count() << std::endl << std::endl;
//	
//
//	start = std::chrono::system_clock::now();
//	for (auto i : tempVector)
//	{
//		std::cout << i << std::endl;
//	}
//	end = std::chrono::system_clock::now();
//	
//	sec = end - start;
//	std::cout << "vector time => " << sec.count() << std::endl << std::endl;
//
//	getchar();
//
//    return 0;
//}

