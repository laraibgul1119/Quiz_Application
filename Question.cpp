#include "Question.h"

void Question::setQuestion(const String& s, int num)
{ 
	question = s;
	marks = num;
}

String Question::getQuestion() const
{
	return question;
}

int Question::getMarks() const
{
	return marks;
}
