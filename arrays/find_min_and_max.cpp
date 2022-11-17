/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include<iostream>
#include<stdio.h>

int main()
{
    int length = 15;
    int num [length];
    float avg = 0.0;
    int min = 100;
    int max = 0;
    int loop_upper_bound = sizeof(num)/sizeof(int);
    
    for(int i = 0; i < loop_upper_bound; i++)
    {
        std::cout<<"Enter a number 0-100\n";
        scanf("%i", &num[i]);
        avg += num[i];
        if(num[i] < min && num[i] >= 0)
            min = num[i];
        if(num[i] > max && num[i] <= 100)
            max = num[i];
    }
    avg /= loop_upper_bound;
    
    std::cout<<"Minimum = "<<min<<std::endl;
    std::cout<<"Maximum = "<<max<<std::endl;
    std::cout<<"Average = "<<avg<<std::endl;
    
    return 0;
}