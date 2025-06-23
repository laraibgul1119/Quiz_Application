#include "String.h"
#ifndef QUESTION_H
#define QUESTION_H
class Question
{
	String question;
	int marks = 1;
public:
	void setQuestion(const String&, int num = 1);
	String getQuestion()const;
	int getMarks()const;
	virtual bool isCorrectAnswer(const String& )=0;
	virtual String getCorrectAnswer() = 0;
	virtual Question* clone()const = 0;
	virtual void printQuestion() = 0;
	virtual void inputQuestion() = 0;

};
#endif // !QUESTION_H



