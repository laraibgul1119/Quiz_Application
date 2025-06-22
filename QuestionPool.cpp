#include "QuestionPool.h"
#include"MCQ.h"
#include"BlanksFill.h"
#include"TrueFalse.h"
QuestionPool::QuestionPool(int cap):data(nullptr),noOfQuestion(0),capacity(0)
{ 
	if (cap <= 0)
	{
		return;
	}
	capacity = cap;
	data = new Question * [capacity];
}

void QuestionPool::addQuestion(const Question& q)
{
	Question* p;
	p=q.clone();
	MCQ* a=dynamic_cast<MCQ*>(p);
	TrueFalse* b=dynamic_cast<TrueFalse*>(p);
	BlanksFill* c=dynamic_cast<BlanksFill*>(p);
	if (a)
	{
		data[noOfQuestion] = new MCQ{ *a };
	}
	else if (b)
	{
		data[noOfQuestion] = new TrueFalse{ *b };
	}
	else
	{
		data[noOfQuestion] = new BlanksFill{ *c };
	}
	noOfQuestion++;
}

void QuestionPool::generateQuiz(Quiz& q, int questCount)
{
    if (questCount > noOfQuestion || questCount <= 0 || noOfQuestion == 0)
        return;

    // Create an array of indices
    int* indices = new int[noOfQuestion];
    for (int i = 0; i < noOfQuestion; ++i)
        indices[i] = i;

    // Shuffle indices using Fisher-Yates algorithm
    for (int i = noOfQuestion - 1; i > 0; --i)
    {
        int j = rand() % (i + 1);
        int temp = indices[i];
        indices[i] = indices[j];
        indices[j] = temp;
    }

    // Prepare array of pointers to selected questions
    Question** selected = new Question*[questCount];
    for (int i = 0; i < questCount; ++i)
    {
        selected[i] = data[indices[i]]->clone();
    }

    // Populate the quiz with selected questions
    q.populateQuiz(selected, questCount);

    // Clean up
    for (int i = 0; i < questCount; ++i)
    {
        delete selected[i];
    }
    delete[] selected;
    delete[] indices;
}
