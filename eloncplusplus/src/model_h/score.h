#pragma once
#include <vector>
#include <string>
#include <initializer_list>

class ScoreIterator;
class Score {
public:
	friend class ScoreIterator;

	typedef ScoreIterator iterator;

	Score(std::initializer_list<int> datas);

	iterator Begin();

	iterator End();
	
private:
	std::vector<int> scores_;
};