#ifndef QUESTION_POOL_H
#define QUESTION_POOL_H
#include"Question.h"
#include "Quiz.h"
class QuestionPool
{
	Question** data;
	int noOfQuestion;
	int capacity;
public:
	QuestionPool(int cap = 20);
	void addQuestion(const Question& q);
	void generateQuiz(Quiz & q, int questCount);

};
#endif // !QUESTION_POOL_H


