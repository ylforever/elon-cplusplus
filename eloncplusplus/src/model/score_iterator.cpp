#pragma once
#include "src/model_h/score.h"
#include "src/model_h/score_iterator.h"

ScoreIterator::ScoreIterator(int index, Score& score): score_(score) {
	index_ = index;
}

ScoreIterator& ScoreIterator::operator ++ () {
	++index_;
	return *this;
}

int ScoreIterator::operator * () {
	return score_.scores_[index_];
}

bool ScoreIterator::operator != (Score::iterator iter) {
	return this->index_ != iter.index_;
}

ScoreIterator& ScoreIterator::operator = (ScoreIterator& iter) {
	this->score_ = iter.score_;
	this->index_ = iter.index_;
	return *this;
}



