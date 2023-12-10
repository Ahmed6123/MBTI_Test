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
};