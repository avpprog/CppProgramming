/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define PI 3.1416
using namespace std;

int main()
{
    float radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    
    float area;
    area = PI * radius * radius;
    cout << "Area of circle is: " << area << endl;

    return 0;
}