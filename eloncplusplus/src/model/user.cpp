#pragma once

#include <sstream>
#include <algorithm>
#include <functional>
#include "src/model_h/User.h"
#include "src/util_h/CGreaterThan.h"

CUser::CUser()
{
	lstName_.push_back("张三");
	lstName_.push_back("李四");
	vecAge_.push_back(12);
	vecAge_.push_back(20);

	mapAge_["张三"] = 12;
	mapAge_["李四"] = 20;
	mapAge_["yzy"] = 40;

}

CUser::~CUser()
{
	lstName_.clear();
}

std::string CUser::toString() {
	std::string str;
	for (std::list<std::string>::const_iterator iter = lstName_.begin(); iter != lstName_.end(); ++iter) {
		str.append(*iter);
	}

	// 对年龄做排序
	std::sort(vecAge_.begin(), vecAge_.end(), CGreaterThan());
	for (std::vector<int>::const_iterator iter = vecAge_.begin(); iter != vecAge_.end(); ++iter) {
		str.append(std::to_string(*iter));
	}

	std::map<std::string, int>::const_iterator iter1 = mapAge_.find("张三");
	int age = iter1->second;
	printf("%d", age);

	for (std::map<std::string, int>::const_iterator iter = mapAge_.begin(); iter != mapAge_.end(); ++iter) {
		str.append(iter->first).append(":").append(std::to_string(iter->second));
	 }

	return str;
}

void* CUser::operator new (size_t size) {
	void* p = ::operator new(size);
	return p;
}

void CUser::operator delete(void* p, size_t size) {
	::operator delete(p);
}

