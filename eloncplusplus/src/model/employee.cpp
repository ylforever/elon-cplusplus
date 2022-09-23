#pragma once

#include "src/model_h/employee.h"

Employee::Employee() {
	no_ = -1;
	name_ = "";
	departMent_ = "";
}

Employee::Employee(long no, std::string name, std::string departMent): no_(no),
	name_(name), departMent_(departMent) {

}

std::string Employee::GetEmployeeInfo() {
	std::string info;
	info.append(std::to_string(no_));
	info.append("|").append(name_);
	info.append("|").append(departMent_);
	return info;
}