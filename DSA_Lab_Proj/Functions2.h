void setCustomWindowSize()
{
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);
	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1280, 960, TRUE);
}
void matchPersonalityType(string personalityType)
{
	// personalityType needs to be modified.
	// current format: quote, desc, quirk, ymk

	if (personalityType == "ISTJ")
	{
		cout << "\"I\'d be more frightened by not using whatever abilities I\'d been given. I\'d be more frightened by procrastination and laziness.\"\n\t\t\t - Denzel Washington" << endl;
		cout << "\n\tThe Logistician: \nOrder and efficiency are your middle names. Like a well-oiled machine, you navigate life with structure, meticulously ticking tasks off your list. Rules and traditions hold firm ground in your world, ensuring stability and a sense of security. (Think Captain America meticulously following orders while keeping morals in check.)" << endl;
		cout << "\nDid you know?\n\t - In a world where many people shirk their responsibilities or say what they think others want to hear, Logisticians stand out as dedicated, responsible, and honest." << endl;
		cout << "\nLogisticians You May Know:\n\t o George Washington\n\t o Natalie Portman\n\t o Hermione Granger - Harry Potter" << endl;
	}
	else if (personalityType == "ISFJ")
	{
		cout << "\"Love only grows by sharing. You can only have more for yourself by giving it away to others.\"\n\t\t\t - Brian Tracy" << endl;
		cout << "\n\tThe Defender: \nLoyalty and compassion are your superpowers. You're the rock in a storm, always there to lend a hand and offer a warm shoulder. Family and community hold deep meaning, and you tirelessly uphold traditions that bind people together. (Think Samwise Gamgee, steadfastly supporting Frodo on his quest.)" << endl;
		cout << "\nDid you know?\n\t - Defenders are true altruists, meeting kindness with kindness-in-excess and engaging with the work and people they believe in with enthusiasm and generosity." << endl;
		cout << "\nDefenders You May Know:\n\t o Queen Elizabeth II\n\t o Captain America\n\t o Anne Hathaway" << endl;

	}
	else if (personalityType == "INFJ")
	{
		cout << "\"Treat people as if they were what they ought to be and you help them to become what they are capable of being.\"\n\t\t\t - Johann Wolfgang Von Goethe" << endl;
		cout << "\n\tThe Advocate: \nIdealism burns bright within you. You see the potential for good in everyone and every situation, and you champion causes that make the world a better place. Driven by empathy and a deep understanding of human nature, you inspire others to reach their fullest potential. (Think Mother Teresa advocating for the less fortunate with unwavering conviction.)" << endl;
		cout << "\nDid you know?\n\t - Nothing lights up Advocates like changing someone else\'s life for the better." << endl;
		cout << "\nAdvocates You May Know:\n\t o Nelson Mandela\n\t o Lady Gaga\n\t o Rose Bukater - Titanic" << endl;
	}
	else if (personalityType == "INTJ")
	{
		cout << "\"Thought constitutes the greatness of man. Man is a reed, the feeblest thing in nature, but he is a thinking reed.\"\n\t\t\t - Blaise Pascal" << endl;
		cout << "\n\tThe Architect: \nYour mind is a futuristic chessboard, where strategies unfurl and innovations materialize. You see the big picture, meticulously constructing blueprints for the future with logic and precision. A natural leader, you steer the course towards progress, leaving a lasting impact on the world. (Think Darth Vader, albeit with a vision for a better galaxy, meticulously planning his next move.)" << endl;
		cout << "\nDid you know?\n\t - Architects, independent to the core, want to shake off other people\'s expectations and pursue their own ideas." << endl;
		cout << "\nArchitects You May Know:\n\t o Michelle Obama\n\t o Elon Musk\n\t o Gandalf The Grey - LOTR" << endl;

	}
	else if (personalityType == "ISTP")
	{
		cout << "\"I wanted to live the life, a different life. I didn\'t want to go to the same place every day and see the same people and do the same job. I wanted interesting challenges.\"\n\t\t\t - Harrison Ford" << endl;
		cout << "\n\tThe Virtuoso: \nIngenuity dances in your fingertips. You're the MacGyver of your circle, transforming everyday objects into ingenious solutions. Practical and resourceful, you thrive on challenges, wielding your sharp mind and nimble hands to conquer any obstacle. (Think MacGyver crafting a makeshift bomb defuser from paper clips and chewing gum.)" << endl;
		cout << "\nDid you know?\n\t - Rather than some sort of vision quest though, Virtuosos are merely exploring the viability of a new interest when they make these seismic shifts." << endl;
		cout << "\nVirtuosos You May Know:\n\t o Tom Cruise\n\t o James Bond\n\t o John McClane - Die Hard" << endl;

	}
	else if (personalityType == "ISFP")
	{
		cout << "\"I change during the course of a day. I wake and I\'m one person, and when I go to sleep I know for certain I\'m somebody else.\"\n\t\t\t - Bob Dylan" << endl;
		cout << "\n\tThe Adventurer: \nSpontaneity is your compass, freedom your fuel. You chase sunsets and embrace the unknown, seeking unique experiences that paint your life with vibrant colors. Your artistic soul expresses itself in everything you do, leaving a trail of beauty and inspiration in your wake. (Think Audrey Hepburn radiating elegance and spirit, living life to the fullest.)" << endl;
		cout << "\nDid you know?\n\t - Adventurers want to live in a world where they – and everyone else – have the freedom to live as they see fit, without judgment." << endl;
		cout << "\nAdventurers You May Know:\n\t o Lana Del Ray\n\t o Britney Spears\n\t o Michael Jackson" << endl;
	}
	else if (personalityType == "INFP")
	{
		cout << "\"All that is gold does not glitter; not all those who wander are lost; the old that is strong does not wither; deep roots are not reached by the frost.\"\n\t\t\t - J.R.R.Tolkein" << endl;
		cout << "\n\tThe Mediator: \nHarmony is your life's symphony. You navigate the world with a gentle spirit, seeking understanding and bridging divides. Creative expression flows through your veins, whether through art, music, or simply your gentle empathy that binds people together. (Think Vincent van Gogh painting his Starry Night, seeking beauty and meaning in the world.)" << endl;
		cout << "\nDid you know?\n\t - For Mediators, an ideal relationship of any kind is one in which both people feel comfortable sharing not just their wildest hopes and dreams but also their secret fears and vulnerabilities." << endl;
		cout << "\nMediators You May Know:\n\t o William Shakespeare\n\t o Johnny Depp\n\t o Frodo Baggins - LOTR" << endl;
	}
	else if (personalityType == "INTP")
	{
		cout << "\"The important thing is not to stop questioning. Curiosity has its own reason for existence.\"\n\t\t\t - Albert Einstein" << endl;
		cout << "\n\tThe Logician: \nYour mind is a labyrinth of puzzles, where theories dance and equations hold meaning. You dissect ideas with razor-sharp analysis, unraveling the mysteries of the universe one logical step at a time. While quiet on the surface, your thoughts spark like fireworks, illuminating new paths for those around you. (Think Sherlock Holmes meticulously unraveling a mystery, fueled by the thrill of intellectual discovery.)" << endl;
		cout << "\nDid you know?\n\t - Imaginative and curious, Logician personalities can find endless fascination in the workings of their own mind." << endl;
		cout << "\nLogicians You May Know:\n\t o Bill Gates\n\t o Isaac Newton\n\t o Bruce Banner - Avengers" << endl;
	}
	else if (personalityType == "ESTP")
	{
		cout << "\"Life is either a daring adventure or nothing at all.\"\n\t\t\t - Helen Keller" << endl;
		cout << "\n\tThe Entrepreneur: \nThrill and action course through your veins. You crave challenges and dive headfirst into every adventure, always pushing boundaries and defying expectations. With a natural charisma and an infectious energy, you rally others to join your pursuits, leaving a trail of excitement and innovation in your wake. (Think Tony Stark building his Iron Man suit, energized by the challenge and driven by ambition.)" << endl;
		cout << "\nDid you know?\n\t - Sometimes Entrepreneurs\' instantaneous observation and action is just what\'s required, as in some corporate environments, and especially in emergencies." << endl;
		cout << "\nEntrepreneurs You May Know:\n\t o Samuel L. Jackson\n\t o Ernest Hemingway\n\t o Ant-Man - Avengers" << endl;

	}
	else if (personalityType == "ESFP")
	{
		cout << "\"Live for each second without hesitation.\"\n\t\t\t - Elton John" << endl;
		cout << "\n\tThe Entertainer: \nLife is your stage, and you're the star player. With infectious enthusiasm and boundless energy, you light up every room with your charisma and charm. Laughter and fun follow you wherever you go, as you weave stories, connect hearts, and bring joy to the world around you. (Think Jim Carrey, making everyone laugh with his comedic antics and captivating stage presence.)" << endl;
		cout << "\nDid you know?\n\t - There\'s nothing that makes Entertainers feel quite as unhappy as realizing that they are boxed in by circumstance, unable to join their friends." << endl;
		cout << "\nEntertainers You May Know:\n\t o Captain Marvel\n\t o Jamie Foxx\n\t o Jack Dawson - Titanic" << endl;

	}
	else if (personalityType == "ENFP")
	{
		cout << "\"It doesn\'t interest me what you do for a living. I want to know what you ache for – and if you dare to dream of meeting your heart\'s longing.\"\n\t\t\t - Oriah Mountain Dreamer" << endl;
		cout << "\n\tThe Campaigner: Possibilities dance like fireflies in your eyes. You're an enthusiast of life, championing new ideas and inspiring others to embrace their dreams. With an infectious optimism and boundless creativity, you paint the world with bright colors and spark revolutions of the heart. (Think Robin Williams spreading laughter and inspiration, igniting passion in those around him.)" << endl;
		cout << "\nDid you know?\n\t - Campaigners are independent and creative, always on the lookout for the magic and meaning in everyday life." << endl;
		cout << "\nCampaigners You May Know:\n\t o Spider Man\n\t o Willy Wonka\n\t o Ellen DeGeneres" << endl;

	}
	else if (personalityType == "ENTP")
	{
		cout << "\"Follow the path of the unsafe, independent thinker.Expose your ideas to the dangers of controversy.\"\n\t\t\t - Thomas J. Watson." << endl;
		cout << "\n\tThe Debater: Your mind is a playground of ideas, where intellectual sparks fly and wit ignites laughter. You love a good debate, dissecting arguments with sharp logic and playful sarcasm. But beneath the playful banter lies a thirst for knowledge and understanding, driving you to explore every side of every issue. (Think Tyrion Lannister from Game of Thrones, holding his own in witty wordplay and intellectual challenges.)" << endl;
		cout << "\nDid you know?\n\t - Many Debaters find that a more compassionate approach is worth exploring as they strive to build solid relationships." << endl;
		cout << "\Debaters You May Know:\n\t o Thomas Edison\n\t o Captain Jack Sparrow\n\t o The Joker - Batman" << endl;

	}
	else if (personalityType == "ESTJ")
	{
		cout << "\"Good order is the foundation of all things.\"\n\t\t\t - Edmond Burke." << endl;
		cout << "\n\t The Executive: Efficiency is your mantra, organization your weapon. You lead with decisiveness and drive, navigating challenges with a clear vision and a focused path. Rules and structure provide the framework for your world, ensuring progress and achievement in everything you set your mind to. (Think Margaret Thatcher confidently leading her country, leaving a legacy of order and progress.)" << endl;
		cout << "\nDid you know?\n\t - Executives are classic images of the model citizen: they help their neighbors, uphold the law, and try to make sure that everyone participates in the communities and organizations they hold so dear." << endl;
		cout << "\Executives You May Know:\n\t o Judge Judy\n\t o John D. Rockefeller\n\t o Claire Dunphy - Modern Family" << endl;

	}
	else if (personalityType == "ESFJ")
	{
		cout << "\"Encourage, lift, and strengthen one another. For the positive energy spread to one will be felt by us all.\"\n\t\t\t - Deborah Day." << endl;
		cout << "\n\t The Consul: Warmth and empathy are your guiding stars. You nurture those around you, creating a haven of comfort and support. Traditions and community hold deep meaning, as you weave connections and bring people together, leaving a trail of kindness and belonging in your wake. (Think Florence Nightingale tending to the wounded with compassion, embodying the spirit of care and nurturing.)" << endl;
		cout << "\nDid you know?\n\t - Consuls rarely miss a birthday or holiday. Devoted to their relationships, they commit even the smallest details of their friends\' and loved ones\' lives to memory." << endl;
		cout << "\n You May Know:\n\t o Taylor Swift\n\t o Bill Clinton\n\t o Monica Geller - Friends" << endl;

	}
	else if (personalityType == "ENFJ")
	{
		cout << "\"When the whole world is silent, even one voice becomes powerful.\"\n\t\t\t - Malala Yousafzai." << endl;
		cout << "\n\t The Protagonist: Inspiration lives in your eyes, charisma flows in your words. You see the potential within everyone and dedicate yourself to guiding them towards their dreams. With unwavering enthusiasm and boundless faith in humanity, you rally others to make the world a better place, leaving a legacy of hope and progress in your wake. (Think Nelson Mandela motivating a nation, uniting hearts and minds toward a shared vision.)" << endl;
		cout << "\nDid you know?\n\t - Changing people\'s minds is no easy task – but if anyone can do it, it\'s Protagonists." << endl;
		cout << "\n You May Know:\n\t o Barack Obama\n\t o Oprah Winfrey\n\t o Jennifer Lawrence" << endl;

	}
	else if (personalityType == "ENTJ")
	{
		cout << "\"Your time is limited, so don\'t waste it living someone else\'s life.\"\n\t\t\t - Steve Jobs." << endl;
		cout << "\n\t The Commander: Ambition defines your path, vision fuels your fire. You are a force of nature, strategizing and executing with masterful precision. Your sharp intellect and unwavering determination steer the course towards your goals, leaving a lasting impact on the world around you. (Think Captain Picard boldly leading the Starship Enterprise, charting a course through uncharted territory with calculated vision and decisive action.)" << endl;
		cout << "\nDid you know?\n\t - The underlying thought running through the Commander mind might be something like 'I don\'t care if you call me an insensitive sloth, as long as I remain an efficient sloth.'" << endl;
		cout << "\n You May Know:\n\t o Doctor Strange\n\t o Steve Jobs\n\t o Gordon Ramsey" << endl;
	}
	else
	{
		cerr << "Error: Unexpected personality type encountered." << endl;
	}

	cout << "\nLearn more about your type and traits in our Personality Types Section!" << endl;
}
void printResult(BinaryTree TreeArray[5], char Attribute[5][2])
{
	string DescriptionID;
	char attr;
	cout << "You are an '";
	for (int i = 0; i < 5; i++)
	{
		if (i == 4)
		{
			cout << "-";
		}
		attr = TreeArray[i].getPersonalityType(TreeArray[i].getLeft(), TreeArray[i].getRight(), Attribute[i]);
		cout << attr;
		if (i != 4)
			DescriptionID += attr;
	}
	cout << "'!\n\n\n";

	for (int i = 0; i < 5; i++)
	{
		TreeArray[i].displayProgressBar(TreeArray[i].getLeft(), TreeArray[i].getRight(), Attribute[i]);
		cout << endl;
	}
	matchPersonalityType(DescriptionID);
	system("pause");
}
