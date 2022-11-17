/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>
#include <algorithm>

int main()
{
    int userInput[40];
    for(int i = 0; i <40; i++)
    {
        std::cout<<"Input an integer:\n";
        scanf("%i",&userInput[i]);
    }
    
    for(int i = 0; i < 40; i++)
    {
        std::cout<<userInput[i];
        if(i == 39)
        {
            std::cout<<"\n";
            break;
        }
        std::cout<<" ";
    }
    
    for(int i = 39; i > -1; i--)
    {
        std::cout<<userInput[i];
        if(i == 0)
        {
            std::cout<<"\n";
            break;
        }
        std::cout<<" ";
    }
    
    std::sort(userInput,userInput + 40);
    
    for(int i = 0; i < 40; i++)
    {
        std::cout<<userInput[i];
        if(i == 39)
        {
            std::cout<<"\n";
            break;
        }
        std::cout<<" ";
    }
    return 0;
}