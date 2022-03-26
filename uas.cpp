#include<iostream>

using namespace std;
int main ()
{
    int kode,price,jml,total,byr,kbl;
    char mad;
    do
    {
    cout<<"          Burger Fenomenal           "<<endl;
    cout<<" Fitur Pemesanan Makanan dan Minuman        "<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
   
    cout<<"Menu Makanan                "<<endl;
    cout<<"1. Chicken Burger         Rp. 20.000"<<endl;
    cout<<"2. Beef Burger            Rp. 25.000"<<endl;
    cout<<"3. Milkshake              Rp. 10.000"<<endl;
    cout<<"4. Ice Tea                Rp.  5.000"<<endl;
    cout<<'\n'<<"MASUKKAN PILIHAN ANDA :";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<'\n'<<"Chicken Burger"<<endl;
        price=20000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            total=price*jml;
        cout<<"Total harga : Rp. "<<total<<endl;
        cout<<"Dibayar : Rp. ";
        cin>>byr;
            kbl=byr-total;
        cout<<"Kembali : Rp. "<<kbl<<endl;
        cout<<"Masih ada pesanan lain (Y/T) :";
        cin>>mad;
        break;
    case 2:
        cout<<'\n'<<"Beef Burger"<<endl;
            price=25000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            total=price*jml;
        cout<<"Total harga : Rp. "<<total<<endl;
        cout<<"Dibayar : Rp. ";
        cin>>byr;
            kbl=byr-total;
        cout<<"Kembali : Rp. "<<kbl<<endl;
        cout<<"Masih ada pesanan lain (Y/T) :";
        cin>>mad;
        break;
    case 3:
        cout<<'\n'<<"Milkshake"<<endl;
            price=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            total=price*jml;
        cout<<"Total harga : Rp. "<<total<<endl;
        cout<<"Dibayar : Rp. ";
        cin>>byr;
            kbl=byr-total;
        cout<<"Kembali : Rp. "<<kbl<<endl;
        cout<<"Masih ada pesanan lain (Y/T) :";
        cin>>mad;
        break;
    case 4:
        cout<<'\n'<<"Ice Tea"<<endl;
            price=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            total=price*jml;
        cout<<"Total harga : Rp. "<<total<<endl;
        cout<<"Dibayar : Rp. ";
        cin>>byr;
            kbl=byr-total;
        cout<<"Kembali : Rp. "<<kbl<<endl;
        cout<<"Masih ada pesanan lain (Y/T) :";
        cin>>mad;
        break;
    default:
    cout<<"Kode Yang Anda Masukkan Tidak Ada \n";
    }
    }
    while (mad/='Y');
    cout<<"Terimah Kasih Atas Pesanan Anda";
    return 0;
}