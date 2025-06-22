#include "QuizApp.h"
#include"QuestionPool.h"
#include"Quiz.h"
#include"Question.h"
#include"MCQ.h"
#include"BlanksFill.h"
#include"TrueFalse.h"
#include<fstream>
#include <iostream>
using namespace std;

void QuizApp::startApp()
{
	Quiz q;
	QuestionPool p;
	int choice;
	do
	{
		cout << "\n ************* Quiz App *************";
		cout << "\n    Enter 1 to store question in Question Data Bank";
		cout << "\n\t  2 to Print a Quiz";
		cout << "\n\t  3 to attempt a Quiz";
		cout << "\n\t  0 to exit..................................:";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int qChoice;
			char qc;
			Question* q;
			cout << "\n ************* Quiz App *************";
			cout << "\n ********* Question Data Bank *********";
			cout << "\n    Enter 1 to add MCQ";
			cout << "\n\t  2 to add True/False";
			cout << "\n\t  3 to add Fill in the Blank";
			cout << "\n\t  4 to return to Main-Menu/Quiz-App.....:";
			cin >> qChoice;
			cin.ignore(); // Clear the input buffer before inputting question

			switch (qChoice)
			{
			case 1:
			{
				cout << "\n ************* Quiz App *************";
				cout << "\n ********* Question Data Bank *********";
				cout << "\n *********** MCQ Storage ***********";
				do
				{
					q = new MCQ;
					q->inputQuestion();
					p.addQuestion(*q);
					delete q;
					q = nullptr;
					cout << "\n Press Enter Key to add more MCQs Or any other key to return to Main Menu: ";
					cin.ignore();
					cin.get(qc);
				} while (qc == '\n');
				break;
			}
			case 2:
			{
				cout << "\n ************* Quiz App *************";
				cout << "\n ********* Question Data Bank *********";
				cout << "\n *********** True/False Storage ***********";
				do
				{
					q = new TrueFalse;
					q->inputQuestion();
					p.addQuestion(*q);
					delete q;
					q = nullptr;
					cout << "\n Press Enter Key to add more True/False Or any other key to return to Main Menu: ";
					cin.ignore();
					cin.get(qc);	
				} while (qc == '\n');
				break;
			}
			case 3:
			{
				cout << "\n ************* Quiz App *************";
				cout << "\n ********* Question Data Bank *********";
				cout << "\n *********** Fill in the Blank Storage ***********";
				do
				{
					q = new BlanksFill;
					q->inputQuestion();
					p.addQuestion(*q);
					delete q;
					q = nullptr;
					cout << "\n Press Enter Key to add more Fill in the Blank Or any other key to return to Main Menu: ";
					cin.ignore();
					cin.get(qc);
				} while (qc == '\n');
				break;
			}
			case 4:
				break;
			}
			break;
		}
		case 2:
		{
			int noOQuestions;
			cout << "\n Enter the count of questions you need in quiz: ";
			cin >> noOQuestions;
			p.generateQuiz(q, noOQuestions);
			cout << "\n ********* Welcome to Printing Press *********";
			q.printQuiz();
			break;
		}
		case 3:
		{
			//Attempting Quiz

			int noOfQuestions;
			cout << "\n Enter the count of questions you need in quiz: ";
			cin >> noOfQuestions;

			cout << "\n ********* Quiz in Progress *********";
			p.generateQuiz(q, noOfQuestions);
			q.setMaximumMarks(noOfQuestions * 10);
			cin.ignore();
			int i = 0;
			while(!q.isQuizFinished())
			{
				cout << "\n " << i + 1 << ": ";
				q.showCurrentQuestion();
				String answer;
				answer.~String();
				cout << "\n Enter your Choice OR Simply Press Enter to Delay it: ";
				cin >> answer;
				if(!answer.isEmpty())
				{
					q.setAnswerForCurrentQuestion(answer);
					q.nextQuestion();
					i++;
				}
				else
				{
					q.delayQuestion();
				}
			}
			cout << "\n";
			cout << "\n You have obtained: " << q.getObtainedMarks() << " out of " << q.getMaximumMarks() << " marks.";
			break;
		}
	      case 0:
			cout << "\n Exiting the Quiz App. Thank you!";
			break;
		}

	} while (choice!=0);
}
