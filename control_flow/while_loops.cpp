#include <iostream>
#include <sstream>
#include <time.h>
#include <cstdlib>

int main()
{
    int target;
    std::string userString;
    int guess = -1;

    srand(time(NULL));
    target = rand() %100 + 1;


    do
    {
        std::cout<<"Guess a number between 0 and 100, or enter \"q\" to quit\n";
        std::getline(std::cin,userString);
        std::stringstream(userString) >> guess;
        
        if(userString == "q")
        {
            std::cout<<"Goodbye!";
            break;
        }
        
        std::cout<<"Your guess: "<<guess<<"\n";
        if(guess > target)
            std::cout<<"Too high!\n";
        else if(guess < target)
            std::cout<<"Too low!\n";
        else
            std::cout<<"You guessed the target!";

    } while(guess != target);

    return 0;
}