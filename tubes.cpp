#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;


void mainmenu()
{
    char item[20], item2[20], pil[20], pil2[20];
    int pilihan,pilih, pilih2;
    
    system("CLS");
    cout <<"===============#####=====#####=====    SELAMAT DATANG GUYS    =====#####=====#####==========" << endl;
    cout <<"                   =====#####=====#####    DI APLIKASI    #####=====#####====="               << endl;
    cout <<"                               =====#####    COOKREC    #####====="                           << endl;
    cout << endl;
    cout <<"| 1. Makanan Nusantara |\t\n| 2. Minuman Nusantara |" << endl;
    cout <<"Silahkan pilih menu nusantara yang anda Inginkan = " ; cin  >> pilihan;
    
    switch(pilihan)
    {case 1:
        strcpy(item,"Makanan Nusantara");
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<< endl;
        cout << "Anda memilih " << item <<endl;
        cout << endl;
        cout << "| 1. Coto Makassar        |\t\n| 2. Nasi Goreng Jawa     |\t\n| 3. Mie Aceh             |\t\n| 4. Sambal Embe Bali     |\t\n| 5. Ayam Lodho           |\t\n| 6. Rendang Padang       |\t\n| 7. Garang Asam Iga Sapi |"<< endl;
        cout << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<< endl;
        cout << "Silahkan pilih menu yang anda inginkan = " ; cin >> pilih ;
       if(pilih==1)
        {   strcpy(pil,"Coto Makassar");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil <<endl;
            cout << endl;
            cout << "- 500 gram daging sapi sandung lamur\t\n- 200 gram jantung sapi, rebus matang\t\n- 300 gram hati sapi, rebus matang\t\n- 500 gram babat, rebus matang\t\n- 200 gram kacang tanah, goreng dan haluskan\t\n- 4 cm lengkuas, memarkan\t\n- 6 batang serai, memarkan\t\n- 3 cm jahe, memarkan\t\n- 5 lembar daun salam\t\n- 2 liter air cuci beras\t\n- 6 sdm minyak sayur\t\n- 1 sdm bumbu kaldu bubuk rasa sapi\t\n- 1 sdm ketumbar, sangrai\t\n- 1 sdt jintan, sangrai\t\n- 1 sdt garam\t\n- 1 sdt merica butiran\t\n- 9 butir kemiri, sangrai\t\n- 13 siung bawang putih\t\n \t\nCara Membuat :\t\n1. Rebus daging sapi, babat, hati, dan jantung. Beri serai, lengkuas, jahe, dan salam. Setelah matang, angkat dan tiriskan. Potong dadu jeroan dan daging. Sisihkan.\t\n2. Panaskan minyak. Tumis bumbuhalus hingga harum. Masukkan ke dalam kaldu. Tambahkan kacang tanah goreng, didihkan.\t\n3. Saran penyajian: siapkan mangkuk. Isi dengan daging dan jeroan, tuang kuah. Taburi bawang goreng, irisan daun bawang, dan seledri. Sajikan coto makassar dengan buras dan sambal taoco."<< endl;
            string pil;
            cout << endl; 
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }

        }
       if (pilih==2)
        {   strcpy(pil,"Nasi Goreng Jawa");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil <<endl;
            cout << endl;
            cout << "- 1 mangkok nasi putih yang sudah disimpan di kulkas semalaman\t\n- 4 siung bawang merah\t\n- 2 siung bawang putih\t\n- 4 buah lombok merah atau sesuai selera\t\n- Kecap sesuai selera\t\n- secukupnya Garam\t\n- 1 butir telur\t\n- Bisa ditambahkan potongan kol, tomat, daun bawang\t\n \t\nCara Membuat :\t\n1. Haluskan bumbu dan sangrai sampai harum.\t\n2. Goreng telur, bisa utuh atau diorak arik sesuai selera\t\n3. Masukkan nasi dingin dan kecap. Campur sampai rata. Cicipi jika kurang asin bisa ditambahkan garam.\t\n4. Sajikan bersama irisan kol, tomat, mentimun dan krupuk"<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }

        }
       if (pilih==3)
        {   strcpy(pil,"Mie Aceh");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil <<endl;
            cout << "- 250 gram mi kering atau mi lidi (rebus hingga matang, lalu tiriskan)\t\n- 6 buah bawang merah\t\n- 4 buah bawang putih\t\n- 7 buah cabai merah\t\n- 10 buah cabai rawit\t\n- 1 buah tomat\t\n- 1 ruas jahe\t\n- 4 butir kemiri sangrai\t\n- 2 butir telur kocok\t\n- 1 sdm bubuk kari\t\n- 3 sdm kecap manis\t\n- 2 sdm kecap asin\t\n- 1 cangkir air\t\n- garam dan gula secukupnya\t\n- kol, sawi, dan seledri iris secukupnya\t\n- penyedap bubuk secukupnya\t\n- minyak goreng secukupnya\t\n \t\nCara Membuat :\t\n1. Haluskan bawang merah, bawang putih, cabai merah, cabai rawit, kemiri, dan tomat.\t\n2. Panaskan minyak, tumis bumbu yang telah dihaluskan hingga harum. Masukkan telur, aduk-aduk sampai rata dan telur kaku.\t\n3. Masukkan sayur-sayuran dan air. Aduk-aduk sebentar, kemudian masukkan semua bahan kecuali mi. Aduk kembali hingga rata.\t\n4. Masukkan mi. Aduk kembali hingga rata dan cek rasa.\t\n5. Jika sudah pas, angkat, dan mi aceh sederhana siap disajikan."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        }
        if(pilih==4)
        {   strcpy(pil,"Sambal Embe Bali");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil <<endl;
            cout << endl;
            cout << "- 5 butir bawang merah\t\n- 2 siung bawang putih\t\n- 15 buah cabe rawit\t\n- 5 buah cabe merah keriting\t\n- 1/2 sdt terasi bakar\t\n- 1/2 iris jeruk nipis\t\n- Garam (sesuai selera)\t\n- Gula (sesuai selera)\t\n \t\nCara Membuat :\t\n1. Siapkan semua bahan. Iris bawang merah, bawang putih, dan cabe.\t\n2. Tumis bawang merah dan bawang putih hingga harum dan matang. Masukan cabe tumis sampai cabe layu. Selanjutnya masukan terasi, garam dan gula.\t\n3. Aduk sampai rata. Terakhir kucurkan air perasan jeruk nipis. Sambal embe sudah matang, siap disajikan."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }

        }
        if(pilih==5)
        {   strcpy(pil,"Ayam Lodho");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil <<endl;
            cout << endl;
            cout << "- 1 ekor ayam kampung\t\n- 1 butir kelapa, kupas, parut, ambil 250 ml santan kental dan 500 ml santan encer\t\n- 10 butir bawang merah\t\n- 10 siung bawang putih\t\n- 3 (5 cm)ruas jari kunyit\t\n- 2 (4 cm) ruas jari jahe\t\n- 1 (2 cm) ruas jari kencur\t\n- 2 cabai merah keriting, rebus\t\n- 2 sdt garam\t\n- 1 sdm merica butiran, tumbuk kasar\t\n- 1 sdm ketumbar, tumbuk kasar\t\n- 1 sdt jintan\t\n- 100 g cabai rawit\t\n- 1 jempol (3 cm) lengkuas, iris kasar\t\n- 3 batang serai, memarkan\t\n- 3 lembar daun jeruk purut\t\n- 2 lembar daun salam\t\n \t\nCara Membuat :\t\n1. Belah ayam dari bagian dada depan ke bawah, lalu bentangkan ayam hingga terbuka lebar.\t\n2. Lumuri garam dan bakar di atas bara api hingga setengah matang.\t\n3. Tumis bumbu kasar hingga wangi.\t\n4. Masukkan bumbu halus, aduk hingga wangi dan matang.\t\n5. Tambahkan santan encer ke dalam tumisan, didihkan.\t\n6. Masukkan ayam bakar ke dalam wajan, tambahkan serai, daun salam dan daun jeruk purut.\t\n7. Teruskan memasak dengan api kecil sampai mendidih.\t\n8. Tambahkan santan kental. Teruskan memasak dengan api kecil sampai kuahnya menjadi sangat kental."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }

        }
        if(pilih==6)
        {   strcpy(pil,"Rendang Padang");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil <<endl;
            cout << endl;
            cout << "Bahan :\t\n- 1 kg daging sapi\t\n- 3 butir kelapa, diambil santan kental dan santan encernya\t\n- 4 lembar daun jeruk\t\n- 3 batang serai, memarkan\t\n- 4 butir asam kandis\t\n- 100ml minyak goreng\t\n- 5 gram garam\t\n \t\nBumbu :\t\n- 60 g bawang merah\t\n- 50 g bawang putih\t\n- 250 g cabai merah besar\t\n- 100 g lengkuas\t\n- 50 g kemiri\t\n- 2 g cengkeh\t\n \t\nCara Membuat :\t\n1. Haluskan semua bahan Bumbu dengan diulek atau dblender.\t\n2. Tumis bumbu dengan sedikit minyak goreng hingga wangi.\t\n3. Masukkan batang serai, daun jeruk, asam kandis dan garam, aduk rata.\t\n4. Tuangi santan dan dididihkan, masukkan daging.\t\n5. Masak dengan api kecil selama beberapa jam sampai daging empuk dan bumbu kecoklatan sesuai selera."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }

        }
         if(pilih==7)
        {   strcpy(pil,"Garang Asam Iga Sapi");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil <<endl;
            cout << endl;
            cout << "- 500 g iga sapi potongan\t\n- 2 liter air\t\n- 5 butir bawang merah\t\n- 3 siung bawang putih\t\n- 3 buah cabai merah besar\t\n- 3 buah cabai hijau besar\t\n- 8 buah belimbing sayur, potong kasar\t\n- 1 cm lengkuas, memarkan\t\n- 2 lembar daun salam\t\n- 100 ml kecap manis\t\n- 1 sdt merica bubuk\t\n- 2 sdt garam\t\n- 1 sdt gula pasir\t\n- 1 buah tomat merah, potong-potong\t\n- 10 buah cabai rawit merah\t\n \t\nCara Membuat :\t\n1. Potong-potong iga sapi dan cuci hingga bersih lalu tiriskan.\t\n2. Didihkan air dalam panci.\t\n3. Masukkan iga sapi dan masak dengan api kecil hingga seluruh busa dan kotoran mengambang di permukaan panci.\t\n4. Angkat kotoran dan busanya.\t\n5. Sementara itu, bakar bawang merah dan abwang putih di atas api kompor hingga sedikit gosong.\t\n6. Bakar juga cabai merah dan cabai hijau."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }

        }
        if (pilih>7)
        {   cout << endl;
            cout << "Pilihan menu yang anda pilih tidak tersedia...";
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
            }
        
        
     break;
        
     case 2:
        strcpy(item2,"Minuman Nusantara");
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<< endl;
        cout << "Anda memilih " << item2 <<endl;
        cout << endl;
        cout << "| 1. Es Cendol   |\t\n| 2. Sekoteng    |\t\n| 3. Wedang jahe |\t\n| 4. Es Kuwut    |\t\n| 5. Bir Pletok  |\t\n| 6. Es Podeng   |\t\n| 7. Es Kopyor   |             "<< endl;
        cout << endl;
        cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
        cout << "Silahkan pilih menu yang anda inginkan = " ; cin >> pilih2 ;
       if(pilih2==1)
        {   strcpy(pil2,"Es Cendol ");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil2 <<endl;
            cout << endl;
            cout << "Bahan Utama :\t\n- 200 gram tepung hunkwe\t\n- 100 gram tepung beras\t\n- 1 sdm tepung kanji\t\n- air daun suji secukupnya\t\n- air kapur sirih secukupnya\t\n- air daun pandan secukupnya\t\n- garam\t\n- air secukupnya untuk merendam cendol yang sudah dicetak\t\n \t\n- Bahan kuah santan:\t\n- 2 lembar daun pandan\t\n- Garam\t\n \t\n- Bahan gula merah:\t\n- 200 ml air putih\t\n- 400 gram gula merah, iris halus\t\n- 100 gram gula pasir\t\n- 2 lembar daun pandan\t\n \t\nCara Membuat Cendol :\t\n1. Masukkan tepung hunkwe, tepung beras, kanji, air daun suji, air daun pandan, air kapur sirih, dan garam ke dalam panci. Aduk adonan sampai mengental.\t\n2. Setelah mengental dan menggumpal, angkat. Siapkan baskom berisi air dan es batu.\t\n3. Simpan saringan di atas baskom.\t\n4. Ambil adonan cendol yang sudah dingin, lalu letakkan di atas cetakan.\t\n5. Tekan adonan cendol hingga keluar dari saringan. Lakukan hingga adonan cendol habis.\t\n6. Tiriskan cendol yang sudah jadi, lalu sisihkan.\t\n \t\nCara Membuat pemanis Cendol :\t\n1. Masak air dan gula merah secara bersamaan.\t\n2. Masukkan daun pandan dan garam\t\n3. Masak gula merah hingga larut dan mendidih, pastikan diaduk sesekali biar gak gosong.\t\n4. Setelah mendidih, angkat dan diamkan hingga dingin.\t\n \t\nCara memasak kuah santan :\t\n1. Masak santan, air, garam, dan daun pandan. Aduk terus hingga mendidih.\t\n2. Jika sudah mendidih, angkat, lalu dinginkan.\t\n3. Taruh cendol ke dalam mangkuk atau gelas.\t\n4. Masukkan kuah santan dan gula merah ke dalam mangkuk atau gelas.\t\n5. Supaya lebih nikmat, tambahkan sedikit potongan buah nangka.\t\n6. Es cendol khas Bandung siap dihidangkan."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        }
       if (pilih2==2)
        {   strcpy(pil2,"Sekoteng");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil2 <<endl;
            cout << endl;
            cout << "Bahan air jahe :\t\n- 1500 ml air\t\n- 200 gram gula pasir 4\t\n- 400 gram jahe, dibakar\t\n- 2 lembar daun pandan, disimpulkan\t\n- 2 batang serai, dimemarkan\t\n \t\n- Bahan pelengkap :\t\n- 100 gram kolang kaling, dipotong panjang, direbus\t\n- 25 gram sagu mutiara merah, direbus\t\n- 75 gram kacang tanah, disangrai\t\n- 25 gram pacar cina, direbus\t\n- 2 lembar roti tawar, dipotong kotak sekitar 2 cm\t\n- 50 gram kacang hijau, direbus\t\n \t\nTambahan rasa :\t\n- Santan cair secukupnya\t\n- Susu kental manis secukupny\t\n \t\nCara Membuat :\t\n1. Rebus air, gula pasir, jahe, daun pandan, dan serai di atas api kecil sampai mendidih dan harum.\t\n2. Rebus segala isian yang harus direbus.\t\n3. Jika isian sudah matang, tata di mangkuk. Siram rebusan air jahe ke mangkuk. Tambahkan santan cair dan susu kental manis sesuai selera."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        }
       if (pilih2==3)
        {   strcpy(pil2,"Wedang Jahe");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil2 <<endl;
            cout << endl;
            cout << "- 2 rimpang jahe, gewprek\t\n- 1 batang serai, memarkan\t\n- Gula aren atau gula jawa secukupnya\t\n- 1/2 sdt bubuk kayu manis atau 1 batang kayu manis (7-10 cm)\t\n- 1 liter air\t\n- Madu secukupnya\t\n \t\nCara Membuat :\t\n1. Siapkan wadah untuk merebus bahan minuman.\t\n2. Masukkan air ke wadah lalu panaskan dengan api sedang.\t\n3. Masukkan jahe, serai, gula aren dan kayu manis ke dalam air.\t\n4. Masak hingga mendidih dan jahe pun beraroma wangi.\t\n5. Jika sudah mendidih, masukkan madu sesuai selera agar rasanya makin nikmat.\t\n6. Aduk sebentar lalu angkat. Saring air wedang dan masukkan ke gelas saji. Nikmati selagi hangat."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        }
        if(pilih2==4)
        {   strcpy(pil2,"Es Kuwut");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil2 <<endl;
            cout << endl;
            cout << "- 1/4 buah melon, diserut panjang\t\n- 1 sdm biji selasih, direndam air hangat\t\n- 1 buah jeruk nipis, iris tipis\t\n- 200 gram kelapa muda, diserut\t\n- 3 butir anggur, iris tipis\t\n- 500 ml air kelapa\t\n- sari kelapa (nata de coco) secukupnya\t\n- 1 sdt sirup melon\t\n- es batu secukupnya\t\n \t\nCara Membuat :\t\n1. Tuang air kelapa dalam gelas.\t\n2. Masukkan melon serut, nata de coco, kelapa muda, dan selasih.\t\n3. Tambahkan irisan anggur dan irisan jeruk nipis.\t\n4. Masukkan es batu secukupya."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        }
        if(pilih2==5)
        {   strcpy(pil2,"Bir Pletok");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil2 <<endl;
            cout << endl;
            cout << "- 2,5 liter ai\t\n- 3 batang serai, memarkan\t\n- 10 cm kayu manis\t\n- 200 gram jahe, dikupas lalu diiris tipis\t\n- 5 lembar daun pandan wangi, cuci bersih lalu potong 5 cm\t\n- 10 lembar daun jeruk purut, cuci bersih\t\n- 300 gram gula pasir\t\n- 5 butir cengkeh\t\n- 1 butir pala\t\n- 15 gram kayu secang\t\n- 5 butir kapulaga\t\n \t\nCara Membuat :\t\n1. Campur semua bahan. Rebus sampai mendidih biarkan selama 30 menit.\t\n2. Saring airnya.\t\n3. Bir pletok bisa langsung dinikmati selagi hangat. Bisa juga diberi es batu."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        }
        if(pilih2==6)
        {   strcpy(pil2,"Es Podeng");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil2 <<endl;
            cout << endl;
            cout << "- 1 bungkus agar-agar plain\t\n- 200 gram papaya setengah matang\t\n- 2 gelas air untuk merebus agar-agar\t\n- 200 gr nanas\t\n- 125 gr gula pasir\t\n- 125 ml air untuk membuat sirup\t\n- Air kapur sirih\t\n- Kayu manis, secukupnya\t\n- Es batu, secukupnya\t\n \t\nCara Membuat :\t\n1. Siapkan papaya dan potong-potong sesuai selera\t\n2. Masukkan ke dalam larutan air kapur sirih. Diamkan selama kurang lebih 1 jam, kemudian cuci dan rebus hingga bagian tengahnya empuk\t\n3. Rebus agar-agar ke dalam 2 gelas air. Setelah mendidih, tuangkan ke dalam wadah dan biarkan mengeras. Potong-potong sesuai selera\t\n4. Potong-potong nanas dan rebus dengan air secukupnya. Tambahkan kayu manis\t\n5. Buat sirup dengan merebus gula menggunakan 125 ml air\t\n6. Tata papaya, nanas, agar-agar, dan kuah air rebusan nanas ke dalam mangkuk atau gelas saji. Tambahkan es batu, siram menggunakan kuah sirup\t\n7. Es podeng siap disajikan"<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        }
        if(pilih2==7)
        {   strcpy(pil2,"Es Kopyor");
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<< endl;
            cout << "                       Resep " << pil2 <<endl;
            cout << endl;
            cout << "- 2 gelas air\t\n- es batu secukupnya\t\n- 1 bungkus agar-agar tanpa rasa\t\n- 500 ml santan kelapa\t\n- sirup coco pandan\t\n \t\nCara Membuat :\t\n1. Campur agar-agar, santan, dan air di panci. Masak dengan api sedang sambil terus diaduk perlahan. Matikan kompor ketika akan mendidih.\t\n2. Letakkan banyak es batu di gelas atau satu bongkah es batu di dalam wadah.\t\n3. Tuang adonan sedikit agar menghasilkan tekstur seperti kelapa kopyor.\t\n4. Setelah jadi, tuang sirup secukupnya."<< endl;
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        }
        if (pilih2>7)
        {
            cout << endl;
            cout << "Pilihlah menu yang anda pilih tidak tersedia...";
            string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        }
        

     break;
    
     default:
     cout << endl;
     cout << "Pilihan menu yang anda pilih tidak tersedia...";
     string pil;
            cout << endl;
            cout << "Balik ke menu nusantara ? (iya/tidak) : "; cin >> pil;

            if (pil == "iya"){
            mainmenu();
            } else {
            exit(0);
            }
        
    }
}

int main(){
mainmenu();
}