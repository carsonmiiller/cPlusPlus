#include<iostream>
#include<typeinfo>

int main()
{
    int TARGET = 33;
    int guess;
    while(1)
    {
        std::cout << "Guess a number between 1 - 100 or press q to quit\n";
        std::cin>>guess;

        if(guess == 0)
        {
            break;
        }
        else
        {
            while(1)
            {
                std::cout<<"You guessed: "<<guess<<"\n";
                
                if(guess < TARGET)
                {
                    std::cout<<"Your guess is too low.\n";
                }
                else if(guess > TARGET)
                {
                    std::cout<<"Your guess is too high.\n";
                }
                else
                {
                    std::cout<<"Yay! You guessed correctly.\n";
                    break;
                }
                std::cout << "Guess again...\n";
                std::cin >> guess;
            }
        }
    }
    std::cout << "Goodbye! Please play again!";
    return 0;
}