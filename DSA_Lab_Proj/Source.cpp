#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
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
	BinaryTree ob;
	Nodeptr tree=ob.makeTree("Hello");
	ob.setQuestionsHelper(tree, energyQuestions, 3);
	cout << tree->data;
	cout << tree->right->data;

}

//int main()
//{
//	Nodeptr tree = makeTree("Question 1");
//	setLeft(tree, "Question 2a");
//	setRight(tree, "Question 2b");
//	setRight(tree->left, "Question 3c");
//	setRight(tree->right, "Question 3d");
//
//
//	int choice;
//	cout << "choice : ";
//	cin >> choice;
//	if (choice == 1)
//	{
//		tree = tree->left;
//		cout << "a or b";
//		int choice1;
//		cin >> choice1;
//		if (choice1 == 1)
//		{
//			tree = tree->left;
//			cout << "c or d";
//			int choice2;
//			cin >> choice2;
//			if (choice2 == 1)
//			{
//				tree = tree->left;
//			}
//			else
//			{
//				tree = tree->right;
//			}
//		}
//		else if (choice1==2)
//		{
//			tree = tree->right;
//			cout << "c or d";
//			int choice2;
//			cin >> choice2;
//			if (choice2 == 1)
//			{
//				tree = tree->left;
//			}
//			else
//			{
//				tree = tree->right;
//			}
//		}
//	}
//	else if (choice == 2)
//	{
//		tree = tree->right;
//		cout << "a or b";
//		int choice1;
//		cin >> choice1;
//		if (choice1 == 1)
//		{
//			tree = tree->left;
//			cout << "c or d";
//			int choice2;
//			cin >> choice2;
//			if (choice2 == 1)
//			{
//				tree = tree->left;
//			}
//			else
//			{
//				tree = tree->right;
//			}
//		}
//		else if (choice1 == 2)
//		{
//			tree = tree->right;
//			cout << "c or d";
//			int choice2;
//			cin >> choice2;
//			if (choice2 == 1)
//			{
//				tree = tree->left;
//			}
//			else
//			{
//				tree = tree->right;
//			}
//		}
//	}
//	cout << tree->info;
//	return 0;
//}