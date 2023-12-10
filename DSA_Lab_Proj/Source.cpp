#include<iostream>
using namespace std;
struct Tree
{
	string info;
	Tree* left, * right;
};
typedef Tree* Nodeptr;
Nodeptr makeTree(string Question)
{
	Nodeptr p = new Tree;
	p->info = Question;
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