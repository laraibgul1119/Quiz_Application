#include "TrueFalse.h"
bool TrueFalse::isCorrectAnswer(const String& s)
{
	return (getCorrectAnswer()==s[0]);
}
void TrueFalse::setCorrectAnswer(char opt)
{
	if (opt - 'A' == 0)
	{
		correctOption = true;
	}
	correctOption = false;
}
String TrueFalse::getCorrectAnswer()
{
	return correctOption == true ? 'A' : 'B';
}
Question* TrueFalse::clone()const
{
	return new TrueFalse(*this);
}
void TrueFalse::inputQuestion()
{
	String temp;
	cout << "\n Enter Question Text: ";
	cin >> temp;
	cout << "\n\t A. True";
	cout << "\n\t B. False";
	char corOption;
	cout << "\n\t Which Option is Correct: A:B? ";
	cin >> corOption;
	setCorrectAnswer(corOption);
	int m;
	cout << "\n\t Enter Question Marks: ";
	cin >> m;
	setQuestion(temp, m);
}
void TrueFalse::printQuestion()
{
	cout << getQuestion()<<"  : ("<<getMarks()<<") ";
	cout << "\n\t A. True";
	cout << "\n\t B. False";
}