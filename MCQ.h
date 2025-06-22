#ifndef MCQ_H
#define MCQ_H
#include "Question.h"
class MCQ :public Question
{
	String options[4];
	int correctOption;
public:
	bool isCorrectAnswer(const String& s);
	void setOption(const String& s, int optNumber);
	void setCorrectAnswer(char opt);
	String getCorrectAnswer();
	Question* clone()const;
	void printQuestion();
	void inputQuestion();
};
#endif // !MCQ_H


