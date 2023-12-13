#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	string energyQuestions[7] = //introvert/extrovert (I/E)
	{
		"Q1) When wanting to relax, do you prefer to spend time alone or with friends?\n1. Spending time alone\n2. Spending time with friends\n",
		"Q2) Do you prefer small, intimate gatherings or large, fancy parties?\n1. Small, intimate gatherings\n2. Large, fancy parties\n",
		"Q3) Do you find socializing with new people energizing or draining?\n1. Energizing\n2. Draining\n",
		"Q4) Would you rather be the center of attention in a group or prefer to blend into the background and observe others?\n1. Be the center of attention\n2. Blend into the background and observe\n",
		"Q5) Do you prefer sharing your thoughts and feelings with others regularly, or keeping your thoughts and emotions more private?\n1. Feel the need to share regularly\n2. Prefer to keep thoughts and emotions more private\n",
		"Q6) Do you enjoy trying new activities and meeting new people, or do you prefer familiar routines and spending time with a close-knit group?\n1. Enjoy trying new activities and meeting new people\n2. Prefer familiar routines and spending time with a close-knit group\n",
		"Q7) Do you feel the most productive and focused when working independently, or do you thrive in a collaborative and social work environment?\n1. Most productive and focused when working independently\n2. Thrive in a collaborative and social work environment\n"
	};
	BinaryTree ob;
	Nodeptr tree=ob.makeTree(energyQuestions[0]);
	ob.setQuestionsHelper(tree, energyQuestions, 1);
	ob.traverseTreeBasedOnInput(tree);
	//cout << tree->data;
	//cout << tree->right->data;
	//cout << tree->left->data;
	//cout << tree->left->left->data;
	//cout << tree->left->right->data;
	//cout << tree->right->left->data;
	//cout << tree->right->right->data;

}
