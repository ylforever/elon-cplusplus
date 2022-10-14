#pragma once

#include "src/util_h/iostream_util.h"

std::ostream& operator << (std::ostream& os, CUser& user) {
	os << user.toString() << std::endl;
	return os;
}