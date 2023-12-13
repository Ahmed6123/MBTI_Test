#include<iostream>
using namespace std;

struct Tree
{
	string data;
	Tree* left, * right;
	typedef Tree* Nodeptr;
};
typedef Tree* Nodeptr;

class BinaryTree 
{
private:
	int introvertCounter = 0;
	int extrovertCounter = 0;
	string energyQuestions[7] = //introvert/extrovert (I/E)
	{
		"Q1) When wanting to relax, do you prefer to spend time alone or with friends?\n1. Spending time alone\n2. Spending time with friends",
		"Q2) Do you prefer small, intimate gatherings or large, fancy parties?\n1. Small, intimate gatherings\n2. Large, fancy parties",
		"Q3) Do you find socializing with new people energizing or draining?\n1. Energizing\n2. Draining",
		"Q4) Would you rather be the center of attention in a group or prefer to blend into the background and observe others?\n1. Be the center of attention\n2. Blend into the background and observe",
		"Q5) Do you prefer sharing your thoughts and feelings with others regularly, or keeping your thoughts and emotions more private?\n1. Feel the need to share regularly\n2. Prefer to keep thoughts and emotions more private",
		"Q6) Do you enjoy trying new activities and meeting new people, or do you prefer familiar routines and spending time with a close-knit group?\n1. Enjoy trying new activities and meeting new people\n2. Prefer familiar routines and spending time with a close-knit group",
		"Q7) Do you feel the most productive and focused when working independently, or do you thrive in a collaborative and social work environment?\n1. Most productive and focused when working independently\n2. Thrive in a collaborative and social work environment"
	};
	string mindQuestions[7] = //observant/intuitive (S/N)
	{
		"Q1) When faced with a problem, do you rely on tangible facts and details or your gut feelings and instincts?\n1. Rely on tangible facts and details\n2. Rely on gut feelings and instincts",
		"Q2) Do you often notice and remember small details in your surroundings that others might overlook?\n1. Yes\n2. No",
		"Q3) Are you more inclined to trust your past experiences and practical knowledge, or do you enjoy exploring new possibilities and ideas?\n1. Trust past experiences and practical knowledge\n2. Enjoy exploring new possibilities and ideas",
		"Q4) When making decisions, do you prefer a step-by-step, logical approach, or do you trust your instincts to guide you?\n1. Prefer a step-by-step, logical approach\n2. Trust instincts to guide you",
		"Q5) Are you drawn to concrete, realistic goals and plans, or do you find excitement in envisioning and pursuing abstract concepts?\n1. Drawn to concrete, realistic goals and plans\n2. Find excitement in envisioning and pursuing abstract concepts",
		"Q6) In a social setting, do you tend to focus on the present moment and immediate interactions, or do you often think about future possibilities and potential outcomes?\n1. Focus on the present moment and immediate interactions\n2. Think about future possibilities and potential outcomes",
		"Q7) When faced with a challenge, do you rely on tried-and-true methods and strategies, or do you enjoy experimenting with new approaches and ideas?\n1. Rely on tried-and-true methods and strategies\n2. Enjoy experimenting with new approaches and ideas"
	};
	string natureQuestions[7] = //thinking/feeling (T/F)
	{
		"Q1) When making decisions, do you prioritize logic, facts, and objective analysis, or do you consider the impact on people and relationships?\n1. Prioritize logic, facts, and objective analysis\n2. Consider the impact on people and relationships",
		"Q2) In a challenging situation, do you rely on your rational analysis and problem-solving skills, or do you consider the emotional aspects and the feelings of those involved?\n1. Rely on rational analysis and problem-solving skills\n2. Consider the emotional aspects and the feelings of those involved",
		"Q3) When offering feedback, do you tend to focus on providing constructive criticism and logical points, or do you consider the emotional impact on the person receiving the feedback?\n1. Focus on providing constructive criticism and logical points\n2. Consider the emotional impact on the person receiving the feedback",
		"Q4) Do you find it more natural to express your thoughts and opinions logically and analytically, or do you often convey your emotions and values in your communication?\n1. Express thoughts and opinions logically and analytically\n2. Convey emotions and values in communication",
		"Q5) When faced with a decision, do you rely on your personal values and ethical considerations, or do you prioritize efficiency and objective outcomes?\n1. Rely on personal values and ethical considerations\n2. Prioritize efficiency and objective outcomes",
		"Q6) In a group setting, are you more likely to contribute by providing logical insights and data, or by considering the harmony of the group and the feelings of its members?\n1. Contribute by providing logical insights and data\n2. Consider the harmony of the group and the feelings of its members",
		"Q7) When processing information, do you tend to analyze it objectively and detach emotions, or do you often consider the emotional undertones and personal connections within the information?\n1. Analyze objectively and detach emotions\n2. Consider emotional undertones and personal connections within the information"
	};
	string tacticQuestions[7] = //judging/prospecting (J/P)
	{
		"Q1) Do you prefer to plan your activities well in advance, with a clear schedule, or do you enjoy being spontaneous and open to new possibilities?\n1. Prefer to plan well in advance\n2. Enjoy being spontaneous and open to new possibilities",
		"Q2) Is having a detailed to-do list and organized structure important, or do you find flexibility and adaptability more appealing?\n1. Detailed to-do list and organized structure\n2. Flexibility and adaptability",
		"Q3) When approaching a project, do you prefer to have a set plan and follow it closely, or do you like to keep options open and make decisions as you go?\n1. Prefer to have a set plan and follow it closely\n2. Like to keep options open and make decisions as you go",
		"Q4) In making decisions, do you feel more comfortable when the outcome is predictable and planned, or do you enjoy the excitement of unexpected outcomes and possibilities?\n1. Comfortable with predictable and planned outcomes\n2. Enjoy the excitement of unexpected outcomes and possibilities",
		"Q5) Are you generally more organized and prefer structure in your daily life, or do you find creativity and adaptability more important?\n1. More organized and prefer structure\n2. Find creativity and adaptability more important",
		"Q6) When facing a deadline, do you tend to work steadily towards it, completing tasks systematically, or do you thrive on the last-minute rush of adrenaline?\n1. Work steadily towards it, completing tasks systematically\n2. Thrive on the last-minute rush of adrenaline",
		"Q7) In a group setting, do you prefer a clear agenda and a structured plan, or do you enjoy the spontaneity and exploration of new ideas?\n1. Prefer to have a clear agenda and follow a structured plan\n2. Enjoy the spontaneity and exploration of new ideas"
	};
	string identityQuestions[7] = // assertive/turbulent (A/T)
	{
		"Q1) When facing challenges, do you usually remain calm and composed, or do you find yourself easily stressed and anxious?\n1. Remain calm and composed\n2. Easily stressed and anxious",
		"Q2) In social situations, are you confident and self-assured, or do you tend to worry about how others perceive you?\n1. Confident and self-assured\n2. Worry about how others perceive you",
		"Q3) When making decisions, are you typically decisive and firm, or do you often second-guess yourself and seek reassurance from others?\n1. Decisive and firm\n2. Second-guess yourself and seek reassurance",
		"Q4) Do you generally have a positive outlook on the future, expecting things to go well, or do you often anticipate problems and uncertainties?\n1. Positive outlook, expecting things to go well\n2. Anticipate problems and uncertainties",
		"Q5) How do you handle criticism? Do you take it in stride and use it as an opportunity for improvement, or does it tend to affect your confidence and self-esteem?\n1. Take criticism in stride and use it as an opportunity for improvement\n2. Criticism affects confidence and self-esteem",
		"Q6) In your daily life, are you more likely to stick to a well-defined plan and routine, or do you prefer spontaneity and adaptability?\n1. Stick to a well-defined plan and routine\n2. Prefer spontaneity and adaptability",
		"Q7) When faced with uncertainty, do you stay optimistic and maintain a sense of control, or do you feel overwhelmed and uneasy about the unknown?\n1. Stay optimistic and maintain a sense of control\n2. Feel overwhelmed and uneasy about the unknown"
	};

public:
	Nodeptr makeTree(string Question)
	{
		Nodeptr p = new Tree;
		p->data = Question;
		p->left = NULL;
		p->right = NULL;
		return p;
	}
	void setLeft(Nodeptr p, string Question)
	{
		if (p == NULL)
			cout << "Void Insertion";
		else if (p->left != NULL)
			cout << "Invalid Insertion";
		else
			p->left = makeTree(Question);
	}
	void setRight(Nodeptr p, string Question)
	{
		if (p == NULL)
			cout << "Void Insertion";
		else if (p->right != NULL)
			cout << "Invalid Insertion";
		else
			p->right = makeTree(Question);
	}

	void setQuestionsHelper(Nodeptr p, string arr[], int index)
	{
		if (p == NULL || index >= 7)
			return;

		setRight(p, arr[index]);
		setQuestionsHelper(p->right, arr, index + 1);
		setLeft(p, arr[index]);
		setQuestionsHelper(p->left, arr, index + 1); 
	}

	void traverseTreeBasedOnInput(Nodeptr root)
	{
		Nodeptr current = root;
		int choice;

		while (current != NULL)
		{
			cout << current->data << "\n";
			cout << "Enter your choice (1/2): ";
			cin >> choice;

			if (choice == 1)
			{
				current = current->left;
				introvertCounter++;
			}
			else if (choice == 2)
			{
				current = current->right;
				extrovertCounter++;
			}
			else
			{
				cout << "Invalid choice. Please enter 1 or 2.\n";
			}
		}
		cout << extrovertCounter;

	}


};