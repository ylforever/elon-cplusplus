#pragma once

#include <string>

/*
* ��Ա��
*/
class Employee
{
public:
	Employee();
	Employee(long no, std::string name, std::string departMent);

	std::string GetEmployeeInfo();
private:
	// ����
	long no_;

	// ��Ŀ
	std::string name_;

	// ����
	std::string departMent_;
};

