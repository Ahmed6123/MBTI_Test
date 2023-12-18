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
	float getLeft()
	{
		return leftCounter;
	}
	float getRight()
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
				cout << "Invalid choice; Please enter 1 or 2.\n";
			}
		}
	}
	void calculatePercentage(float leftCounter, float rightCounter , char attribute[])
	{
		char Load = 177;
		int i, j;
		float leftPercentage, rightPercentage;
		leftPercentage = (leftCounter / 7) * 100;
		rightPercentage = (rightCounter / 7) * 100;

		cout << " " << attribute[0] << " ";					//▮
		for (i = 0; i < (leftPercentage / 2); i++)
		{
			cout << "\033[1;20m" << char(219) << "\033[0m";
		}
		for (j = i + 1; j < 51; j++)
		{
			cout << "\033[1;35m" << char(219) << "\033[0m";
		}
		cout << " " << attribute[1] << "  ";
		if (leftPercentage > rightPercentage)
		{
			cout << "[" << (int)leftPercentage << " %]" << endl;
		}
		else
		{
			cout << "[" << (int)rightPercentage << " %]" << endl;
		}
	}

	char getPersonalityType(float leftCounter, float rightCounter , char attribute[])
	{
		char personalityType;
		if (leftCounter > rightCounter)
		{
			personalityType = attribute[0];
		}
		else
		{
			personalityType = attribute[1];
		}
		return personalityType;
	}
	void printAboutTheTest()
	{
		cout << "The MBTI® assessment is designed to help people identify and gain some understanding around how they take in information and make decisions, the patterns of perception and judgment, as seen in normal, healthy behavior." << endl << "\nDescribing the five personality aspects that, when combined, define the personality type: Energy, Mind, Nature, Tactics and Identity, each seen as a two-sided continuum." << endl;
		cout << "\n\n - Energy -\nThis aspect shows how we interact with our surroundings:\n\n Introverted individuals prefer solitary activities and get exhausted by social interaction. They tend to be quite sensitive to external stimulation (e.g. sound, sight or smell) in general.\n\nExtraverted individuals prefer group activities and get energized by social interaction. They tend to be more enthusiastic and more easily excited than Introverts." << endl;
		cout << "\n\n - Mind -\nThe second aspect determines how we see the world and process information:\n\n Observant individuals are highly practical, pragmatic and down-to-earth. They tend to have strong habits and focus on what is happening or has already happened.\n\nIntuitive individuals are very imaginative, open-minded and curious. They prefer novelty over stability and focus on hidden meanings and future possibilities." << endl;
		cout << "\n\n - Nature -\nThis aspect determines how we make decisions and cope with emotions:\n\nThinking individuals focus on objectivity and rationality, prioritizing logic over emotions. They tend to hide their feelings and see efficiency as more important than cooperation.\n\nFeeling individuals are sensitive and emotionally expressive. They are more empathic and less competitive than Thinking types, and focus on social harmony and cooperation." << endl;
		cout << "\n\n - Tactics -\nThis aspect reflects our approach to work, planning and decision-making:\n\nJudging individuals are decisive, thorough and highly organized. They value clarity, predictability and closure, preferring structure and planning to spontaneity.\n\nProspecting individuals are very good at improvising and spotting opportunities. They tend to be flexible, relaxed nonconformists who prefer keeping their options open." << endl;
		cout << "\n\n - Identity -\nFinally, the Identity aspect underpins all others, showing how confident we are in our abilities and decisions\n\nAssertive (-A) individuals are self-assured, even-tempered and resistant to stress. They refuse to worry too much and do not push themselves too hard when it comes to achieving goals.\n\nTurbulent (-T) individuals are self-conscious and sensitive to stress. They are likely to experience a wide range of emotions and to be success-driven, perfectionistic and eager to improve." << endl;
	}
};

void setCustomWindowSize()
{
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);
	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1280, 960, TRUE);
}

//I ##################################---------------- N     [57 %]
//T ######################---------------------------- F	 [57 %]
//J ######################---------------------------- P	 [57 %]
//A ########------------------------------------------ T	 [85 %]