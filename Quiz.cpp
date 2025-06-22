#include "Quiz.h"
void Quiz::markQuestion()
{
	//if user enter correct answer
	if (data[currentQuesiton]->isCorrectAnswer(userAnswer[currentQuesiton]))
	{
		obtainedMarks += data[currentQuesiton]->getMarks();
	}
}

int Quiz::getObtainedMarks()
{
	return obtainedMarks;
}

int Quiz::getMaximumMarks()
{
	return maximumMarks;
}

void Quiz::setMaximumMarks(int m)
{
	maximumMarks = m >= 1 ? m : 1;
}

void Quiz::populateQuiz(Question** p, int qCount)
{
    // Clean up previous data if necessary
    if (data) 
    {
        for (int i = 0; i < noOfQuestions; ++i)
        {
            delete data[i]; // Delete each Question object
        }
        delete[] data;
        data = nullptr;
    }
    if (userAnswer) 
    {
        delete[] userAnswer;
        userAnswer = nullptr;
    }

    data = new Question*[qCount];
    userAnswer = new String[qCount];
    noOfQuestions = qCount;

    for (int i = 0; i < qCount; i++)
    {
        data[i] = p[i]->clone(); // Deep copy: clone each Question
    }
}

void Quiz::setAnswerForCurrentQuestion(const String& ans)
{
	userAnswer[currentQuesiton] = ans;
	markQuestion(); // Mark the question immediately after setting the answer
}

void Quiz::printQuiz()
{
	for (int i = 0; i < noOfQuestions; i++)
	{
		cout << "\n" << i+1 << ": " ;
		data[i]->printQuestion();
        cout << "\n";
	}
}
void Quiz::nextQuestion()
{
    currentQuesiton++;
}

void Quiz::showCurrentQuestion()
{
    data[currentQuesiton]->printQuestion();
}


bool Quiz::isQuizFinished()
{
    if (currentQuesiton != noOfQuestions)
    {
        return false;
    }
    return true;
}

void Quiz::delayQuestion()
{
    Question* temp = data[currentQuesiton]->clone();
    data[currentQuesiton] = data[noOfQuestions - 1]->clone();
    data[noOfQuestions - 1] = temp;
}
