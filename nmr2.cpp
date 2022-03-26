#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "input angka perulangan bintang : ";
    cin >> x;
    for (int a = 1; a <= x; a++)
    {
        if (a > 1)
        {
            cout << " " << endl;
        }
        for (int b = 1; b <= a; b++)
        {
            cout << "*";
        }
    }
    cout << endl;
    return 0;
}