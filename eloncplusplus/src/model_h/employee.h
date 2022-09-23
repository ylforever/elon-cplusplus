#pragma once

#include <string>

/*
* 雇员类
*/
class Employee
{
public:
	Employee();
	Employee(long no, std::string name, std::string departMent);

	std::string GetEmployeeInfo();
private:
	// 工号
	long no_;

	// 项目
	std::string name_;

	// 部门
	std::string departMent_;
};

