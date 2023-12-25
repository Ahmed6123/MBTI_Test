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

void matchPersonalityType()
{
	//idea: a quirky note can be added.
	//personalityType needs to be modified.
	//current format: quote, desc, ymk

	switch (personalityType)
	{
	case 'ISTJ':
		cout << "“I’d be more frightened by not using whatever abilities I’d been given. I’d be more frightened by procrastination and laziness.”\n\t\t\t - Denzel Washington" << endl;
		cout << "\n\tThe Logistician: \nOrder and efficiency are your middle names. Like a well-oiled machine, you navigate life with structure, meticulously ticking tasks off your list. Rules and traditions hold firm ground in your world, ensuring stability and a sense of security. (Think Captain America meticulously following orders while keeping morals in check.)" << endl; 
		cout << "\nLogisticians You May Know:\n\t o George Washington\n\t o Natalie Portman\n\t o Hermione Granger - Harry Potter" << endl;
		break;

	case 'ISFJ':
		cout << "“Love only grows by sharing. You can only have more for yourself by giving it away to others.”\n\t\t\t - Brian Tracy" << endl;
		cout << "\n\tThe Defender: \nLoyalty and compassion are your superpowers. You're the rock in a storm, always there to lend a hand and offer a warm shoulder. Family and community hold deep meaning, and you tirelessly uphold traditions that bind people together. (Think Samwise Gamgee, steadfastly supporting Frodo on his quest.)" << endl;
		cout << "\nDefenders You May Know:\n\t o Queen Elizabeth II\n\t o Captain America\n\t o Anne Hathaway" << endl;
		break;

	case 'INFJ':
		cout << "“Treat people as if they were what they ought to be and you help them to become what they are capable of being.”\n\t\t\t - Johann Wolfgang Von Goethe" << endl;
		cout << "\n\tThe Advocate: \nIdealism burns bright within you. You see the potential for good in everyone and every situation, and you champion causes that make the world a better place. Driven by empathy and a deep understanding of human nature, you inspire others to reach their fullest potential. (Think Mother Teresa advocating for the less fortunate with unwavering conviction.)" << endl;
		cout << "\nAdvocates You May Know:\n\t o Nelson Mandela\n\t o Lady Gaga\n\t o Rose Bukater - Titanic" << endl;
		break; 

	case 'INTJ':
		cout << "“Thought constitutes the greatness of man. Man is a reed, the feeblest thing in nature, but he is a thinking reed.”\n\t\t\t - Blaise Pascal" << endl;
		cout << "\n\tThe Architect: \nYour mind is a futuristic chessboard, where strategies unfurl and innovations materialize. You see the big picture, meticulously constructing blueprints for the future with logic and precision. A natural leader, you steer the course towards progress, leaving a lasting impact on the world. (Think Darth Vader, albeit with a vision for a better galaxy, meticulously planning his next move.)" << endl;
		cout << "\nArchitects You May Know:\n\t o Michelle Obama\n\t o Elon Musk\n\t o Gandalf The Grey - LOTR" << endl;
		break;

	case 'ISTP':
		cout << "“I wanted to live the life, a different life. I didn’t want to go to the same place every day and see the same people and do the same job. I wanted interesting challenges.”\n\t\t\t - Harrison Ford" << endl;
		cout << "\n\tThe Virtuoso: \nIngenuity dances in your fingertips. You're the MacGyver of your circle, transforming everyday objects into ingenious solutions. Practical and resourceful, you thrive on challenges, wielding your sharp mind and nimble hands to conquer any obstacle. (Think MacGyver crafting a makeshift bomb defuser from paper clips and chewing gum.)" << endl;
		cout << "\nVirtuosos You May Know:\n\t o Tom Cruise\n\t o James Bond\n\t o John McClane - Die Hard" << endl;
		break;

	case 'ISFP':
		cout << "“I change during the course of a day. I wake and I’m one person, and when I go to sleep I know for certain I’m somebody else.”\n\t\t\t - Bob Dylan" << endl;
		cout << "\n\tThe Adventurer: \nSpontaneity is your compass, freedom your fuel. You chase sunsets and embrace the unknown, seeking unique experiences that paint your life with vibrant colors. Your artistic soul expresses itself in everything you do, leaving a trail of beauty and inspiration in your wake. (Think Audrey Hepburn radiating elegance and spirit, living life to the fullest.)" << endl;
		cout << "\nAdventurers You May Know:\n\t o Lana Del Ray\n\t o Britney Spears\n\t o Michael Jackson" << endl;
		break;
	
	case 'INFP':
		cout << "“All that is gold does not glitter; not all those who wander are lost; the old that is strong does not wither; deep roots are not reached by the frost.”\n\t\t\t - J.R.R.Tolkein" << endl;
		cout << "\n\tThe Mediator: \nHarmony is your life's symphony. You navigate the world with a gentle spirit, seeking understanding and bridging divides. Creative expression flows through your veins, whether through art, music, or simply your gentle empathy that binds people together. (Think Vincent van Gogh painting his Starry Night, seeking beauty and meaning in the world.)" << endl;
		cout << "\nMediators You May Know:\n\t o William Shakespeare\n\t o Johnny Depp\n\t o Frodo Baggins - LOTR" << endl;
		break;

	case 'INTP':
		cout << "The important thing is not to stop questioning. Curiosity has its own reason for existence.\n\t\t\t - Albert Einstein" << endl;
		cout << "\n\tThe Logician: \nYour mind is a labyrinth of puzzles, where theories dance and equations hold meaning. You dissect ideas with razor-sharp analysis, unraveling the mysteries of the universe one logical step at a time. While quiet on the surface, your thoughts spark like fireworks, illuminating new paths for those around you. (Think Sherlock Holmes meticulously unraveling a mystery, fueled by the thrill of intellectual discovery.)" << endl;
		cout << "\nLogicians You May Know:\n\t o Bill Gates\n\t o Isaac Newton\n\t o Bruce Banner - Avengers" << endl;
		break;

	case 'ESTP':

	case 'ESFP':

	case 'ENFP':

	case 'ENTP':

	case 'ESTJ':

	case 'ESFJ':

	case 'ENFJ':

	case 'ENTJ':

	default:
		cerr << "Error: Unexpected personality type encountered." << endl;
	}

	cout << "\nLearn more about your type and traits in our Personality Types Section!" << endl;
}
