#ifndef BLANKS_FILL_H
#define BLANKS_FILL_H
#include "Question.h"
class BlanksFill : public Question
{
	String correctOption;
public:
	bool isCorrectAnswer(const String& s);
	void setCorrectAnswer(const String& s);
	String getCorrectAnswer();
	Question* clone()const;
	void printQuestion();
	void inputQuestion();
};
#endif // !BLANKS_FILL_H

