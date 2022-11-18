/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include "cat.hpp"

int main()
{
    Cat cat1, cat2;

    cat1.setAge(6);
    cat1.setBreed("Calico");
    cat1.setName("Fluffy");

    cat2.setAge(3);
    cat2.setBreed("Tabby");
    cat2.setName("Garbage");

    cat1.printInfo();
    std::cout<<"\n";
    cat2.printInfo();

    return 0;
}