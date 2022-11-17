/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>
#include<vector>


int dot_product(int a[], std::vector<int> &b)
{
    int product = 0;

    for(int i = 0; i < b.size(); i++)
        product += a[i] * b[i];

    return product;
}

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    int four_by_four[4][4] = {-7,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8};
    std::vector<int> vec_4 = {10,20,30,40};

    std::cout<<"Product vector:\n===\n";
    for(int i = 0; i < sizeof(four_by_four)/sizeof(four_by_four[0]); i++)
    {
        std::cout<<dot_product(four_by_four[i],vec_4)<<"\n";
    }
    std::cout<<"===";

    return 0;
}