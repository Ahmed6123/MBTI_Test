import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        //String[] quality = {"Introversion (I) / Extroversion (E)", "Sensing (S) / Intuition (N)", "Thinking (T) / Feeling (F)", "Judging (J) / Perceiving (P)", "Assertive (-A) / Turbulent (-T)"};
        char[][] attribute = {{'I', 'E'}, {'S', 'N'}, {'T', 'F'}, {'J', 'P'}, {'A', 'T'}};
        String[][] question =
                {
                        {
                                "1. When wanting to relax, do you prefer to spend time alone or with friends?\n\n1. Spending time alone\t\t2. Spending time with friends\n",
                                "2. Do you prefer small, intimate gatherings or large, fancy parties?\n\n1. Small, intimate gatherings\t\t2. Large, fancy parties\n",
                                "2. Do you find socializing with new people energizing or draining?\n\n1. Energizing\t\t2. Draining\n",
                                "3. Would you rather be the center of attention in a group or prefer to blend into the background and observe others?\n\n1. Be the center of attention\t\t2. Blend into the background and observe\n",
                                "4. Do you prefer sharing your thoughts and feelings with others regularly, or keeping your thoughts and emotions more private?\n\n1. Feel the need to share regularly\t\t2. Prefer to keep thoughts and emotions more private\n",
                                "5. Do you enjoy trying new activities and meeting new people, or do you prefer familiar routines and spending time with a close-knit group?\n\n1. Enjoy trying new activities and meeting new people\t\t2. Prefer familiar routines and spending time with a close-knit group\n",
                                "6. Do you feel the most productive and focused when working independently, or do you thrive in a collaborative and social work environment?\n\n1. Most productive and focused when working independently\t\t2. Thrive in a collaborative and social work environment\n"
                        },
                        {
                                "7. When faced with a problem, do you rely on tangible facts and details or your gut feelings and instincts?\n1. Rely on tangible facts and details\n2. Rely on gut feelings and instincts",
                                "9. Do you often notice and remember small details in your surroundings that others might overlook?\n1. Yes\n2. No",
                                "8. Are you more inclined to trust your past experiences and practical knowledge, or do you enjoy exploring new possibilities and ideas?\n1. Trust past experiences and practical knowledge\n2. Enjoy exploring new possibilities and ideas",
                                "9. When making decisions, do you prefer a step-by-step, logical approach, or do you trust your instincts to guide you?\n1. Prefer a step-by-step, logical approach\n2. Trust instincts to guide you",
                                "10. Are you drawn to concrete, realistic goals and plans, or do you find excitement in envisioning and pursuing abstract concepts?\n1. Drawn to concrete, realistic goals and plans\n2. Find excitement in envisioning and pursuing abstract concepts",
                                "11. In a social setting, do you tend to focus on the present moment and immediate interactions, or do you often think about future possibilities and potential outcomes?\n1. Focus on the present moment and immediate interactions\n2. Think about future possibilities and potential outcomes",
                                "12. When faced with a challenge, do you rely on tried-and-true methods and strategies, or do you enjoy experimenting with new approaches and ideas?\n1. Rely on tried-and-true methods and strategies\n2. Enjoy experimenting with new approaches and ideas"
                        },
                        {
                                "13. When making decisions, do you prioritize logic, facts, and objective analysis, or do you consider the impact on people and relationships?\n1. Prioritize logic, facts, and objective analysis\n2. Consider the impact on people and relationships",
                                "14. In a challenging situation, do you rely on your rational analysis and problem-solving skills, or do you consider the emotional aspects and the feelings of those involved?\n1. Rely on rational analysis and problem-solving skills\n2. Consider the emotional aspects and the feelings of those involved",
                                "15. When offering feedback, do you tend to focus on providing constructive criticism and logical points, or do you consider the emotional impact on the person receiving the feedback?\n1. Focus on providing constructive criticism and logical points\n2. Consider the emotional impact on the person receiving the feedback",
                                "16. Do you find it more natural to express your thoughts and opinions logically and analytically, or do you often convey your emotions and values in your communication?\n1. Express thoughts and opinions logically and analytically\n2. Convey emotions and values in communication",
                                "17. When faced with a decision, do you rely on your personal values and ethical considerations, or do you prioritize efficiency and objective outcomes?\n1. Rely on personal values and ethical considerations\n2. Prioritize efficiency and objective outcomes",
                                "20. In a group setting, are you more likely to contribute by providing logical insights and data, or by considering the harmony of the group and the feelings of its members?\n1. Contribute by providing logical insights and data\n2. Consider the harmony of the group and the feelings of its members",
                                "18. When processing information, do you tend to analyze it objectively and detach emotions, or do you often consider the emotional undertones and personal connections within the information?\n1. Analyze objectively and detach emotions\n2. Consider emotional undertones and personal connections within the information"
                        },
                        {
                                "19. Do you prefer to plan your activities well in advance, with a clear schedule, or do you enjoy being spontaneous and open to new possibilities?\n1. Prefer to plan well in advance\n2. Enjoy being spontaneous and open to new possibilities",
                                "20. Is having a detailed to-do list and organized structure important, or do you find flexibility and adaptability more appealing?\n1. Detailed to-do list and organized structure\n2. Flexibility and adaptability",
                                "21. When approaching a project, do you prefer to have a set plan and follow it closely, or do you like to keep options open and make decisions as you go?\n1. Prefer to have a set plan and follow it closely\n2. Like to keep options open and make decisions as you go",
                                "25. In making decisions, do you feel more comfortable when the outcome is predictable and planned, or do you enjoy the excitement of unexpected outcomes and possibilities?\n1. Comfortable with predictable and planned outcomes\n2. Enjoy the excitement of unexpected outcomes and possibilities",
                                "22. Are you generally more organized and prefer structure in your daily life, or do you find creativity and adaptability more important?\n1. More organized and prefer structure\n2. Find creativity and adaptability more important",
                                "23. When facing a deadline, do you tend to work steadily towards it, completing tasks systematically, or do you thrive on the last-minute rush of adrenaline?\n1. Work steadily towards it, completing tasks systematically\n2. Thrive on the last-minute rush of adrenaline",
                                "24. In a group setting, do you prefer a clear agenda and a structured plan, or do you enjoy the spontaneity and exploration of new ideas?\n1. Prefer to have a clear agenda and follow a structured plan\n2. Enjoy the spontaneity and exploration of new ideas"
                        },
                        {
                                "25. When facing challenges, do you usually remain calm and composed, or do you find yourself easily stressed and anxious ? \n1.Remain calm and composed\n2.Easily stressed and anxious",
                                "26. In social situations, are you confident and self-assured, or do you tend to worry about how others perceive you?\n1. Confident and self-assured\n2. Worry about how others perceive you",
                                "27. When making decisions, are you typically decisive and firm, or do you often second-guess yourself and seek reassurance from others?\n1. Decisive and firm\n2. Second-guess yourself and seek reassurance",
                                "32. Do you generally have a positive outlook on the future, expecting things to go well, or do you often anticipate problems and uncertainties?\n1. Positive outlook, expecting things to go well\n2. Anticipate problems and uncertainties",
                                "28. How do you handle criticism? Do you take it in stride and use it as an opportunity for improvement, or does it tend to affect your confidence and self-esteem?\n1. Take criticism in stride and use it as an opportunity for improvement\n2. Criticism affects confidence and self-esteem",
                                "29. In your daily life, are you more likely to stick to a well-defined plan and routine, or do you prefer spontaneity and adaptability?\n1. Stick to a well-defined plan and routine\n2. Prefer spontaneity and adaptability",
                                "30. When faced with uncertainty, do you stay optimistic and maintain a sense of control, or do you feel overwhelmed and uneasy about the unknown?\n1. Stay optimistic and maintain a sense of control\n2. Feel overwhelmed and uneasy about the unknown"
                        }
                };

        BinaryTree energyTree = new BinaryTree();
        BinaryTree mindTree = new BinaryTree();
        BinaryTree natureTree = new BinaryTree();
        BinaryTree tacticTree = new BinaryTree();
        BinaryTree identityTree = new BinaryTree();
        Tree energyTreeRoot = null, mindTreeRoot = null, natureTreeRoot = null, tacticTreeRoot = null, identityTreeRoot = null;

        BinaryTree[] treeArray = {energyTree, mindTree, natureTree, tacticTree, identityTree};
        Tree[] rootsArray = {energyTreeRoot, mindTreeRoot, natureTreeRoot, tacticTreeRoot, identityTreeRoot};
        boolean testTaken = false;
        int choice;

        System.out.println(Design.lightPinkColorCode + Design.boldTextCode +
                "\n\t ｡*˚:✧｡ Welcome to the Myers-Briggs Type Indicator! 💫" + Design.resetColorCode);
        do
        {
            System.out.println(Design.boldTextCode + Design.lightPinkColorCode +
                    "\n📝 [1]: Take The Test");
            System.out.println("💡 [2]: View Results");
            System.out.println("📘 [3]: About The Test");
            System.out.println("🤹🏻 [4]: Personality Types");
            System.out.println("🚪 [5]: Exit");
            System.out.print("Enter your Choice: " + Design.resetColorCode);
            Scanner scanner = new Scanner(System.in);
            while (!scanner.hasNextInt())
            {
                System.out.println(" ");
                System.out.println(Design.redColorCode + "Invalid Choice; Please enter a valid option (1-5)." + Design.resetColorCode);
                scanner.next(); // Consume the Invalid Input
                System.out.println(Design.boldTextCode + Design.lightPinkColorCode +
                        "\n📝 [1]: Take The Test");
                System.out.println("💡 [2]: View Results");
                System.out.println("📘 [3]: About The Test");
                System.out.println("🤹🏻 [4]: Personality Types");
                System.out.println("🚪 [5]: Exit");
                System.out.print("Enter your Choice: " + Design.resetColorCode);
            }
            choice = scanner.nextInt();
            System.out.println(" ");
            //clearScreen();

            switch (choice)
            {
                case 1:

                    for (int i = 0; i < 5; i++)
                    {
                        rootsArray[i] = treeArray[i].makeTree(question[i][0]);
                        treeArray[i].setCounters();
                        treeArray[i].setQuestionsHelper(rootsArray[i], question[i], 1);
                        treeArray[i].traverseTreeBasedOnInput(rootsArray[i]);
                        //clearScreen();
                    }
                    Functions.systemPause();
                    Functions.clearScreen();
                    energyTree.printResult(treeArray, attribute);
                    Functions.systemPause();
                    testTaken = true;
                    break;

                case 2:
                    if (!testTaken)
                    {
                        System.out.println(Design.vibrantOrangeColorCode + "Please attempt the test first!." + Design.resetColorCode);
                        Functions.systemPause();
                        break;
                    }
                    else
                    {
                        energyTree.printResult(treeArray, attribute);
                    }
                    Functions.clearScreen();
                    break;

                case 3:
                    Functions.printAboutTheTest();
                    Functions.systemPause();
                    Functions.clearScreen();
                    break;

                case 4:
                    Functions.printPersonalityTypes();
                    Functions.systemPause();
                    Functions.clearScreen();
                    break;

                case 5:
                    System.out.println(Design.greenColorCode + "Exiting the Program." + Design.resetColorCode);
                    break;

                default:
                    System.out.println(Design.redColorCode + "Invalid Choice; Please enter a valid option (1-5)." + Design.resetColorCode);                    break;
            }
        } while (choice != 5);
    }
}