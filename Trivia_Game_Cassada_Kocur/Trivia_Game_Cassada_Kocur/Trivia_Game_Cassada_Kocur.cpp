// Trivia_Game_Cassada_Kocur.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Questions
{
private:
	int answerChoice;
	string question;
	string answer1;
	string answer2;
	string answer3;
	string answer4;
public:
	Questions(string q, string a1, string a2, string a3, string a4, int ac)
	{
		question = q;
		answer1 = a1;
		answer2 = a2;
		answer3 = a3;
		answer4 = a4;
		answerChoice = ac;
	}
	void setQuestion(string q) { question = q; }
	void setAnswerChoice(int ac){answerChoice = ac;}
	void setAnswer1(string a1) { answer1 = a1; }
	void setAnswer2(string a2) { answer2 = a2; }
	void setAnswer3(string a3) { answer3 = a3; }
	void setAnswer4(string a4) { answer4 = a4; }
	string getQuestion() const{return question;}
	int getAnswerChoice() const{return answerChoice;}
	string getAnswer1() const { return answer1; }
	string getAnswer2() const { return answer2; }
	string getAnswer3() const { return answer3; }
	string getAnswer4() const { return answer4; }

};

int main()
{
	int choice = 0;
	int counter1 = 1;
	int counter2 = 1;
	const int NUM_ITEMS = 10;
	bool player1 = true;
	Questions question[NUM_ITEMS] = 
	{
		Questions("Q1: Who wrote Game of Thrones?","1.)George R.R. Martin","2.)J.R.R. Tolkien", "3.)Dr. Tyson McMillan", "4.)J.K. Rowling", 1),
		Questions("Q2: What is the world's largest desert?", "1.) Sahara", "2.) Gobi", "3.) Antartica", "4.) Siberia", 3),
		Questions("Q3: What is Paul McCartney's middle name?", "1.)Paul", "2.)James", "3.)John", "4.) George", 1),
		Questions("Q4: Which US President is on the $100 bill?", "1.)Franklin Roosevelt", "2.)There isn't one", "3.)Benjamin Franklin", "4.) George Washington", 2),
		Questions("Q5: What is the only U.S state with a Spanish motto?", "1.) Idaho", "2.) California", "3.) Arizona", "4.) Montana", 4),
		Questions("Q6: Which of these cars did James Bond not drive in any of the James Bond films?", "1.) Mercury", "2.) Toyota", "3.) Acura", "4.) Bentley", 3),
		Questions("Q7: Which company produces the most tires in the world?", "1.) LEGOS", "2.) Michelin", "3.) Bridgestone", "4.) Yokohama", 1),
		Questions("Q8: How many blue stripes does the United States of America's national flag have?", "1.) 0", "2.) 7", "3.) 6", "4.) 13", 1),
		Questions("Q9: Which mammal first reached Earth's orbit alive?", "1.)Dog", "2.)Human", "3.)Cat", "4.) Monkey", 1),
		Questions("Q10: Which country was Caesar salad invented in?", "1.)America", "2.)Mexico", "3.)France", "4.)Italy", 2)
	};
	
	for (int i = 0; i < NUM_ITEMS; i++)
	{
		
		if (i % 2 == 0)
		{
			cout << "Player 1:\n";
			player1 = true;
			cout << setw(14) << question[i].getQuestion() << endl;
			cout << setw(5) << question[i].getAnswer1() << endl;
			cout << setw(5) << question[i].getAnswer2() << endl;
			cout << setw(5) << question[i].getAnswer3() << endl;
			cout << setw(5) << question[i].getAnswer4() << endl;
			cin >> choice;
			if (choice == question[i].getAnswerChoice())
			{
				counter1++;
			}
			
		}
		else
		{
			cout << "Player 2:\n";
			player1 = false;
			cout << setw(14) << question[i].getQuestion() << endl;
			cout << setw(5) << question[i].getAnswer1() << endl;
			cout << setw(5) << question[i].getAnswer2() << endl;
			cout << setw(5) << question[i].getAnswer3() << endl;
			cout << setw(5) << question[i].getAnswer4() << endl;
			cin >> choice;
			if (choice == question[i].getAnswerChoice())
			{
				counter2++;
			}
		}
	}
	
	cout << "Player 1: " << counter1 - 1 << endl;
	cout << "Player 2: " << counter2 - 1;
	return 0;
}