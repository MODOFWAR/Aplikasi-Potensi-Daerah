#include "DATA.h"

bool isEmptyDaerah(Daerah A) {
    return(firstDaerah(A) == NIL && lastDaerah(A) == NIL);}
bool isEmptyPotensi(Potensi B){
    return(firstPotensi(B) == NIL && lastPotensi(B) == NIL);}
bool isEmpty(Relasi C){
    return(firstRelasi(C) == NIL);}
void buatListDaerah(Daerah &A){
    firstDaerah(A) = NIL;
    lastDaerah(A) = NIL;}
void buatListPotensi(Potensi &B){
    firstPotensi(B) = NIL;
    lastPotensi(B) = NIL;}
void buatListRelasi(Relasi &C){
    firstRelasi(C) = NIL;}
void buatDataDaerah(string X, adrDaerah &P){
    P = new dataDaerah;
    infoDaerah(P) = X;
    nextDaerah(P) = NIL;
    prevDaerah(P) = NIL;
    jumlahPotensi(P) = 0;}
void buatDataPotensi(string X, adrPotensi &P) {
    P = new dataPotensi;
    infoPotensi(P) = X;
    nextPotensi(P) = NIL;
    prevPotensi(P) = NIL;}
void buatRelasi(adrDaerah X, adrPotensi Y, adrRelasi &P) {
    P = new listRelasi;
    toDaerah(P) = X;
    toPotensi(P) = Y;
    nextRelasi(P) = NIL;}
void insertLastRelasi(Relasi &C, adrRelasi P){
    adrRelasi Q = firstRelasi(C);
    if(firstRelasi(C) == NIL){
        firstRelasi(C) = P;
    }
    else {
        while(nextRelasi(Q) != NIL) {
            Q = nextRelasi(Q);
        }
        nextRelasi(Q) = P;}
    }
void insertFirstPotensi(Potensi &B, adrPotensi P){

    if (firstPotensi(B) == NIL) {
        firstPotensi(B) = P;
        lastPotensi(B) = P;
    }
    else {
        nextPotensi(P) = firstPotensi(B);
        prevPotensi(firstPotensi(B)) = P;
        firstPotensi(B) = P;}
    }
void insertDaerah(Daerah &A, adrDaerah P){

    adrDaerah Q = firstDaerah(A);
    if (Q == NIL){
        nextDaerah(P) = P;
        prevDaerah(P) = P;
        firstDaerah(A) = P;
        lastDaerah(A) = P;
    } else if (infoDaerah(Q) >= infoDaerah(P)) {
        while (nextDaerah(Q) != firstDaerah(A)){
            Q = nextDaerah(Q);
        }
        nextDaerah(Q) = P;
        prevDaerah(P) = Q;
        nextDaerah(P) = firstDaerah(A);
        prevDaerah(Q) = P;
        firstDaerah(A) = P;
    } else {
        while (nextDaerah(Q) != firstDaerah(A) && infoDaerah(nextDaerah(Q)) < infoDaerah(P)){
            Q = nextDaerah(Q);
        }
        nextDaerah(P) = nextDaerah(Q);
        prevDaerah(P) = Q;
        prevDaerah(nextDaerah(Q)) = P;
        nextDaerah(Q) = P;
    }
}
void printDaerah(Relasi C, Daerah A, string X) {
    adrRelasi Q = searchDaerahRelasi(C,searchDaerah(A,X));
    if(Q!= NULL) {
        cout<<"                    Potensi    : ";
        while(Q!= NULL) {
            if(infoDaerah(toDaerah(Q))==X){
                cout<<infoPotensi(toPotensi(Q))<<", ";
            }
            Q = nextRelasi(Q);
        }
    }
    else {
            cout<<endl;
            cout<<endl;
        cout<<"                         DAERAH TIDAK MEMILIKI POTENSI!"<<endl;}
    }
void printPotensi(Relasi C, Potensi B, string X) {
    adrRelasi Q = searchPotensiRelasi(C,searchPotensi(B,X));
    if(Q!= NULL) {
        cout<<"                    Daerah     : ";
        while(Q!= NULL) {
            if(infoPotensi(toPotensi(Q))==X){
                cout<<infoDaerah(toDaerah(Q))<<", ";
            }
            Q = nextRelasi(Q);
        }
    }
    else {
        cout<<endl;
            cout<<endl;
        cout<<"                 TIDAK ADA DAERAH YANG MEMILIKI POTENSI INI"<<endl;}
    }
void printALLPotensi(Potensi B) {
    adrPotensi Q = firstPotensi(B);
    if(firstPotensi(B) != NULL) {
            int y = 1;
            int No = 1;
            gotoxy(50,y);
            cout<<"   DATA POTENSI : ";
        while(Q!= NULL) {
            y = y+1;
            gotoxy(50,y);
            cout<<"    "<<No<<". "<<infoPotensi(Q)<<endl;
            Q = nextPotensi(Q);
            No = No + 1;
        }
    }
    else {

        gotoxy(50,2);
        cout<<"DATA POTENSI BELUM ADA!"<<endl;}
    }
void printALLPotensi1(Potensi B) {
    adrPotensi Q = firstPotensi(B);
    if(firstPotensi(B) != NULL) {
            int y = 7;
            int No = 1;
            gotoxy(25,y);
            cout<<"   DATA POTENSI : ";
        while(Q!= NULL) {
            y = y+1;
            gotoxy(25,y);
            cout<<"    "<<No<<". "<<infoPotensi(Q)<<endl;
            Q = nextPotensi(Q);
            No = No + 1;
        }
    }
    else {

        gotoxy(50,2);
        cout<<"DATA POTENSI BELUM ADA!"<<endl;
    }
}
void printALLDaerah(Daerah A) {

    adrDaerah Q = firstDaerah(A);
    if(firstDaerah(A) != NULL) {
            int y = 1;
            int No = 1;
            gotoxy(3,y);
            cout<<"   DATA DAERAH : "<<endl;
        while(nextDaerah(Q)!= firstDaerah(A)) {
            y = y+1;
            gotoxy(3,y);
            cout<<"    "<<No<<". "<<infoDaerah(Q)<<endl;
            Q = nextDaerah(Q);
            No = No + 1;
        }
            y = y+1;
            gotoxy(3,y);
            cout<<"    "<<No<<". "<<infoDaerah(Q)<<endl;
    }
    else {
        cout<<"\nDaerah tak ada!"<<endl;}
    }
void printALLDaerah1(Daerah A) {
    adrDaerah Q = firstDaerah(A);
    if(firstDaerah(A) != NULL) {
            int y = 7;
            int No = 1;
            gotoxy(25,y);
            cout<<"   DATA DAERAH : "<<endl;
        while(nextDaerah(Q)!= firstDaerah(A)) {
            y = y+1;
            gotoxy(25,y);
            cout<<"    "<<No<<". "<<infoDaerah(Q)<<endl;
            Q = nextDaerah(Q);
            No = No + 1;
        }
            y = y+1;
            gotoxy(25,y);
            cout<<"    "<<No<<". "<<infoDaerah(Q)<<endl;
    }
    else {
        cout<<"\nDaerah tak ada!"<<endl;}
    }
void printALL(Daerah A, Potensi B, Relasi C){
    adrRelasi Q = firstRelasi(C);
    if(Q!= NULL) {
            gotoxy(8,1);
            cout<< "  ==============================================================";
            gotoxy(8,2);
            cout<< " |                                                              | ";
            gotoxy(8,3);
            cout<< " |----------------- DATA POTENSI DAERAH INDONESIA --------------| ";
            gotoxy(8,4);
            cout<< " |                                                              | ";
            gotoxy(8,5);
            cout<< "  --------------------------------------------------------------  ";
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"     Daerah        : "<<infoDaerah(toDaerah(Q))<<", "<<endl;
            cout<<"                   : ";
            string temp = infoDaerah(toDaerah(Q));
        while(Q!= NULL) {
            if(infoDaerah(toDaerah(Q)) != temp){
                cout<<endl;
                cout<<"     Daerah        : "<<infoDaerah(toDaerah(Q))<<" "<<endl;
                cout<<"                   : ";
                temp = infoDaerah(toDaerah(Q));
            }
            cout<<infoPotensi(toPotensi(Q))<<", ";
            Q = nextRelasi(Q);}
        }
    else {
        cout<<"Data yang direlasi tak ada!"<<endl;}
    Sleep(2000);
    }
void deleteRelasi(Relasi &C, adrRelasi &P) {
    adrRelasi R = firstRelasi(C);
    adrRelasi tempLast = firstRelasi(C);
    while(tempLast!= NULL && nextRelasi(tempLast)!= NULL){
        tempLast = nextRelasi(tempLast);
    }
    if(P == firstRelasi(C) && nextRelasi(P)==NULL){
        firstRelasi(C) = NULL;
    } else if(P == firstRelasi(C)){
        firstRelasi(C) = nextRelasi(P);
        nextRelasi(P) = NULL;
    } else if(P == tempLast){
        while(nextRelasi(R)!=tempLast){
            R = nextRelasi(R);
        }
        nextRelasi(R) = NULL;
    } else{
        while(nextRelasi(R) != P){
            R = nextRelasi(R);
        }
        nextRelasi(R) = nextRelasi(P);
        nextRelasi(P) = NULL;
    }
}
void deleteDaerah(Daerah &A,Relasi &C,adrDaerah &P ,string X) {
    adrRelasi R = firstRelasi(C);
    if(R != NULL ){
        while(R != NULL){
            if(infoDaerah(toDaerah(R)) == X ){
                adrRelasi P = R;
                R = nextRelasi(R);
                deleteRelasi(C,P);
            } else {
                R = nextRelasi(R);
            }
        }
    }
    if(P == firstDaerah(A)){
        if(nextDaerah(firstDaerah(A)) == firstDaerah(A)) {
            nextDaerah(P) = NULL;
            prevDaerah(P) = NULL;
            firstDaerah(A) = NULL;
            lastDaerah(A) = NULL;}
        else {
            nextDaerah(prevDaerah(P)) = nextDaerah(P);
            prevDaerah(nextDaerah(P)) = prevDaerah(P);
            firstDaerah(A) = nextDaerah(P);
            nextDaerah(P) = NULL;}
        }
        else if(P == lastDaerah(A)){
        if(firstDaerah(A) = lastDaerah(A)){
            nextDaerah(P) = NULL;
            prevDaerah(P) = NULL;
            firstDaerah(A) = NULL;
            lastDaerah(A) = NULL;}
        else {
            lastDaerah(A) = prevDaerah(P);
            prevDaerah(P) = NULL;
            nextDaerah(P) = NULL;
            nextDaerah(lastDaerah(A)) = firstDaerah(A);
            prevDaerah(firstDaerah(A)) = lastDaerah(A);}
        }
        else {
        nextDaerah(prevDaerah(P)) = nextDaerah(P);
        prevDaerah(nextDaerah(P)) = prevDaerah(P);
        nextDaerah(P) = NULL;
        prevDaerah(P) = NULL;}
    }
void deletePotensi(Potensi &B,Relasi &C,adrPotensi &Q ,string X) {
    adrRelasi R = firstRelasi(C);
    if(R != NULL ){
        while(R != NULL){
            if(infoPotensi(toPotensi(R)) == X ){
                adrRelasi P = R;
                jumlahPotensi(toDaerah(P))--;
                R = nextRelasi(R);
                deleteRelasi(C,P);
            } else {
                R = nextRelasi(R);
            }
        }
    }

    if(firstPotensi(B) == lastPotensi(B)){
        firstPotensi(B) = NULL;
        lastPotensi(B) = NULL;
        nextPotensi(Q) = NULL;
        prevPotensi(Q) = NULL;
    }
    else if ( firstPotensi(B) == Q ){
        firstPotensi(B) = nextPotensi(Q);
        prevPotensi(firstPotensi(B)) = NULL;
        nextPotensi(Q) = NULL;
    }
    else if ( lastPotensi(B) == Q){
        lastPotensi(B) = prevPotensi(Q);
        nextPotensi(lastPotensi(B)) = NULL;
        prevPotensi(Q) = NULL;
    }
    else{
        nextPotensi(prevPotensi(Q)) = nextPotensi(Q);
        prevPotensi(nextPotensi(Q)) = prevPotensi(Q);
        nextPotensi(Q) = NULL;
        prevPotensi(Q) = NULL;
    }

}
void insertSortPotensi( Daerah &A , adrDaerah P){
    adrDaerah Q = firstDaerah(A);
    if (Q == NIL){
        nextDaerah(P) = P;
        prevDaerah(P) = P;
        firstDaerah(A) = P;
        lastDaerah(A) = P;
    } else if (jumlahPotensi(Q) <= jumlahPotensi(P)) {
        while (nextDaerah(Q) != firstDaerah(A)){
            Q = nextDaerah(Q);
        }
        nextDaerah(Q) = P;
        prevDaerah(P) = Q;
        nextDaerah(P) = firstDaerah(A);
        prevDaerah(Q) = P;
        firstDaerah(A) = P;
    } else {
        while (nextDaerah(Q) != firstDaerah(A) && jumlahPotensi(nextDaerah(Q)) > jumlahPotensi(P)){
            Q = nextDaerah(Q);
        }
        nextDaerah(P) = nextDaerah(Q);
        prevDaerah(P) = Q;
        prevDaerah(nextDaerah(Q)) = P;
        nextDaerah(Q) = P;
    }

}
void insertSortPotensi1( Daerah &A , adrDaerah P){
    adrDaerah Q = firstDaerah(A);
    if (Q == NIL){
        nextDaerah(P) = P;
        prevDaerah(P) = P;
        firstDaerah(A) = P;
        lastDaerah(A) = P;
    } else if (jumlahPotensi(Q) >= jumlahPotensi(P)) {
        while (nextDaerah(Q) != firstDaerah(A)){
            Q = nextDaerah(Q);
        }
        nextDaerah(Q) = P;
        prevDaerah(P) = Q;
        nextDaerah(P) = firstDaerah(A);
        prevDaerah(Q) = P;
        firstDaerah(A) = P;
    } else {
        while (nextDaerah(Q) != firstDaerah(A) && jumlahPotensi(nextDaerah(Q)) < jumlahPotensi(P)){
            Q = nextDaerah(Q);
        }
        nextDaerah(P) = nextDaerah(Q);
        prevDaerah(P) = Q;
        prevDaerah(nextDaerah(Q)) = P;
        nextDaerah(Q) = P;
    }

}
void sortDaerahD(Daerah A ){
    Daerah B;
    buatListDaerah(B);
    adrDaerah P = firstDaerah(A);
    if(P!= NULL){
        do{
            adrDaerah Q ;
            buatDataDaerah(infoDaerah(P),Q);
            jumlahPotensi(Q) = jumlahPotensi(P);
            insertSortPotensi(B,Q);

            P = nextDaerah(P);
        }while ( P != firstDaerah(A));
        adrDaerah P = firstDaerah(B);
        if(firstDaerah(B) != NULL) {
            //int y = 1;
            int No = 1;
            //gotoxy(3,y);
            gotoxy(8,1);
            cout<< "  ==============================================================";
            gotoxy(8,2);
            cout<< " |                                                              | ";
            gotoxy(8,3);
            cout<< " |------------------ SORTING DATA DAERAH TERKAYA ---------------| ";
            gotoxy(8,4);
            cout<< " |                                                              | ";
            gotoxy(8,5);
            cout<< "  --------------------------------------------------------------  ";
            cout<<endl;
            cout<<endl;
            cout<<endl;
        while(nextDaerah(P)!= firstDaerah(B)) {
            //y = y+1;
            //gotoxy(3,y);
            cout<<"    "<<No<<". "<<infoDaerah(P)<<endl;

            if(jumlahPotensi(P) == 0){
                cout<<"        Tidak Memiliki Potensi Apapun di Daerahnya "<<endl;
                cout<<endl;
            }
            else{
            cout<<"        Memiliki "<<jumlahPotensi(P)<<" Potensi di Daerahnya "<<endl;
            cout<<endl;}

            P = nextDaerah(P);
            No = No + 1;
        }
            //y = y+1;
            //gotoxy(3,y);

            cout<<"    "<<No<<". "<<infoDaerah(P)<<endl;
            if(jumlahPotensi(P) == 0){
                cout<<"        Tidak Memiliki Potensi Apapun di Daerahnya "<<endl;
                cout<<endl;
            }
            else{
            cout<<"        Memiliki "<<jumlahPotensi(P)<<" Potensi di Daerahnya "<<endl;
            cout<<endl;}
        }
        else {
        cout<<"\nDaerah tak ada!"<<endl;
        }


    }
}
void sortDaerahU (Daerah A ){
    Daerah C;
    buatListDaerah(C);
    adrDaerah P = firstDaerah(A);
    if(P!= NULL){
        do{
            adrDaerah Q ;
            buatDataDaerah(infoDaerah(P),Q);
            jumlahPotensi(Q) = jumlahPotensi(P);
            insertSortPotensi1(C,Q);

            P = nextDaerah(P);
        }while ( P != firstDaerah(A));
        adrDaerah P = firstDaerah(C);
        if(firstDaerah(C) != NULL) {
            int No = 1;
            gotoxy(8,1);
            cout<< "  ==============================================================";
            gotoxy(8,2);
            cout<< " |                                                              | ";
            gotoxy(8,3);
            cout<< " |----------------- SORTING DATA DAERAH TERMISKIN --------------| ";
            gotoxy(8,4);
            cout<< " |                                                              | ";
            gotoxy(8,5);
            cout<< "  --------------------------------------------------------------  ";
            cout<<endl;
            cout<<endl;
            cout<<endl;
        while(nextDaerah(P)!= firstDaerah(C)) {
            cout<<"    "<<No<<". "<<infoDaerah(P)<<endl;

            if(jumlahPotensi(P) == 0){
                cout<<"        Tidak Memiliki Potensi Apapun di Daerahnya "<<endl;
                cout<<endl;
            }
            else{
            cout<<"        Memiliki "<<jumlahPotensi(P)<<" Potensi di Daerahnya "<<endl;
            cout<<endl;}

            P = nextDaerah(P);
            No = No + 1;
        }
            cout<<"    "<<No<<". "<<infoDaerah(P)<<endl;
            if(jumlahPotensi(P) == 0){
                cout<<"        Tidak Memiliki Potensi Apapun di Daerahnya "<<endl;
                cout<<endl;
            }
            else{
            cout<<"        Memiliki "<<jumlahPotensi(P)<<" Potensi di Daerahnya "<<endl;
            cout<<endl;}
        }
        else {
        cout<<"\nDaerah tak ada!"<<endl;
        }
    }
}
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
adrRelasi searchPotensiRelasi(Relasi C, adrPotensi P) {
    adrRelasi Q = firstRelasi(C);
    while (toPotensi(Q) != P && Q != NULL) {
        Q = nextRelasi(Q);
    }
    if (toPotensi(Q) != P) {
        return NULL;
    }
    else {
        return Q;}
    }
adrRelasi searchDaerahRelasi(Relasi C, adrDaerah P) {
    adrRelasi Q = firstRelasi(C);
    while (toDaerah(Q) != P && Q != NULL) {
        Q = nextRelasi(Q);
    }
    if (toDaerah(Q) != P) {
        return NULL;
    }
    else {
        return Q;}
    }
adrRelasi searchRelasi(Relasi C ,string X,string Y){
    adrRelasi Q = firstRelasi(C);
    while( Q != NULL && (infoDaerah(toDaerah(Q)) != X || infoPotensi(toPotensi(Q)) != Y)){
        Q = nextRelasi(Q);
    }
    return Q;
}
adrPotensi searchPotensi(Potensi B, string X){
    adrPotensi P = firstPotensi(B);
    if (firstPotensi(B) != NULL) {
        while ((P != lastPotensi(B)) && (infoPotensi(P) != X)) {
            P = nextPotensi(P);
        }
        if (infoPotensi(P) != X) {
            P = NULL;
        }
    }
    return P;
}
adrDaerah searchDaerah(Daerah A, string X){

    adrDaerah P = firstDaerah(A);
    if (firstDaerah(A) != NULL) {
        while ((nextDaerah(P) != firstDaerah(A)) && (infoDaerah(P) != X)) {
            P = nextDaerah(P);
        }
        if (infoDaerah(P) != X) {
            P = NULL;
        }
    }
    jumlahPotensi(P)++;

    return P;
}
