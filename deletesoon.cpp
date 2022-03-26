#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        cout << " " << endl;
        for (j = i; j <= 5; j++)
        {
            cout << "*";
        }
    }
    return 0;
}