#include <iostream>
#include <string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;

    std::cout<<"givenInt = "<<givenInt<<"\n";
    std::cout<<"givenInt address = "<<&givenInt<<"\n";
    
    std::cout<<"givenFloat = "<<givenFloat<<"\n";
    std::cout<<"givenFloat address = "<<&givenFloat<<"\n";

    std::cout<<"givenDouble = "<<givenDouble<<"\n";
    std::cout<<"givenDouble address = "<<&givenDouble<<"\n";

    std::cout<<"givenString = "<<givenString<<"\n";
    std::cout<<"givenString address = "<<&givenString<<"\n";

    std::cout<<"givenChar = "<<givenChar<<"\n";
    std::cout<<"givenChar address = "<<&givenChar<<"\n";

    return 0;
}