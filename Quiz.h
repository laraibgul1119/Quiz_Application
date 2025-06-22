#ifndef QUIZ_H
#define QUIZ_H
#include"Question.h"
class Quiz
{
	Question** data;
	String* userAnswer;
	int obtainedMarks = 0;
	int maximumMarks = 0;
	int noOfQuestions;
	int currentQuesiton = 0;
	void markQuestion();
public:
	int getObtainedMarks();
	int getMaximumMarks();
	void setMaximumMarks(int);
	void populateQuiz(Question** p, int qCount);
	void setAnswerForCurrentQuestion(const String& ans);
	void printQuiz();
	//It print quiz on screen
	//Iterator
	void nextQuestion();
		//moves the current question pointer one Position a head
	void showCurrentQuestion();
	//print Current Question on screen
	bool isQuizFinished();
	//checks whether the quiz is finished or not. current Question will be equal to noOfQuestions
	void delayQuestion();
	// delay Question on user request by putting it at the end of array
};
#endif // !QUIZ_H


