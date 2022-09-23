#pragma once
#include "src/util_h/CGreaterThan.h"

bool CGreaterThan::operator ()(int num1, int num2) {
	return num1 > num2;
}