#pragma once
#include "src/model_h/score.h"
#include "src/model_h/score_iterator.h"

Score::Score(std::initializer_list<int> datas) {
	for (auto data = datas.begin(); data != datas.end(); ++data) {
		scores_.push_back(*data);
	}

	for (auto data : datas) {
		scores_.push_back(data);
	}
}

Score::iterator Score::Begin() {
	return iterator(0, *this);
}

Score::iterator Score::End() {
	return iterator(scores_.size(), *this);
}

