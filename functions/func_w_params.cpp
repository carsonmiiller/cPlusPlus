/*GOAL: Practice writing functions

/*Write a function called printProduct that prints the results of the multiplication 
**of two integers. 
*/
#include<iostream>


void printProduct(int a, int b);

int main()
{
    int m1 = 4;
    int m2 = 5;
    
    printProduct(m1, m2);
    return 0;
}

void printProduct(int a, int b)
{
    int product = a * b;
    std::cout<<a<<" * "<<b<<" = "<<product<<std::endl;
}