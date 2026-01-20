#include <iostream>
#include <string>

// Player nickname
std::string Nickname;

// Current school level text
std::string MySchoolLevel;

// School level list based on stage
std::string SchoolLevel[4]{
    "Primary School",
    "Middle School",
    "High School",
    "University",
};

// Player money
double Money = 0;

// Player status values
int Hunger = 100;
int Energy = 100;
int Stage = 0;

// Menu choice
int Choose;

// Determines school level based on stage
void School_Level_Logic(){
    if (Stage >= 15) MySchoolLevel = SchoolLevel[3];
    else if (Stage >= 10) MySchoolLevel = SchoolLevel[2];
    else if (Stage >= 5) MySchoolLevel = SchoolLevel[1];
    else MySchoolLevel = SchoolLevel[0];
}

// Limits hunger and energy between 0 and 100
void Hunger_Energy_Logic(){
    if (Hunger > 100) Hunger = 100;
    if (Hunger < 0 ) Hunger = 0;

    if (Energy > 100) Energy = 100;
    if (Energy < 0) Energy = 0;
}

// Displays player statistics
void Statistic(){
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Nickname: " << Nickname << std::endl;
    std::cout << "Money: $" << Money << std::endl;
    std::cout << "Hunger: " << Hunger << std::endl;
    std::cout << "Energy: " << Energy << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "School Level: " << MySchoolLevel << std::endl;
    std::cout << "Stage: " << Stage << std::endl;
    std::cout << "---------------------------------" << std::endl << std::endl;
}

// Displays main menu options
void MainMenu(){
    std::cout << "[1] - Spend the day" << std::endl;
    std::cout << "[2] - Eat" << std::endl;
    std::cout << "[3] - Rest" << std::endl;
    std::cout << "[4] - Exit" << std::endl;
}

// Gets player nickname
void Entry(){
    std::cout << "Enter a nickname: ";
    std::getline(std::cin, Nickname);
    std::cout << "Welcome, " << Nickname << "!" << std::endl << std::endl;
}

// Gets user menu choice
void ChooseFunction(){
    std::cout << "Choose: ";
    std::cin >> Choose;
}

int main(){
    Entry();
    while(true){
        School_Level_Logic();

        Statistic();
        MainMenu();
        ChooseFunction();

        switch(Choose){
        case 1: // Spend the day
            if (Hunger >= 50 && Energy >= 50){
                Hunger -= 50;
                Energy -= 50;
                Money += 50;
                Stage++;
            }
            else {
                std::cout << "Low energy or hunger!" << std::endl;
            }
            break;

        case 2: // Eat
            if (Money >= 25){
                Money -= 25;
                Hunger += 100;
            }
            else {
                std::cout << "You need 25 dollars to eat!" << std::endl;
            }
            break;

        case 3: // Rest
            Energy += 100;
            break;

        case 4: // Exit game
            return 0;

        default:
            std::cout << "Invalid selection, try again." << std::endl;
            break;
        }

        // Apply limits after every action
        Hunger_Energy_Logic();
    }
}
