#include<iostream>

using namespace std;

int main()
{

int a = 2;
int b = 3;
bool hasil;

///cout << "masukkan nilai a : ";
///cin >> a;
///cout << "masukkan nilai b : ";
///cin >> a;

//not
cout << "Not" << endl;
hasil = !(a == 2);
cout << hasil << endl;
hasil = (b == 4);
cout << hasil << endl;

//lebih dari
cout << "lebih dari/kurang dari" << endl;
hasil = (a > 2);
cout << hasil << endl;
hasil = (b < 2);
cout << hasil << endl;

//lebih dari atau sama dengan, kurang dari atau sama dengan
cout << "lebih dari atau sama dengan, kurang dari atau sama dengan" << endl;
hasil = (a >= 2);
cout << hasil << endl;
hasil = (a <= b);
cout << hasil << endl;

cout << "operator and" << endl;
//operator and
hasil = (a==2) and (b==3); //true and true = 1
cout << hasil << endl;
hasil = (a==2) and (b==4); //true and false = 0
cout << hasil << endl;
hasil = (a==3) and (b==3); //false and true = 0
cout << hasil << endl;
hasil = (a==3) and (b==4); //false and false = 0
cout << hasil << endl;

cout << "operator or" << endl;
hasil = (a==2) or (b==3); //true and true = 1
cout << hasil << endl;
hasil = (a==2) or (b==4); //true and false = 1
cout << hasil << endl;
hasil = (a==3) or (b==3); //false and true = 1
cout << hasil << endl;
hasil = (a==3) or (b==4); //false and false = 0
cout << hasil << endl;

 return 0;   
}