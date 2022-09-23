#pragma once
#include <vector>

template<typename T>
class ElonStack
{
public:
	void push(T element) {
		datas.push_back(element);
	}
	T pop() {
		T& data = datas.back();
		T data2 = data;
		datas.pop_back();
		return data2;
	}
private:
	std::vector<T> datas;
};

