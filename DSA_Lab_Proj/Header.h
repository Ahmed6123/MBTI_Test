#include<iostream>
#include<Windows.h>
using namespace std;

struct Tree
{
    string data;
    Tree *left, *right;
    typedef Tree *Nodeptr;
};
typedef Tree *Nodeptr;

class BinaryTree
{
private:
    int leftCounter = 0, rightCounter = 0;

public:
    int getLeft();
    int getRight();
    Nodeptr makeTree(string Question) //make this non-inline
    {
        Nodeptr p = new Tree;
        p->data = Question;
        p->left = nullptr;
        p->right = nullptr;
        return p;
    }
    void setLeft(Nodeptr p, string Question);
    void setRight(Nodeptr p, string Question);
    void setQuestionsHelper(Nodeptr p, string arr[], int index);
    void traverseTreeBasedOnInput(Nodeptr root);
};

int BinaryTree::getLeft()
{
    return leftCounter;
}

int BinaryTree::getRight()
{
    return rightCounter;
}

void BinaryTree::setLeft(Nodeptr p, string Question)
{
    if (p == nullptr)
        cout << "Void Insertion";
    else if (p->left != nullptr)
        cout << "Invalid Insertion";
    else
        p->left = makeTree(Question);
}

void BinaryTree::setRight(Nodeptr p, string Question)
{
    if (p == nullptr)
        cout << "Void Insertion";
    else if (p->right != nullptr)
        cout << "Invalid Insertion";
    else
        p->right = makeTree(Question);
}

void BinaryTree::setQuestionsHelper(Nodeptr p, string arr[], int index)
{
    if (p == nullptr || index >= 7)
        return;

    setRight(p, arr[index]);
    setQuestionsHelper(p->right, arr, index + 1);
    setLeft(p, arr[index]);
    setQuestionsHelper(p->left, arr, index + 1);
}

void BinaryTree::traverseTreeBasedOnInput(Nodeptr root)
{
    Nodeptr current = root;
    int choice;

    while (current != nullptr)
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


void setCustomWindowSize()
{
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);

	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1280, 780, TRUE);
}