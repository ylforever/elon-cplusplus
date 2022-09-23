// eloncplusplus.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "src/model_h/user.h"
#include "src/model_h/elon_stack.h"
#include "src/model_h/employee.h"
#include "src/model_h/score.h"
#include "src/model_h/score.h"
#include "src/model_h/score_iterator.h"

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
		strScore.append(std::to_string(*iter)).append(" ");
	}

	std::cout << strScore << std::endl;

	return 0;
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
