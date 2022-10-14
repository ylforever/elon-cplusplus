#pragma once 

#include "src/util_h/less_than.h"

LessThan::LessThan(int value) {
	this->value_ = value;
}

bool LessThan::operator () (int value) {
	return value < this->value_;
}