#pragma once 
#include "src/service_h/calc.h"

int CalcService::addition(int a, int b) {
	return a + b;
}

int CalcService::subtraction(int a, int b) {
	return a - b;
}

int CalcService::mul(int a, int b) {
	return a * b;
}

int CalcService::div(int a, int b) {
	return a / b;
}