// ArkXpPlan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int CharacterXPLevels[180] = { 0, 5, 20, 40, 120, 190, 270, 360, 450, 550, 660, 780, 910, 1050, 1200, 1360, 1530, 1710, 1900, 2100, 2310, 2530, 2760,
                                  3000, 3250, 3510, 3780, 4060, 4350, 4650, 4960, 5280, 5610, 5950, 6300, 6660, 7030, 7410, 7800, 8200, 8610, 9030, 9460,
                                  9900, 10350, 10810, 11280, 11760, 12250, 12750, 13260, 13780, 14310, 14850, 15400, 15960, 16530, 17110, 17700, 18850,
                                  21078, 22448, 23908, 25462, 27499, 30249, 34786, 40004, 46805, 54762, 63714, 73000, 85000, 98000, 112000, 127500,
                                  144500, 163500, 184500, 207500, 232570, 259896, 289681, 323189, 360886, 403318, 451484, 506186, 566358, 632547, 705354,
                                  785441, 873538, 971538, 1083538, 1213538, 1368538, 1558538, 1798538, 2098538, 2468538, 2918538, 3458538, 4098538, 4208538,
                                  4333538, 4478538, 4648538, 4848538, 5083538, 5358538, 5678538, 6048538, 6473538, 6873538, 7273538, 7673538, 8073538,
                                  8473538, 8873538, 9273538, 9673538, 10073540, 10473540, 10873540, 11273540, 11673540, 12073540, 12473540, 13373540,
                                  23373540, 33373540, 43373540, 53373540, 64048240, 74722950, 85397660, 96072360, 106747100, 117747100, 129747100,
                                  142747100, 156747100, 171747100, 187747100, 204747100, 222747100, 241747100, 261747100, 282747100, 282747100, 305747100,
                                  329747100, 354747100, 380747100, 407747100, 435747100, 464747100, 494747100, 525747100, 557747100, 590747100, 624747100,
                                  659747100, 695747100, 732747100, 770747100, 809747100, 849747100, 892234400, 934721900, 977209200, 1019697000, 1104671000,
                                  1189646000, 1274621000, 1359595000, 1444570000, 1529545000
                             };
int currentLevel{};
int goalLevel{};
int xpNeeded{};
int xpMultiplier{};
int xpGained{};

int startup(){
    std::cout << "Welcome to V O I D's XP calculator and planner" << "\n" << "Please enter your server's XP multiplier, otherwise set it to 1: ";
    std::cin >> xpMultiplier;
    return xpMultiplier;
}

/*int getPlayerGoals() {
    std::cout << "What is your current level? ";
    std::cin >> currentLevel;
    std::cout << "What is your goal level? ";
    std::cin >> goalLevel;
    xpNeeded = CharacterXPLevels[goalLevel] - CharacterXPLevels[currentLevel];
    return xpNeeded;
}
*/


int doNoteRun(int xpMultiplier) {
    int numberNotes{};
    int xpGained{};
    std::cout << "\n" << "--Doing note run--" << "\n";
    std::cout << "Enter the number of notes you will get(grab the 1st 2x before grabbing a 4x): ";
    std::cin >> numberNotes;
    xpGained = (100 + 200) + (800 * numberNotes);
    return xpGained*xpMultiplier;
}

int usingXpNotes() {
    char choice{};
    int xpBoost{};
    std::cout << "Will you be using the a 2x and 4x note while completing this task? Y|N? ";
    std::cin >> choice;
    if (choice == 'Y' || choice == 'y') {
        xpBoost = 8;
    }
    else {
        xpBoost = 1;
    }
    return xpBoost;
}

int craftCookingPots(int xpMultiplier) {
    int numberPots{};
    int xpGained = 78;
    std::cout  << "\n" << "--Crafting cooking pots--" << "\n";
    std::cout << "Enter the number of cooking pots you will craft: ";
    std::cin >> numberPots;
    return xpGained * numberPots * xpMultiplier * usingXpNotes();
}

int runSwampCaveIsland(int xpMultiplier){
    int xpGained = 70000;
    std::cout << "\n" << "--Running the Island Swamp Cave--" << "\n";
    return xpGained * xpMultiplier * usingXpNotes();
}

int killTitanosaur(int xpMultiplier) {
    int xpGained = 80000;
    std::cout << "\n" << "--Killing the Titanosaur--" << "\n";
    return xpGained * xpMultiplier * usingXpNotes();
}

int killGiga(int xpMultiplier) {
    int xpGained{};
    int dinoLevel{};
    std::cout << "\n" << "--Killing a Giga--" << "\n";
    std::cout << "What is the level of the giga/baby giga you will kill?: ";
    std::cin >> dinoLevel;
    if (dinoLevel == 1){
        xpGained = 800;
    }
    else {
        xpGained = 800 + (80 * dinoLevel);
    }
    return xpGained * xpMultiplier * usingXpNotes();
}

int killAlphaRaptor(int xpMultiplier) {
    int xpGained{};
    int dinoLevel{};
    std::cout << "\n" << "--Killing an Alpha Raptor--" << "\n";
    std::cout << "What is the level of the Alpha Raptor you will kill?: ";
    std::cin >> dinoLevel;
    if (dinoLevel == 1) {
        xpGained = 1060;
    }
    else {
        xpGained = 1060 + (106 * dinoLevel);
    }

    return xpGained * xpMultiplier * usingXpNotes();
}

int killAlphaCarno(int xpMultiplier) {
    int xpGained{};
    int dinoLevel{};
    std::cout << "\n" << "--Killing an Alpha Carno--" << "\n";
    std::cout << "What is the level of the Alpha Carno you will kill?: ";
    std::cin >> dinoLevel;
    if (dinoLevel == 1) {
        xpGained = 1840;
    }
    else {
        xpGained = 1840 + (184 * dinoLevel);
    }

    return xpGained * xpMultiplier * usingXpNotes();
}

int killAlphaRex(int xpMultiplier) {
    int xpGained{};
    int dinoLevel{};
    std::cout << "\n" << "--Killing an Alpha Rex--" << "\n";
    std::cout << "What is the level of the Alpha Rex you will kill?: ";
    std::cin >> dinoLevel;
    if (dinoLevel == 1) {
        xpGained = 3540;
    }
    else {
        xpGained = 3540 + (354 * dinoLevel);
    }

    return xpGained * xpMultiplier * usingXpNotes();
}


int killDeathworm(int xpMultiplier) {
    int xpGained{};
    int dinoLevel{};
    std::cout << "\n" << "--Killing a Deathworm--" << "\n";
    std::cout << "What is the level of the Deathworm you will kill?: ";
    std::cin >> dinoLevel;
    if (dinoLevel == 1) {
        xpGained = 12000;
    }
    else {
        xpGained = 12000 + (1200 * dinoLevel);
    }

    return xpGained * xpMultiplier * usingXpNotes();
}

int sleepingTekPod(int xpMultiplier) {
    int xpGained = 3600;
    int hoursSlept{};
    std::cout << "\n" << "--Sleeping in Tek Pod--" "\n";
    std::cout << "How many hours will you be sleeping in the tekpod?: ";
    std::cin >> hoursSlept;
    
    return xpGained * xpMultiplier * hoursSlept;
}


int pickTask() {
    int choice{};
    int xpGained{};
    std::cout << "\n" << "--Picking a Task--" "\n";
    std::cout << "1 = Note Run" << "\n" << "2 = Craft Cooking Pots" << "\n" << "3 = Run Island Swamp Cave" << "\n" << "4 = Kill a Titanosaur" << "\n" << "5 = Kill a Giga/Baby Giga" << "\n" << "6 = Kill an Alpha Raptor" << "\n" << "7 = Kill an Alpha Carno"
        << "\n" << "8 = Kill an Alpha Rex" << "\n" << "9 = Kill a Deathworm" << "\n" << "10 = Sleep in a Tek Pod" << "\n";
    std::cout << "Please enter the corresponding number to do a task for XP: ";
    std::cin >> choice;
    if (choice == 1) {
        xpGained = doNoteRun(xpMultiplier);
    }
    else if (choice == 2) {
        xpGained = craftCookingPots(xpMultiplier);
    }
    else if (choice == 3) {
        xpGained = runSwampCaveIsland(xpMultiplier);
    }
    else if (choice == 4) {
        xpGained = killTitanosaur(xpMultiplier);
    }
    else if (choice == 5) {
        xpGained = killGiga(xpMultiplier);
    }
    else if (choice == 6) {
        xpGained = killAlphaRaptor(xpMultiplier);
    }
    else if (choice == 7) {
        xpGained = killAlphaCarno(xpMultiplier);
    }
    else if (choice == 8) {
        xpGained = killAlphaRex(xpMultiplier);
    }
    else if (choice == 9) {
        xpGained = killDeathworm(xpMultiplier);
    }
    else if (choice == 10) {
        xpGained = sleepingTekPod(xpMultiplier);
    }
    return xpGained;
}

int main()
{
    char cycle = 'Y';
    xpMultiplier = startup();
    //int xpNeeded = getPlayerGoals();
    std::cout << "What is your current level? ";
    std::cin >> currentLevel;
    std::cout << "What is your goal level? ";
    std::cin >> goalLevel;
    xpNeeded = CharacterXPLevels[goalLevel] - CharacterXPLevels[currentLevel];

    while (cycle == 'Y' || cycle == 'y') {
        std::cout << "You need " << xpNeeded << "xp points to reach your desired level of " << goalLevel << "\n\n";
        xpGained = pickTask();
        std::cout << "You gained " << xpGained << "xp from that task" << "\n";
        xpNeeded -= xpGained;
        if (xpGained >= xpNeeded) {
            std::cout << "You have already reached your desired level" << "\n";
            return 0;
        }
        std::cout << "You need " << xpNeeded << "xp points to reach your desired level of " << goalLevel << "\n";
        std::cout << "Would you like to pick another task? Y|N? ";
        std::cin >> cycle;
        if (cycle == 'Y' || cycle == 'y')
            continue;
        else {
            break;
        }
    }

    std::cout << "Your XP amount after the tasks is " << xpGained + CharacterXPLevels[currentLevel] << " , which is " << CharacterXPLevels[goalLevel] - xpGained << "xp away from your goal of lvl " << goalLevel;
    std::cout << "\n\n\n\n\n\n\n\n\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
