#include "DATA.h"

using namespace std;

int main()
{
    int menu = 1;
    int secmenu =1;
    int secmenu1 =1;
    char submenu = 'Y';
    Daerah A;
    Potensi B;
    Relasi C;
    buatListDaerah(A);
    buatListPotensi(B);
    buatListRelasi(C);
    adrDaerah P;
    adrPotensi Q;
    adrRelasi R;
    string infoDaerah;
    string infoPotensi;

//SAVE DATA
{
    buatDataDaerah("BANDUNG",P);
    insertDaerah(A,P);
    buatDataDaerah("JAKARTA",P);
    insertDaerah(A,P);
    buatDataDaerah("BOGOR",P);
    insertDaerah(A,P);
    buatDataDaerah("SURABAYA",P);
    insertDaerah(A,P);
    buatDataDaerah("PAPUA",P);
    insertDaerah(A,P);
    buatDataDaerah("BUKITTINGGI",P);
    insertDaerah(A,P);

    buatDataPotensi("KELAPA SAWIT",Q);
    insertFirstPotensi(B,Q);
    buatDataPotensi("BATU BARA",Q);
    insertFirstPotensi(B,Q);
    buatDataPotensi("GAS ALAM",Q);
    insertFirstPotensi(B,Q);
    buatDataPotensi("EMAS",Q);
    insertFirstPotensi(B,Q);
    buatDataPotensi("MINYAK BUMI",Q);
    insertFirstPotensi(B,Q);

    P = searchDaerah(A,"BUKITTINGGI");
    Q = searchPotensi(B,"EMAS");
    buatRelasi(P,Q,R);
    insertLastRelasi(C,R);

    P = searchDaerah(A,"BUKITTINGGI");
    Q = searchPotensi(B,"KELAPA SAWIT");
    buatRelasi(P,Q,R);
    insertLastRelasi(C,R);

    P = searchDaerah(A,"BUKITTINGGI");
    Q = searchPotensi(B,"BATU BARA");
    buatRelasi(P,Q,R);
    insertLastRelasi(C,R);

    P = searchDaerah(A,"SURABAYA");
    Q = searchPotensi(B,"GAS ALAM");
    buatRelasi(P,Q,R);
    insertLastRelasi(C,R);

    P = searchDaerah(A,"SURABAYA");
    Q = searchPotensi(B,"EMAS");
    buatRelasi(P,Q,R);
    insertLastRelasi(C,R);

    P = searchDaerah(A,"SURABAYA");
    Q = searchPotensi(B,"KELAPA SAWIT");
    buatRelasi(P,Q,R);
    insertLastRelasi(C,R);

    P = searchDaerah(A,"BOGOR");
    Q = searchPotensi(B,"BATU BARA");
    buatRelasi(P,Q,R);
    insertLastRelasi(C,R);

    P = searchDaerah(A,"JAKARTA");
    Q = searchPotensi(B,"GAS ALAM");
    buatRelasi(P,Q,R);
    insertLastRelasi(C,R);
}


    system("CLS");
        system("color F3");
        gotoxy(9,10);
        cout<< "==============================================================";
        gotoxy(9,11);
        cout<< "----------- APLIKASI DATA POTENSI DAERAH INDONESIA -----------";
        gotoxy(9,12);
        cout<< "==============================================================";
        Sleep(2250);
    while(menu != 0) {
{   //VIEW
        {system("CLS");//view
        system("color F3");
        gotoxy(8,3);
        cout<< "  ==============================================================";
        gotoxy(8,4);
        cout<< " |                                                              | ";
        gotoxy(8,5);
        cout<< " |----------------- DATA POTENSI DAERAH INDONESIA --------------| ";
        gotoxy(8,6);
        cout<< " |                                                              | ";
        gotoxy(8,7);
        cout<< "  --------------------------------------------------------------  ";
        gotoxy(8,8);
        cout<< " |                                                              | ";
        gotoxy(8,9);
        cout<< " |   1. Input Data Daerah                                       | ";
        gotoxy(8,10);
        cout<< " |                                                              |";
        gotoxy(8,11);
        cout<< " |   2. Input Data Potensi Daerah                               | ";
        gotoxy(8,12);
        cout<< " |                                                              |";
        gotoxy(8,13);
        cout<< " |   3. Link Data Daerah & Potensi                              |";
        gotoxy(8,14);
        cout<< " |                                                              |";
        gotoxy(8,15);
        cout<< " |   4. Cek Data                                                |";
        gotoxy(8,16);
        cout<< " |                                                              | ";
        gotoxy(8,17);
        cout<< " |   5. Delete Data                                             |";
        gotoxy(8,18);
        cout<< " |                                                              | ";
        gotoxy(8,19);
        cout<< " |   0. Exit                                                    |";
        gotoxy(8,20);
        cout<< " |                                                              | ";
        gotoxy(8,21);
        cout<< "  ==============================================================";
        cout<< "                                                                 Pilih : ";
        gotoxy(64,22);}
        cin>>menu;}
        switch(menu) {
        case 1:
            submenu = ' ';
            while(submenu!= 'N') {
{               system("CLS");//view
                gotoxy(8,1);
                cout<< "  ==============================================================";
                gotoxy(8,2);
                cout<< " |                                                              | ";
                gotoxy(8,3);
                cout<< " |----------------------- INPUT DATA DAERAH --------------------| ";
                gotoxy(8,4);
                cout<< " |                                                              | ";
                gotoxy(8,5);
                cout<< "  --------------------------------------------------------------  ";
                cout<<endl;
                cout<<endl;
                cout<<endl;
                gotoxy(15,11);
                cout<<"     Nama Daerah     : ";
                gotoxy(37,11);}
                getline(cin>>ws,infoDaerah);
                cout<<endl;
                buatDataDaerah(infoDaerah,P);
                insertDaerah(A,P);
                gotoxy(44,22);
                cout<<"Ingin menambahkan lagi?(Y/N): ";
                gotoxy(73,22);
                cin>>submenu;
                cout<<endl;
            }
            break;
        case 2:
            submenu = ' ';
            while(submenu!= 'N'){
                system("CLS");
                gotoxy(8,1);
                cout<< "  ==============================================================";
                gotoxy(8,2);
                cout<< " |                                                              | ";
                gotoxy(8,3);
                cout<< " |----------------------- INPUT DATA POTENSI -------------------| ";
                gotoxy(8,4);
                cout<< " |                                                              | ";
                gotoxy(8,5);
                cout<< "  --------------------------------------------------------------  ";
                cout<<endl;
                cout<<endl;
                cout<<endl;
                gotoxy(15,11);
                cout<<"     Potensi     : ";
                getline(cin>>ws,infoPotensi);
                buatDataPotensi(infoPotensi,Q);
                insertFirstPotensi(B,Q);
                gotoxy(44,22);
                cout<<"Ingin menambahkan lagi?(Y/N): ";
                gotoxy(73,22);
                cin>>submenu;
                cout<<endl;
            }
            break;
        case 3:

            submenu = ' ';
            while(submenu!= 'N') {
                system("CLS");
                printALLPotensi(B);
                printALLDaerah(A);
                cout<<endl;
                cout<<endl;
                cout<<"             Masukan Nama Daerah & Potensi yang Ingin Direlasikan!"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                     Daerah       : ";
                getline(cin>>ws,infoDaerah);
                P = searchDaerah(A,infoDaerah);
                cout<<"                     Potensi      : ";
                getline(cin>>ws,infoPotensi);
                Q = searchPotensi(B,infoPotensi);
                adrRelasi Z =  searchRelasi(C,infoDaerah,infoPotensi);
                if( Z != NULL){
                    cout<<endl;
                    cout<<endl;
                    cout<<"                     TIDAK DAPAT MEMBUAT DUPLIKASI RELASI";
                    jumlahPotensi(P)--;
                }
                else if(P != NULL && Q != NULL) {
                    buatRelasi(P,Q,R);
                    insertLastRelasi(C,R);
                    cout<<endl;
                    cout<<endl;
                    cout<<"\                              Berhasil Membuat Relasi "<<endl;}
                else {
                    jumlahPotensi(P)--;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                               DAERAH / POTENSI TAK ADA"<<endl;
                }
                cout<<endl;
                gotoxy(37,22);
                cout<<"Ingin menambahkan relasi lagi?(Y/N): ";
                gotoxy(73,22);
                cin>>submenu;
                cout<<endl;
                    }
                break;

        case 4:
            secmenu =1;
            while(secmenu != 0) {
{   //VIEW
        system("CLS");
            system("color F3");
            gotoxy(8,3);
            cout<< "  ==============================================================";
            gotoxy(8,4);
            cout<< " |                                                              | ";
            gotoxy(8,5);
            cout<< " |----------------- DATA POTENSI DAERAH INDONESIA --------------| ";
            gotoxy(8,6);
            cout<< " |                                                              | ";
            gotoxy(8,7);
            cout<< "  --------------------------------------------------------------  ";
            gotoxy(8,8);
            cout<< " |                                                              | ";
            gotoxy(8,9);
            cout<< " |   1. Menampilkan Seluruh Data Daerah Beserta Potensi         | ";
            gotoxy(8,10);
            cout<< " |                                                              |";
            gotoxy(8,11);
            cout<< " |   2. Menampilkan Data Berdasarkan Data Daerah                | ";
            gotoxy(8,12);
            cout<< " |                                                              |";
            gotoxy(8,13);
            cout<< " |   3. Menampilkan Data Berdasarkan Data Potensi               |";
            gotoxy(8,14);
            cout<< " |                                                              |";
            gotoxy(8,15);
            cout<< " |   4. Menampilakn Daerah Dari yang Terkaya|";
            gotoxy(8,16);
            cout<< " |                                                              | ";
            gotoxy(8,17);
            cout<< " |   5. Menampilakn Daerah Dari yang Termiskin                  |";
            gotoxy(8,18);
            cout<< " |                                                              | ";
            gotoxy(8,19);
            cout<< " |   0. Menu Utama                                              |";
            gotoxy(8,20);
            cout<< " |                                                              | ";
            gotoxy(8,21);
            cout<< "  ==============================================================";
            cout<< "                                                                 Pilih : ";
            gotoxy(64,22);
            cin>>secmenu;}  ///
            switch(secmenu) {
            case 1:
                        system("CLS");
                        printALL(A,B,C);
                        getche();
                        break;

            case 2:
                submenu = ' ';
                while(submenu!= 'N'){
                system("CLS");
                printALLDaerah1(A);
                cout<<endl;
                gotoxy(8,1);
                cout<< "  ==============================================================";
                gotoxy(8,2);
                cout<< " |                                                              | ";
                gotoxy(8,3);
                cout<< " |-------------- PRINT POTENSI BERDASARKAN DAERAH --------------| ";
                gotoxy(8,4);
                cout<< " |                                                              | ";
                gotoxy(8,5);
                cout<< "  --------------------------------------------------------------  ";
                cout<<endl;
                cout<<endl;
                cout<<endl;
                gotoxy(15,16);
                cout<<"     Daerah     : ";
                    getline(cin>>ws,infoDaerah);
                    P = searchDaerah(A,infoDaerah);
                    jumlahPotensi(P) = jumlahPotensi(P)- 1;
                    if(jumlahPotensi(P)!=0){
                        if(P != NULL){
                            if(!isEmptyPotensi(B)){
                                printDaerah(C,A,infoDaerah);
                            }
                        }
                    }
                    else{
                        cout<<endl;
                        cout<<endl;
                        cout<<"                 DAERAH TERSEBUT TIDAK MEMILIKI POTENSI "<<endl;
                    }
                    cout<<endl;
                gotoxy(37,22);
                cout<<"Ingin menampilkan relasi lagi?(Y/N): ";
                gotoxy(73,22);
                cin>>submenu;
                cout<<endl;
                }
                break;

            case 3:
                submenu = ' ';
                while(submenu!= 'N'){
                    system("CLS");
                    printALLPotensi1(B);
                    gotoxy(8,1);
                    cout<< "  ==============================================================";
                    gotoxy(8,2);
                    cout<< " |                                                              | ";
                    gotoxy(8,3);
                    cout<< " |-------------- PRINT POTENSI BERDASARKAN POTENSI --------------| ";
                    gotoxy(8,4);
                    cout<< " |                                                              | ";
                    gotoxy(8,5);
                    cout<< "  --------------------------------------------------------------  ";
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    gotoxy(15,16);
                    cout<<"     Potensi    : ";
                    getline(cin>>ws,infoPotensi);
                    Q = searchPotensi(B,infoPotensi);
                    if(Q!= NULL){
                        if(!isEmptyDaerah(A)){
                            printPotensi(C,B,infoPotensi);
                        }
                        else{
                            cout<<"\n   Belum ada relasi"<<endl;
                        }
                    }
                    else{
                        cout<<"\n                       DATA POTENSI TERSEBUT BELUM DIINPUTKAN"<<endl;
                    }
                    gotoxy(37,22);
                    cout<<"Ingin menampilkan relasi lagi?(Y/N): ";
                    gotoxy(73,22);
                    cin>>submenu;
                    cout<<endl;

                }
                break;

            case 4:
                        system("CLS");
                        sortDaerahD(A);
                        getche();
                        break;

            case 5:
                        system("CLS");
                        sortDaerahU(A);
                        getche();
                        break;
            }
            }
            break;

        case 5:

            secmenu1 =1;
            while(secmenu1 != 0) {
{

            system("CLS");
            system("color F3");
            gotoxy(8,3);
            cout<< "  ==============================================================";
            gotoxy(8,4);
            cout<< " |                                                              | ";
            gotoxy(8,5);
            cout<< " |----------------- DATA POTENSI DAERAH INDONESIA --------------| ";
            gotoxy(8,6);
            cout<< " |                                                              | ";
            gotoxy(8,7);
            cout<< "  --------------------------------------------------------------  ";
            gotoxy(8,8);
            cout<< " |                                                              | ";
            gotoxy(8,9);
            cout<< " |                                                              | ";
            gotoxy(8,10);
            cout<< " |                                                              |";
            gotoxy(8,11);
            cout<< " |   1. Delete Data Berdasarkan Daerah                          | ";
            gotoxy(8,12);
            cout<< " |                                                              |";
            gotoxy(8,13);
            cout<< " |                                                              |";
            gotoxy(8,14);
            cout<< " |                                                              |";
            gotoxy(8,15);
            cout<< " |   2. Delete Data Berdasarkan Potensi                         |";
            gotoxy(8,16);
            cout<< " |                                                              | ";
            gotoxy(8,17);
            cout<< " |                                                              |";
            gotoxy(8,18);
            cout<< " |                                                              | ";
            gotoxy(8,19);
            cout<< " |   0. Menu Utama                                              |";
            gotoxy(8,20);
            cout<< " |                                                              | ";
            gotoxy(8,21);
            cout<< "  ==============================================================";
            cout<< "                                                                 Pilih : ";
            gotoxy(64,22);
            cin>>secmenu1;}
            switch(secmenu1) {
            case 1:
            submenu = ' ';
            while(submenu!= 'N') {
                system("CLS");
                    printALL(A,B,C);
                    getche();
                    system("CLS");
                    gotoxy(8,1);
                    cout<< "  ==============================================================";
                    gotoxy(8,2);
                    cout<< " |                                                              | ";
                    gotoxy(8,3);
                    cout<< " |-------------- DELETE DATA BERDASARKAN DAERAH ---------------| ";
                    gotoxy(8,4);
                    cout<< " |                                                              | ";
                    gotoxy(8,5);
                    cout<< "  --------------------------------------------------------------  ";
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    gotoxy(12,13);
                cout<<"     Daerah yg ingin di delete: ";
                cin>>infoDaerah;
                P = searchDaerah(A,infoDaerah);
                if (P != NULL) {
                    deleteDaerah(A,C,P,infoDaerah);
                    delete(P);
                    system("CLS");
                    gotoxy(23,11);
                    cout<<"Daerah "<<infoDaerah<<" berhasil di Delete"<<endl;
                }
                else{
                    gotoxy(28,18);
                    cout<<"Daerah tidak ditemukan"<<endl;
                }
                gotoxy(37,22);
                cout<<"Ingin Menghapus Daerah lagi?(Y/N): ";
                gotoxy(73,22);
                cin>>submenu;
                cout<<endl;
            }
            break;

            case 2:
                submenu = ' ';
            while(submenu!= 'N') {
                system("CLS");
                printALL(A,B,C);
                getche();
                system("CLS");
                 gotoxy(8,1);
                    cout<< "  ==============================================================";
                    gotoxy(8,2);
                    cout<< " |                                                              | ";
                    gotoxy(8,3);
                    cout<< " |-------------- DELETE DATA BERDASARKAN POTENSI ---------------| ";
                    gotoxy(8,4);
                    cout<< " |                                                              | ";
                    gotoxy(8,5);
                    cout<< "  --------------------------------------------------------------  ";
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    gotoxy(12,13);
                cout<<"     Potensi yg ingin di delete: ";
                getline(cin>>ws,infoPotensi);
                Q = searchPotensi(B,infoPotensi);
                if (Q != NULL){
                    deletePotensi(B,C,Q,infoPotensi);
                    system("CLS");
                    gotoxy(23,11);
                    cout<<"Potensi "<<infoPotensi<<" berhasil di Delete"<<endl;
                }
                else{
                    gotoxy(28,18);
                    cout<<"Potensi tidak ditemukan"<<endl;
                }
                gotoxy(42,22);
                cout<<"Ingin Menghapus Potensi lagi?(Y/N): ";
                gotoxy(78,22);
                cin>>submenu;
                cout<<endl;
            }
            break;
            }
            }
            break;

}
}
return 0;
        }




