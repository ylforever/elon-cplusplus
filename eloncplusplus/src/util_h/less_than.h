#pragma once

class LessThan {
public:
	LessThan(int value);

	bool operator () (int value);
private:
	int value_;	
};