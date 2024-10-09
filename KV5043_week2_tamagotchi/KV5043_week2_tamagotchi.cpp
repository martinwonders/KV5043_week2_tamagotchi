#include <iostream>

int main() 
{
    // initial status
    int hunger = 0;
    int tiredness = 0;
    int happiness = 100;

    char choice = 'r';

    while (choice != 'q')
    {
        // Display current status of the alien
        std::cout << "\nYour alien's current status: " << std::endl;
        std::cout << "Hunger: " << hunger << std::endl;
        std::cout << "Tiredness: " << tiredness << std::endl;
        std::cout << "Happiness: " << happiness << std::endl;

        // Check for critical conditions
        if (hunger >= 100) 
        {
            std::cout << "Your alien is starving!" << std::endl;
        }
        else if (hunger <= 0) 
        {
            std::cout << "Your alien is too full and refuses to eat!" << std::endl;
        }

        if (tiredness >= 100) 
        {
            std::cout << "Your alien has fallen asleep." << std::endl;
        }
        else if (tiredness <= 0) 
        {
            std::cout << "Your alien is fully rested!" << std::endl;
        }

        if (happiness <= 0) 
        {
            std::cout << "Your alien is very unhappy!" << std::endl;
        }
        else if (happiness >= 100) 
        {
            std::cout << "Your alien is ecstatic!" << std::endl;
        }

        // Present the player's choices
        std::cout << "\nWhat would you like to do?" << std::endl;
        std::cout << "f - Feed the alien" << std::endl;
        std::cout << "w - Walk the alien" << std::endl;
        std::cout << "t - Tickle the alien" << std::endl;
        std::cout << "r - Let the alien rest" << std::endl;
        std::cout << "q - Quit the game" << std::endl;
        std::cin >> choice;

        // Handle the player's choice using switch
        switch (choice) 
        {
        case 'f': std::cout << "You feed the alien." << std::endl;
            hunger -= 20;
            happiness += 5;
            break;
        case 'w': std::cout << "You walk the alien." << std::endl;
            hunger += 10;
            tiredness += 15;
            happiness -= 10;
            break;
        case 't': std::cout << "You tickle the alien. It tries to bite your fingers!" << std::endl;
            happiness += 15;
            tiredness += 5;
            break;
        case 'r': std::cout << "The alien takes a rest." << std::endl;
            tiredness -= 30;
            hunger += 10;
            break;

        case 'q': std::cout << "Goodbye!" << std::endl;
            break;
        default: std::cout << "Invalid choice. Try again" << std::endl;
            break;
        }


        // Bound the alien parameters between 0 and 100, notice the one liners
        if (hunger < 0) hunger = 0;
        if (hunger > 100) hunger = 100;
        if (tiredness < 0) tiredness = 0;
        if (tiredness > 100) tiredness = 100;
        if (happiness < 0) happiness = 0;
        if (happiness > 100) happiness = 100;
    }

    return 0;
}
