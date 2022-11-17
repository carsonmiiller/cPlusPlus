/*Goal: practice searching an array in C++
**There is an array of integers. The length of the arrays to be searched 
**varies. A user will enter an integer and the program will search the array.
**If the value is in the array, the program will return the location of 
**the element. If the value is not in the array, the user will be notified 
**that the value is not in the array. To exit the program the user will enter -1.
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    //use searchKey for the number to be found
    //use location for the array index of the found value
    int searchKey, location;
    
    //TODO: write code to determine if integers entered by 
    //the user are in searchArray
    while(1)
    {
        // prompt user for guess
        std::cout<<"Enter a number to search for it in searchArray:\n(or enter -1 to exit the program)\n";
        scanf("%i",&searchKey);
        location = -1;

        // if user wants to quit
        if(searchKey == -1)
            break;

        // iterate through searchArray to find searchKey
        for(int i = 0; i < sizeof(searchArray)/sizeof(int); i++)
        {
            if(searchArray[i] == searchKey)
            {
                location = i;
                break;
            }
        }

        //Use these commands to give feedback to the user
        if(location != -1)
            std::cout<<"\n"<<searchKey<<" is at location "<<location<<" in the array.\n\n";
        else
            std::cout<<"\n"<<searchKey<<" is not in the array.\n\n";
    }

    return 0;
}