/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Dimension of the cube
    float cubeSide = 0;
    cout << "\nWhat is the side length of the cube?\n";
    cin >> cubeSide;

    //Dimension of sphere
    float sphereRadius = 0;
    cout << "\nWhat is the radius of the sphere?\n";
    cin >> sphereRadius;

    //Dimensions of cone
    float coneRadius = 0;
    float coneHeight = 0;
    cout << "\nWhat is the radius of the cone?\n";
    cin >> coneRadius;
    cout << "\nWhat is the height of the cone?\n";
    cin >> coneHeight;
    
    float volCube, volSphere, volCone = 0;
    volCube = pow(cubeSide,3);
    volSphere = (4.0/3.0) * M_PI * pow(sphereRadius,3);
    volCone = M_PI * pow(coneRadius,2) * (coneHeight/3);
    
    cout << "\nVolume of cube: " << volCube;
    cout << "\nVolume of sphere: " << volSphere;
    cout << "\nVolume of cone: " << volCone;
    
    return 0;
}