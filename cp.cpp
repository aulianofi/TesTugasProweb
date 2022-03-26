#include <iostream>
using namespace std;
int main(void)
{
  int nama;

  cout << "10201021_Calvin Dave Augustryan Koloay" << endl;
  cout << "1. Umur >= 17" << endl;
  cout << "2. Umur <= 17" << endl;
  cout << "3. Umur < 10" << endl;
  cout << "Masukkan pilihan sesuai umur anda: ";
  cin >> nama;

  switch (nama)
  {
    case 1 : cout << " Sudah cukup umur " << endl; break;
    case 2 : cout << " Belum cukup umur " << endl; break;
    case 3 : cout << " Masih anak-anak " << endl; break;
    default : cout << " Masukkan pilihan yang benar " << endl;
  }

  cout << endl;
  
  int x;
    cout << "10201021_Calvin Dave Augustryan Koloay" << endl;
    cout << "Masukkan Nilai Perulangan: ";
    cin >> x;
    for (int o = 1; o <= x; o++)
    {
        if (o > 1)
        {
            cout << " " << endl;
        }
        for (int y = o; y <= x; y++)
        {
            cout << "*";
        }
    }
    
  return 0;



}