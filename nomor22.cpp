#include <iostream>
using namespace std;

int main()
{
    int grade = 32;

    if ((grade >= 80) && (grade <= 100))
    {
        cout << "A";
    }
    else if ((grade >= 60) && (grade <= 79))
    {
        cout << "B";
    }
    else if ((grade >= 0) && (grade <= 59))
    {
        cout << "C";
    }
    else 
    {
        cout << "error";
    }
}