#pragma once

class ScoreIterator {
public:
	ScoreIterator(int index, Score& score);

	ScoreIterator& operator ++ ();
	
	int operator * ();

	bool operator != (Score::iterator iter);

	ScoreIterator& operator = (ScoreIterator& iter);

private:
	Score& score_;
	int index_;
};