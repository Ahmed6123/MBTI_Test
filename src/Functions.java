import java.util.Scanner;
public class Functions
{
    /*public static void printAboutTheTest()
    {
        System.out.println("The MBTI® assessment is designed to help people identify and gain some understanding around how they take in information and make decisions, the patterns of perception and judgment, as seen in normal, healthy behavior.");
        System.out.println("\nDescribing the five personality aspects that, when combined, define the personality type: Energy, Mind, Nature, Tactics and Identity, each seen as a two-sided continuum.");
        System.out.println("\n\n - Energy -\nThis aspect shows how we interact with our surroundings:\n\n Introverted individuals prefer solitary activities and get exhausted by social interaction. They tend to be quite sensitive to external stimulation (e.g. sound, sight or smell) in general.\n\nExtraverted individuals prefer group activities and get energized by social interaction. They tend to be more enthusiastic and more easily excited than Introverts.");
        System.out.println("\n\n - Mind -\nThe second aspect determines how we see the world and process information:\n\n Observant individuals are highly practical, pragmatic and down-to-earth. They tend to have strong habits and focus on what is happening or has already happened.\n\nIntuitive individuals are very imaginative, open-minded and curious. They prefer novelty over stability and focus on hidden meanings and future possibilities.");
        System.out.println("\n\n - Nature -\nThis aspect determines how we make decisions and cope with emotions:\n\nThinking individuals focus on objectivity and rationality, prioritizing logic over emotions. They tend to hide their feelings and see efficiency as more important than cooperation.\n\nFeeling individuals are sensitive and emotionally expressive. They are more empathic and less competitive than Thinking types, and focus on social harmony and cooperation.");
        System.out.println("\n\n - Tactics -\nThis aspect reflects our approach to work, planning and decision-making:\n\nJudging individuals are decisive, thorough and highly organized. They value clarity, predictability and closure, preferring structure and planning to spontaneity.\n\nProspecting individuals are very good at improvising and spotting opportunities. They tend to be flexible, relaxed nonconformists who prefer keeping their options open.");
        System.out.println("\n\n - Identity -\nFinally, the Identity aspect underpins all others, showing how confident we are in our abilities and decisions\n\nAssertive (-A) individuals are self-assured, even-tempered and resistant to stress. They refuse to worry too much and do not push themselves too hard when it comes to achieving goals.\n\nTurbulent (-T) individuals are self-conscious and sensitive to stress. They are likely to experience a wide range of emotions and to be success-driven, perfectionistic and eager to improve.");
    }*/

    public static void printAboutTheTest()
    {
        System.out.println(Design.periwinkleColorCode + "                       The MBTI® assessment is designed to help people identify and gain some understanding around how they take \n                    " +
                "in information and make decisions, the patterns of perception and judgment, as seen in normal, healthy behavior.");
        System.out.println("                                Describing the five personality aspects that, when combined, define the personality type:" +
                " \n\t                                " + Design.underlineTextCode + "Energy" + Design.resetColorCode + Design.periwinkleColorCode + ", " + Design.underlineTextCode + "Mind" + Design.resetColorCode + Design.periwinkleColorCode + ", " + Design.underlineTextCode +
                "Nature" + Design.resetColorCode + Design.periwinkleColorCode + ", " + Design.underlineTextCode + "Tactics" + Design.resetColorCode + Design.periwinkleColorCode +" and " + Design.underlineTextCode + "Identity" + Design.resetColorCode + Design.periwinkleColorCode +", each seen as a two-sided continuum.\n" + Design.resetColorCode);

        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.lightPeachColorCode +
                "                       *ੈ✩‧₊˚ Energy - This aspect shows how we interact with our surroundings.               " + Design.resetColorCode + "|");
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.lightPeachColorCode + " " + Design.underlineTextCode + Design.boldTextCode + "I" + Design.resetColorCode + Design.lightPeachColorCode +
                "ntroverted individuals prefer solitary activities  " + Design.resetColorCode + "|" + Design.lightPeachColorCode + "   " + Design.underlineTextCode + Design.boldTextCode +
                "E" + Design.resetColorCode + Design.lightPeachColorCode + "xtraverted individuals prefer group activities     " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightPeachColorCode + "  and get exhausted by social interaction. They tend " + Design.resetColorCode + "|" + Design.lightPeachColorCode + "  and get energized by social interaction. They are    " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightPeachColorCode + "    to be quite sensitive to external stimulation    " + Design.resetColorCode + "|" + Design.lightPeachColorCode + " enthusiastic and more easily excited than Introverts. " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightPeachColorCode + "     (e.g. sound, sight or smell) in general.        " + Design.resetColorCode + "|" + Design.lightPeachColorCode + "                                                       " + Design.resetColorCode + "|" );
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.skyBlueColorCode +
                "                 ✧.* Mind - This aspect determines how we see the world and process information.             " + Design.resetColorCode + "|");
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.skyBlueColorCode + "      Ob" + Design.underlineTextCode + Design.boldTextCode + "s" + Design.resetColorCode + Design.skyBlueColorCode +
                "ervant individuals are highly practical,    " + Design.resetColorCode + "|" + Design.skyBlueColorCode + "      I" + Design.underlineTextCode + Design.boldTextCode +
                "n" + Design.resetColorCode + Design.skyBlueColorCode + "tuitive individuals are very imaginative,      " + Design.resetColorCode +"|\n" +
                "                    |" + Design.skyBlueColorCode + "      pragmatic and down-to-earth. They tend to      " + Design.resetColorCode + "|" + Design.skyBlueColorCode + "      open-minded and curious. They prefer novelty     " + Design.resetColorCode +"|\n" +
                "                    |" + Design.skyBlueColorCode + "       have strong habits and focus on what is       " + Design.resetColorCode + "|" + Design.skyBlueColorCode + "           over stability and focus on hidden          " + Design.resetColorCode +"|\n" +
                "                    |" + Design.skyBlueColorCode + "        happening or has already happened.           " + Design.resetColorCode + "|" + Design.skyBlueColorCode + "           meanings and future possibilities.          " + Design.resetColorCode +"|" );
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.lightMintGreenColorCode +
                "              ༉‧₊˚. Nature - This aspect determines how we make decisions and cope with emotions.             " + Design.resetColorCode + "|");
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.lightMintGreenColorCode + "    " + Design.underlineTextCode + Design.boldTextCode + "T" + Design.resetColorCode + Design.lightMintGreenColorCode +
                "hinking individuals focus on objectivity and    " + Design.resetColorCode + "|" + Design.lightMintGreenColorCode + "        " + Design.underlineTextCode + Design.boldTextCode +
                "F" + Design.resetColorCode + Design.lightMintGreenColorCode + "eeling individuals are sensitive and          " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightMintGreenColorCode + "    rationality, prioritizing logic over emotions.   " + Design.resetColorCode + "|" + Design.lightMintGreenColorCode + "    emotionally expressive. They are more empathic     " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightMintGreenColorCode + "      They tend to hide their feelings and see       " + Design.resetColorCode + "|" + Design.lightMintGreenColorCode + "      and less competitive than Thinking types,        " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightMintGreenColorCode + "   efficiency as more important than cooperation.    " + Design.resetColorCode + "|" + Design.lightMintGreenColorCode + "     and focus on social harmony and cooperation.      " + Design.resetColorCode + "|" );
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.lightPinkColorCode +
                "             ☄.*.⋆ Tactics - This aspect reflects our approach to work, planning and decision-making.        " + Design.resetColorCode + "|");
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.lightPinkColorCode + "      " + Design.underlineTextCode + Design.boldTextCode + "J" + Design.resetColorCode + Design.lightPinkColorCode +
                "udging individuals are decisive, thorough     " + Design.resetColorCode + "|" + Design.lightPinkColorCode + "       " + Design.underlineTextCode + Design.boldTextCode +
                "P" + Design.resetColorCode + Design.lightPinkColorCode + "rospecting individuals are very good at        " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightPinkColorCode + "       and highly organized. They value clarity,     " + Design.resetColorCode + "|" + Design.lightPinkColorCode + "        improvising and spotting opportunities.        " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightPinkColorCode + "        predictability and closure, preferring       " + Design.resetColorCode + "|" + Design.lightPinkColorCode + "    They tend to be flexible, relaxed nonconformists   " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightPinkColorCode + "        structure and planning to spontaneity.       " + Design.resetColorCode + "|" + Design.lightPinkColorCode + "        who prefer keeping their options open.         " + Design.resetColorCode + "|" );
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.lightPurpleColorCode +
                "             ⋆˚｡⋆୨୧˚ Identity - This aspect shows how confident we are in our abilities and decisions.        " + Design.resetColorCode + "|");
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
        System.out.println("                    |" + Design.lightPurpleColorCode + "        " + Design.underlineTextCode + Design.boldTextCode + "A" + Design.resetColorCode + Design.lightPurpleColorCode +
                "ssertive individuals are self-assured,      " + Design.resetColorCode + "|" + Design.lightPurpleColorCode + "     " + Design.underlineTextCode + Design.boldTextCode +
                "T" + Design.resetColorCode + Design.lightPurpleColorCode + "urbulent individuals are self-conscious and      " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightPurpleColorCode + "  even-tempered and resistant to stress. They refuse " + Design.resetColorCode + "|" + Design.lightPurpleColorCode + "   sensitive to stress. They are likely to experience  " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightPurpleColorCode + "   to worry too much and do not push themselves too  " + Design.resetColorCode + "|" + Design.lightPurpleColorCode + "   a wide range of emotions and to be success-driven,  " + Design.resetColorCode + "|\n" +
                "                    |" + Design.lightPurpleColorCode + "          hard when it comes to achieving goals.     " + Design.resetColorCode + "|" + Design.lightPurpleColorCode + "         perfectionist and eager to improve.           " + Design.resetColorCode + "|" );
        System.out.println("                    |-------------------------------------------------------------------------------------------------------------|");
    }

    public static void matchPersonalityType(String personalityType)
    {
        switch (personalityType)
        {
            case "ISTJ":
                System.out.println(Design.lightAquaColorCode);
                System.out.println("\n\"I'd be more frightened by not using whatever abilities I'd been given. I'd be more frightened by procrastination and laziness.\"\n\t\t\t - Denzel Washington");
                System.out.println("\nThe Logistician 🕰 \n\t- Order and efficiency are your middle names. Like a well-oiled machine, you navigate life with structure, meticulously ticking tasks off your list. Rules and traditions hold firm ground in your world, ensuring stability and a sense of security. (Think Captain America meticulously following orders while keeping morals in check.)");
                System.out.println("\nDid you know?\n\t - In a world where many people shirk their responsibilities or say what they think others want to hear, Logisticians stand out as dedicated, responsible, and honest.");
                System.out.println("\nLogisticians You May Know:\n\t o George Washington\n\t o Natalie Portman\n\t o Hermione Granger - Harry Potter");
                System.out.println(Design.resetColorCode);
                break;

            case "ISFJ":
                System.out.println(Design.lightLemonColorCode);
                System.out.println("\n\"Love only grows by sharing. You can only have more for yourself by giving it away to others.\"\n\t\t\t - Brian Tracy");
                System.out.println("\nThe Defender 🌼 \n\t- Loyalty and compassion are your superpowers. You're the rock in a storm, always there to lend a hand and offer a warm shoulder. Family and community hold deep meaning, and you tirelessly uphold traditions that bind people together. (Think Samwise Gamgee, steadfastly supporting Frodo on his quest.)");
                System.out.println("\nDid you know?\n\t - Defenders are true altruists, meeting kindness with kindness-in-excess and engaging with the work and people they believe in with enthusiasm and generosity.");
                System.out.println("\nDefenders You May Know:\n\t o Queen Elizabeth II\n\t o Captain America\n\t o Anne Hathaway");
                System.out.println(Design.resetColorCode);
                break;

            case "INFJ":
                System.out.print(Design.lightLavenderColorCode);
                System.out.println("\n\"Treat people as if they were what they ought to be and you help them to become what they are capable of being.\"\n\t\t\t - Johann Wolfgang Von Goethe");
                System.out.println("\nThe Advocate 🌌 \n\t- Idealism burns bright within you. You see the potential for good in everyone and every situation, and you champion causes that make the world a better place. Driven by empathy and a deep understanding of human nature, you inspire others to reach their fullest potential. (Think Mother Teresa advocating for the less fortunate with unwavering conviction.)");
                System.out.println("\nDid you know?\n\t - Nothing lights up Advocates like changing someone else's life for the better.");
                System.out.println("\nAdvocates You May Know:\n\t o Nelson Mandela\n\t o Lady Gaga\n\t o Rose Bukater - Titanic");
                System.out.print(Design.resetColorCode);
                break;

            case "INTJ":
                System.out.print(Design.periwinkleColorCode);
                System.out.println("\n\"Thought constitutes the greatness of man. Man is a reed, the feeblest thing in nature, but he is a thinking reed.\"\n\t\t\t - Blaise Pascal");
                System.out.println("\nThe Architect 🧠 \n\t- Your mind is a futuristic chessboard, where strategies unfurl and innovations materialize. You see the big picture, meticulously constructing blueprints for the future with logic and precision. A natural leader, you steer the course towards progress, leaving a lasting impact on the world. (Think Darth Vader, albeit with a vision for a better galaxy, meticulously planning his next move.)");
                System.out.println("\nDid you know?\n\t - Architects, independent to the core, want to shake off other people's expectations and pursue their own ideas.");
                System.out.println("\nArchitects You May Know:\n\t o Michelle Obama\n\t o Elon Musk\n\t o Gandalf The Grey - LOTR");
                System.out.print(Design.resetColorCode);
                break;

            case "ISTP":
                System.out.print(Design.lightGreenColorCode);
                System.out.println("\n\"I wanted to live the life, a different life. I didn't want to go to the same place every day and see the same people and do the same job. I wanted interesting challenges.\"\n\t\t\t - Harrison Ford");
                System.out.println("\nThe Virtuoso 🛠 \n\t- Ingenuity dances in your fingertips. You're the MacGyver of your circle, transforming everyday objects into ingenious solutions. Practical and resourceful, you thrive on challenges, wielding your sharp mind and nimble hands to conquer any obstacle. (Think MacGyver crafting a makeshift bomb defuser from paper clips and chewing gum.)");
                System.out.println("\nDid you know?\n\t - Rather than some sort of vision quest though, Virtuosos are merely exploring the viability of a new interest when they make these seismic shifts.");
                System.out.println("\nVirtuosos You May Know:\n\t o Tom Cruise\n\t o James Bond\n\t o John McClane - Die Hard");
                System.out.print(Design.resetColorCode);
                break;

            case "ISFP":
                System.out.print(Design.lightCoralColorCode);
                System.out.println("\n\"I change during the course of a day. I wake and I'm one person, and when I go to sleep I know for certain I'm somebody else.\"\n\t\t\t - Bob Dylan");
                System.out.println("\nThe Adventurer 🎨 \n\t- Spontaneity is your compass, freedom your fuel. You chase sunsets and embrace the unknown, seeking unique experiences that paint your life with vibrant colors. Your artistic soul expresses itself in everything you do, leaving a trail of beauty and inspiration in your wake. (Think Audrey Hepburn radiating elegance and spirit, living life to the fullest.)");
                System.out.println("\nDid you know?\n\t - Adventurers want to live in a world where they – and everyone else – have the freedom to live as they see fit, without judgment.");
                System.out.println("\nAdventurers You May Know:\n\t o Lana Del Ray\n\t o Britney Spears\n\t o Michael Jackson");
                System.out.print(Design.resetColorCode);
                break;

            case "INFP":
                System.out.println(Design.lightBlueColorCode);
                System.out.println("\n\"All that is gold does not glitter; not all those who wander are lost; the old that is strong does not wither; deep roots are not reached by the frost.\"\n\t\t\t - J.R.R.Tolkein");
                System.out.println("\nThe Mediator 🌈 \n\t- Harmony is your life's symphony. You navigate the world with a gentle spirit, seeking understanding and bridging divides. Creative expression flows through your veins, whether through art, music, or simply your gentle empathy that binds people together. (Think Vincent van Gogh painting his Starry Night, seeking beauty and meaning in the world.)");
                System.out.println("\nDid you know?\n\t - For Mediators, an ideal relationship of any kind is one in which both people feel comfortable sharing not just their wildest hopes and dreams but also their secret fears and vulnerabilities.");
                System.out.println("\nMediators You May Know:\n\t o William Shakespeare\n\t o Johnny Depp\n\t o Frodo Baggins - LOTR");
                System.out.print(Design.resetColorCode);
                break;

            case "INTP":
                System.out.println(Design.silverColorCode);
                System.out.println("\n\"The important thing is not to stop questioning. Curiosity has its own reason for existence.\"\n\t\t\t - Albert Einstein");
                System.out.println("\nThe Logician 🔎 \n\t- Your mind is a labyrinth of puzzles, where theories dance and equations hold meaning. You dissect ideas with razor-sharp analysis, unraveling the mysteries of the universe one logical step at a time. While quiet on the surface, your thoughts spark like fireworks, illuminating new paths for those around you. (Think Sherlock Holmes meticulously unraveling a mystery, fueled by the thrill of intellectual discovery.)");
                System.out.println("\nDid you know?\n\t - Imaginative and curious, Logician personalities can find endless fascination in the workings of their own mind.");
                System.out.println("\nLogicians You May Know:\n\t o Bill Gates\n\t o Isaac Newton\n\t o Bruce Banner - Avengers");
                System.out.print(Design.resetColorCode);
                break;

            case "ESTP":
                System.out.println(Design.lightPeachColorCode);
                System.out.println("\n\"Life is either a daring adventure or nothing at all.\"\n\t\t\t - Helen Keller");
                System.out.println("\nThe Entrepreneur 🚀 \n\t- Thrill and action course through your veins. You crave challenges and dive headfirst into every adventure, always pushing boundaries and defying expectations. With a natural charisma and an infectious energy, you rally others to join your pursuits, leaving a trail of excitement and innovation in your wake. (Think Tony Stark building his Iron Man suit, energized by the challenge and driven by ambition.)");
                System.out.println("\nDid you know?\n\t - Sometimes Entrepreneurs' instantaneous observation and action is just what's required, as in some corporate environments, and especially in emergencies.");
                System.out.println("\nEntrepreneurs You May Know:\n\t o Samuel L. Jackson\n\t o Ernest Hemingway\n\t o Ant-Man - Avengers");
                System.out.print(Design.resetColorCode);
                break;

            case "ESFP":
                System.out.println(Design.lightOrangeColorCode);
                System.out.println("\n\"Live for each second without hesitation.\"\n\t\t\t - Elton John");
                System.out.println("\nThe Entertainer 🎭 \n\t- Life is your stage, and you're the star player. With infectious enthusiasm and boundless energy, you light up every room with your charisma and charm. Laughter and fun follow you wherever you go, as you weave stories, connect hearts, and bring joy to the world around you. (Think Jim Carrey, making everyone laugh with his comedic antics and captivating stage presence.)");
                System.out.println("\nDid you know?\n\t - There's nothing that makes Entertainers feel quite as unhappy as realizing that they are boxed in by circumstance, unable to join their friends.");
                System.out.println("\nEntertainers You May Know:\n\t o Captain Marvel\n\t o Jamie Foxx\n\t o Jack Dawson - Titanic");
                System.out.print(Design.resetColorCode);
                break;

            case "ENFP":
                System.out.println(Design.lightYellowColorCode);
                System.out.println("\n\"It doesn't interest me what you do for a living. I want to know what you ache for – and if you dare to dream of meeting your heart's longing.\"\n\t\t\t - Oriah Mountain Dreamer");
                System.out.println("\nThe Campaigner 🌟 \n\t- Possibilities dance like fireflies in your eyes. You're an enthusiast of life, championing new ideas and inspiring others to embrace their dreams. With an infectious optimism and boundless creativity, you paint the world with bright colors and spark revolutions of the heart. (Think Robin Williams spreading laughter and inspiration, igniting passion in those around him.)");
                System.out.println("\nDid you know?\n\t - Campaigners are independent and creative, always on the lookout for the magic and meaning in everyday life.");
                System.out.println("\nCampaigners You May Know:\n\t o Spider Man\n\t o Willy Wonka\n\t o Ellen DeGeneres");
                System.out.print(Design.resetColorCode);
                break;

            case "ENTP":
                System.out.println(Design.lightLilacColorCode);
                System.out.println("\n\"Follow the path of the unsafe, independent thinker. Expose your ideas to the dangers of controversy.\"\n\t\t\t - Thomas J. Watson.");
                System.out.println("\nThe Debater 🎙 \n\t- Your mind is a playground of ideas, where intellectual sparks fly and wit ignites laughter. You love a good debate, dissecting arguments with sharp logic and playful sarcasm. But beneath the playful banter lies a thirst for knowledge and understanding, driving you to explore every side of every issue. (Think Tyrion Lannister from Game of Thrones, holding his own in witty wordplay and intellectual challenges.)");
                System.out.println("\nDid you know?\n\t - Many Debaters find that a more compassionate approach is worth exploring as they strive to build solid relationships.");
                System.out.println("\nDebaters You May Know:\n\t o Thomas Edison\n\t o Captain Jack Sparrow\n\t o The Joker - Batman");
                System.out.print(Design.resetColorCode);
                break;

            case "ESTJ":
                System.out.println(Design.lightApricotColorCode);
                System.out.println("\n\"Good order is the foundation of all things.\"\n\t\t\t - Edmond Burke.");
                System.out.println("\nThe Executive 📊 \n\t- Efficiency is your mantra, organization your weapon. You lead with decisiveness and drive, navigating challenges with a clear vision and a focused path. Rules and structure provide the framework for your world, ensuring progress and achievement in everything you set your mind to. (Think Margaret Thatcher confidently leading her country, leaving a legacy of order and progress.)");
                System.out.println("\nDid you know?\n\t - Executives are classic images of the model citizen: they help their neighbors, uphold the law, and try to make sure that everyone participates in the communities and organizations they hold so dear.");
                System.out.println("\nExecutives You May Know:\n\t o Judge Judy\n\t o John D. Rockefeller\n\t o Claire Dunphy - Modern Family");
                System.out.print(Design.resetColorCode);
                break;

            case "ESFJ":
                System.out.println(Design.roseGoldColorCode);
                System.out.println("\n\"Encourage, lift, and strengthen one another. For the positive energy spread to one will be felt by us all.\"\n\t\t\t - Deborah Day.");
                System.out.println("\nThe Consul 🌺 \n\t- Warmth and empathy are your guiding stars. You nurture those around you, creating a haven of comfort and support. Traditions and community hold deep meaning, as you weave connections and bring people together, leaving a trail of kindness and belonging in your wake. (Think Florence Nightingale tending to the wounded with compassion, embodying the spirit of care and nurturing.)");
                System.out.println("\nDid you know?\n\t - Consuls rarely miss a birthday or holiday. Devoted to their relationships, they commit even the smallest details of their friends' and loved ones' lives to memory.");
                System.out.println("\nConsuls You May Know:\n\t o Taylor Swift\n\t o Bill Clinton\n\t o Monica Geller - Friends");
                System.out.print(Design.resetColorCode);
                break;

            case "ENFJ":
                System.out.println(Design.lightMintGreenColorCode);
                System.out.println("\n\"When the whole world is silent, even one voice becomes powerful.\"\n\t\t\t - Malala Yousafzai.");
                System.out.println("\nThe Protagonist 🌏 \n\t- Inspiration lives in your eyes, charisma flows in your words. You see the potential within everyone and dedicate yourself to guiding them towards their dreams. With unwavering enthusiasm and boundless faith in humanity, you rally others to make the world a better place, leaving a legacy of hope and progress in your wake. (Think Nelson Mandela motivating a nation, uniting hearts and minds toward a shared vision.)");
                System.out.println("\nDid you know?\n\t - Changing people\'s minds is no easy task – but if anyone can do it, it\'s Protagonists.");
                System.out.println("\nProtagonists You May Know:\n\t o Barack Obama\n\t o Oprah Winfrey\n\t o Jennifer Lawrence");
                System.out.print(Design.resetColorCode);
                break;

            case "ENTJ":
                System.out.println(Design.lightPurpleColorCode);
                System.out.println("\n\"Your time is limited, so don\'t waste it living someone else\'s life.\"\n\t\t\t - Steve Jobs.");
                System.out.println("\nThe Commander 🏆 \n\t- Ambition defines your path, vision fuels your fire. You are a force of nature, strategizing and executing with masterful precision. Your sharp intellect and unwavering determination steer the course towards your goals, leaving a lasting impact on the world around you. (Think Captain Picard boldly leading the Starship Enterprise, charting a course through uncharted territory with calculated vision and decisive action.)");
                System.out.println("\nDid you know?\n\t - The underlying thought running through the Commander mind might be something like 'I don\'t care if you call me an insensitive sloth, as long as I remain an efficient sloth.'");
                System.out.println("\nCommanders You May Know:\n\t o Doctor Strange\n\t o Steve Jobs\n\t o Gordon Ramsey");
                System.out.print(Design.resetColorCode);
                break;

            default:
                System.err.println(Design.redColorCode + "Error: Unexpected personality type encountered." + Design.resetColorCode);
        }
        System.out.println(Design.lightPinkColorCode + "\nLearn more about your type and traits in our Personality Types Section!" + Design.resetColorCode);
    }

    public static void printPersonalityTypes()
    {
        System.out.println(Design.lightLilacColorCode + Design.boldTextCode +
                "                                                             - Analysts -                                                                \n");
        System.out.println("             Architect                        Logician                         Commander                           Debater              ");
        System.out.println("           INTJ-A/INTJ-T                    INTP-A/INTP-T                     ENTJ-A/ENTJ-T                      ENTP-A/ENTP-T           ");
        System.out.println("             👷🏻🏛📐🏗                        🧠👨🏻‍🔬🤔💻                        🎖🧑🏻‍✈🛡🫡                          🧑🏻‍⚖🗣🎤💭              \n");
        //System.out.println(Design.analystEmojis);
        System.out.println("     Imaginative and strategic          Innovative inventors           Bold, imaginative and strong-       Smart and curious thinkers    ");
        System.out.println("         thinkers with a                with an unquenchable          willed leaders, always finding          who cannot resist an       ");
        System.out.println("        plan for everything.            thirst for knowledge.             a way – or making one.            intellectual challenge.      ");
        System.out.println("                                                                                                                                         "  + Design.resetColorCode);
        System.out.println("-----------------------------------------------------------------------------------------------------------------------------------------\n");
        System.out.println(Design.lightGreenColorCode + Design.boldTextCode +
                "                                                             - Diplomats -                                                               \n");
        System.out.println("             Advocate                         Mediator                         Protagonist                        Campaigner             ");
        System.out.println("           INFJ-A/INFJ-T                    INFP-A/INFP-T                     ENFJ-A/ENFJ-T                      ENFP-A/ENFP-T           ");
        System.out.println("            🧑🏻‍⚖📜🎗⚖                        🫂🧘🏻🫱🏻‍🫲🏻🕊                          🦸🏻⚡⚔🔥                           📢🤲🏻🪧☮             \n");
        //System.out.println(Design.diplomatEmojis);

        System.out.println("   Quiet and mystical, yet very      Poetic, kind and altruistic         Charismatic and inspiring        Enthusiastic, creative and     ");
        System.out.println(" inspiring and tireless idealists.      people, always eager            leaders, able to mesmerize      sociable free spirits, who can   ");
        System.out.println("                                        to help a good cause.                their listeners.           always find a reason to smile.   ");
        System.out.println("                                                                                                                                         "  + Design.resetColorCode);
        System.out.println("-----------------------------------------------------------------------------------------------------------------------------------------\n");

        System.out.println(Design.lightBlueColorCode + Design.boldTextCode +
                "                                                             - Sentinels -                                                               \n");
        System.out.println("            Logistician                        Defender                         Executive                           Consul              ");
        System.out.println("           ISTJ-A/ISTJ-T                     ISFJ-A/ISFJ-T                    ESTJ-A/ESTJ-T                      ESFJ-A/ESFJ-T           ");
        System.out.println("             🚚📦⛓🗺                        🥷🏻🦾❤‍🔥🧑‍🤝‍🧑                         🧑🏻‍💻🏢📈💼                          👏🏻🌍🖊🤠             \n");

        System.out.println("     Practical and fact-minded          Very dedicated and warm          Excellent administrators,          Extraordinarily caring,     ");
        System.out.println("   individuals, whose reliability       protectors, always ready         unsurpassed at managing           social and popular people,   ");
        System.out.println("        cannot be doubted.             to defend their loved ones.         things – or people.               always eager to help.       \n" + Design.resetColorCode);

        System.out.println("-----------------------------------------------------------------------------------------------------------------------------------------\n");
        System.out.println(Design.sunshineYellowColorCode + Design.boldTextCode +
                "                                                             - Explorers -                                                               \n");
        System.out.println("             Virtuoso                         Adventurer                       Entrepreneur                      Entertainer           ");
        System.out.println("           ISTP-A/ISTP-T                     ISFP-A/ISFP-T                     ESTP-A/ESTP-T                    ESFP-A/ESFP-T            ");
        System.out.println("             🤹🏻🎭📔👾                         🏕🧭🧗🏻🏔                        💸🧑🏻‍💼💡📅                         🎥🧑🏻‍🎤📺🍿              \n");

        System.out.println(" Bold and practical experimenters,    Flexible and charming artists,     Smart, energetic and very        Spontaneous, energetic and   ");
        System.out.println("  masters of all kinds of tools.       always ready to explore and      perceptive people, who truly     enthusiastic people – life is ");
        System.out.println("                                       experience something new.         enjoy living on the edge.        never boring around them.      \n" + Design.resetColorCode);
    }

    public static void clearScreen()
    {
        for (int i = 0; i < 20; i++)
        {
            System.out.println(" ");
        }
    }

    public static void systemPause()
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Press Enter to Continue..");
        scanner.nextLine();
    }
}