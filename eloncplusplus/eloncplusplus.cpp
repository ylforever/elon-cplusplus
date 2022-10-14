// eloncplusplus.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>

#include "src/model_h/user.h"
#include "src/model_h/elon_stack.h"
#include "src/model_h/employee.h"
#include "src/model_h/score.h"
#include "src/model_h/score.h"
#include "src/model_h/score_iterator.h"
#include "src/util_h/less_than.h"
#include "src/service_h/calc.h"
#include "src/util_h/memory.h"

extern void TestException();

int main()
{
	CUser user;
	std::cout << user.toString() << std::endl;
	std::cout << "C++ version:" <<__cplusplus << std::endl;

	ElonStack<std::string> elonStack;
	elonStack.push("123");
	elonStack.push("456");

	std::string str1 = elonStack.pop();
	std::string name = "王五";
	std::string dep = "NIS";

	Employee ee(11, name, dep);

	Score score({ 1, 2, 5, 6, 76 });

	std::string strScore;
	for (Score::iterator iter = score.Begin(); iter != score.End(); ++iter) {
		Score::iterator iter2(-1, score);
		iter2 = iter;
		strScore.append(std::to_string(*iter2)).append(" ");
	}

	std::cout << strScore << std::endl;

	int aa[6] = {6,5,4,3,2,1};
	std::vector<int> vec1AA(aa, aa+5);
	LessThan lessThan(5);

	std::vector<int>::iterator iter = std::find_if(vec1AA.begin(), vec1AA.end(), lessThan);

	typedef int (CalcService::* CalcFun)(int, int);
	std::vector<CalcFun> funs;
	funs.push_back(&CalcService::addition);
	funs.push_back(&CalcService::subtraction);
	funs.push_back(&CalcService::mul);
	funs.push_back(&CalcService::div);

	CalcService calc;
	for (std::vector<CalcFun>::iterator iter = funs.begin(); iter != funs.end(); ++iter) {
		CalcFun fun = *iter;
		std::cout << (calc.*fun)(10, 2) << std::endl;
	}

	TestException();

	std::string strArray[10];
	strArray[0] = "222";

	int* pInt = static_cast<int*>(malloc(sizeof(int)));
	*pInt = 1223;
	std::cout << *pInt << std::endl;
	free(pInt);

	std::string* pStr1 = new std::string;
	std::string* pStr2 = new std::string[10];

	delete pStr1;
	delete[] pStr2;

	void* pUser = new CUser;
	CUser* pUser2 = ::new (pUser)CUser;
	delete pUser2;

	return 0;
}

void TestException() {
	try {
		throw "vb123";
	} catch (int a) {
		std::cout << "捕获整型:" << a;
	} catch (char b) {
		std::cout << "捕获字符：" << b;
	} catch (const std::string& str) {
		std::cout << "捕获字符串string:" << str;
	} catch (const char* str) {
		std::cout << "捕获字符串:" << str;
	}

	std::cout << std::endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
