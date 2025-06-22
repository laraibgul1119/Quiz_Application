#include "MCQ.h"
bool MCQ::isCorrectAnswer(const String& s)
{
    return ((s[0] - 'A') == correctOption);
}

void MCQ::setOption(const String& s, int optNumber)
{
    options[optNumber] = s;
}

void MCQ::setCorrectAnswer(char opt)
{
    correctOption = opt - 'A';
}

String MCQ::getCorrectAnswer()
{
    return options[correctOption];
}

Question* MCQ::clone() const
{
    return new MCQ(*this);
}

void MCQ::printQuestion()
{
    cout << " "<<getQuestion() << "      : (" << getMarks() << ") ";
    cout << "\n\t A. " << options[0];
    cout << "\n\t B. " << options[1];
    cout << "\n\t C. " << options[2];
    cout << "\n\t D. " << options[3];
}
void MCQ::inputQuestion()
{
    //First we will input the question statement
    String temp[5];
    cout << "\n Enter Question Text: ";
    temp[0].input();

    //Now we will take the Optins as input
    
    //A
    cout << "\n\t Enter Option A: ";
    temp[1].input();
    setOption(temp[1], 0);
    
    //B
    cout << "\n\t Enter Option B: ";
    temp[2].input();
    setOption(temp[2], 1);
    
    //C
    cout << "\n\t Enter Option C: ";
    temp[3].input();
    setOption(temp[3], 2);
    
    //D
    cout << "\n\t Enter Option D: ";
    temp[4].input();
    setOption(temp[4], 3);

    //it takes correct Option
    char corOptioin;
    cout << "\n\t Which Option is Correct: A:B:C:D? ";
    cin >> corOptioin;
    setCorrectAnswer(corOptioin);

    //Now we will input the marks of the question
    int marks;
    cout << "\n\t Enter Question Marks: ";
    cin >> marks;
    setQuestion(temp[0], marks);

}
