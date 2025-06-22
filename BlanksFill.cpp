#include "BlanksFill.h"
bool BlanksFill:: isCorrectAnswer(const String& s)
{
	return(!(correctOption == s));
}

void BlanksFill::setCorrectAnswer(const String& s)
{
	correctOption = s;
}
String BlanksFill::getCorrectAnswer()
{
	return correctOption;
}
Question* BlanksFill::clone()const
{
	return new BlanksFill(*this);
}
void BlanksFill::inputQuestion()
{
	String temp[2];
	cout << "\n Enter Question Text: ";
	cin >> temp[0];
	cout << "\n\t Enter Answer: ";
	cin >> temp[1];
	int m;
	cout << "\n\t Enter question marks: ";
	cin >> m;
	setQuestion(temp[0], m);
	setCorrectAnswer(temp[1]);
}
void BlanksFill::printQuestion()
{
	cout  << getQuestion() << " : (" << getMarks() << ")";
}
