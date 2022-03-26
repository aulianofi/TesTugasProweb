#include<iostream>

using namespace std;
int main ()
{
    int code,price,qty,total,bayar,kembali;
    char mad;
    do
    {
    cout<<"          Burger Fenomenal            "<<endl;
    cout<<"Fitur Pemesanan Makanan dan Minuman "<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
   
    cout<<"Menu Makanan                Harga"<<endl;
    cout<<"============================================"<<endl;
    cout<<"1. Chicken Burger            Rp. 20.000"<<endl;
    cout<<"2. Beef Burger               Rp. 25.000"<<endl;
    cout<<"3. Ice Tea                   Rp.  5.000"<<endl;
    cout<<"4. Lemon Tea                 Rp.  7.000"<<endl;
    cout<<'\n'<<"MASUKKAN PILIHAN ANDA :";
    cin>>code;
    switch (code){
    case 1:
        cout<<'\n'<<"Chicken Burger"<<endl;
        price=20000;
        cout<<"Jumlah Pesanan :";
        cin>>qty;
            total=price*qty;
        cout<<"Total harga : Rp. "<<total<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>bayar;
            kembali=bayar-total;
        cout<<"KEMBALI : Rp. "<<kembali<<endl;
        cout<<"Masih ada yang ingin dipesan? Y/N :";
        cin>>mad;
        break;
    case 2:
        cout<<'\n'<<"Beef Burger"<<endl;
            price=25000;
        cout<<"Jumlah Pesanan :";
        cin>>qty;
            total=price*qty;
        cout<<"Total harga : Rp. "<<total<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>bayar;
            kembali=bayar-total;
        cout<<"KEMBALI : Rp. "<<kembali<<endl;
        cout<<"Masih ada yang ingin dipesan? Y/N :";
        cin>>mad;
        break;
    case 3:
        cout<<'\n'<<"Ice Tea"<<endl;
            price=5000;
        cout<<"Jumlah Pesanan :";
        cin>>qty;
            total=price*qty;
        cout<<"Total harga : Rp. "<<total<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>bayar;
            kembali=bayar-total;
        cout<<"KEMBALI : Rp. "<<kembali<<endl;
        cout<<"Masih ada yang ingin dipesan? Y/N :";
        cin>>mad;
        break;
    case 4:
        cout<<'\n'<<"Lemon Tea"<<endl;
            price=7000;
        cout<<"Jumlah Pesanan :";
        cin>>qty;
            total=price*qty;
        cout<<"Total harganya yaitu : Rp. "<<total<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>bayar;
            kembali=bayar-total;
        cout<<"KEMBALI : Rp. "<<kembali<<endl;
        cout<<"Masih ada yang ingin dipesan? Y/N :";
        cin>>mad;
        break;
    }
    while (mad/='Y');
    cout<<"Terimah Kasih Atas Kunjungan Anda";
    return 0;
}