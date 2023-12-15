#include<iostream>
#include<Windows.h>
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
	int leftCounter = 0;
	int rightCounter = 0;
public:
	int getLeft()
	{
		return leftCounter;
	}
	int getRight()
	{
		return rightCounter;
	}
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
			cout << endl;

			if (choice == 1)
			{
				current = current->left;
				leftCounter++;
			}
			else if (choice == 2)
			{
				current = current->right;
				rightCounter++;
			}
			else
			{
				cout << "Invalid choice. Please enter 1 or 2.\n";
			}
		}
	}
	void calculatePercentage(int leftCounter, int rightCounter)
	{
		int leftPercentage, rightPercentage;
		leftPercentage = (leftCounter / 7) * 100;
		rightPercentage = (rightCounter / 7) * 100; //▮

		for (int i = 0; i < (leftPercentage / 2); i++)
		{
			cout << "#";
		}
	}

};

void setCustomWindowSize()
{
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);
	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1280, 960, TRUE);
}