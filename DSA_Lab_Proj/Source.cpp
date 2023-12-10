#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	BinaryTree ob;
	ob.makeTree("00");
	system("pause");
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