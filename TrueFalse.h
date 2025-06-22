#ifndef TRUE_FALSE_H
#define TRUE_FALSE_H
#include "Question.h"
class TrueFalse :public Question
{
	bool correctOption;
public:
	bool isCorrectAnswer(const String& s);
	void setCorrectAnswer(char opt);
	String getCorrectAnswer();
	Question* clone()const;
	void printQuestion();
	void inputQuestion();
};


#endif // !TRUE_FALSE_H
