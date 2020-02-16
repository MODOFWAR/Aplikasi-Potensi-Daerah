#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#define infoDaerah(P) (P)->infoDaerah
#define infoPotensi(P) (P)->infoPotensi
#define nextDaerah(P) (P)->nextDaerah
#define nextPotensi(P) (P)->nextPotensi
#define nextRelasi(P) (P)->nextRelasi
#define prevDaerah(P) (P)->prevDaerah
#define prevPotensi(P) (P)->prevPotensi
#define firstDaerah(L) L.firstDaerah
#define firstPotensi(L) L.firstPotensi
#define firstRelasi(L) L.firstRelasi
#define lastDaerah(L) L.lastDaerah
#define lastPotensi(L) L.lastPotensi
#define toDaerah(P) (P)->toDaerah
#define toPotensi(P) (P)->toPotensi
#define jumlahPotensi(P) (P)->jumlahPotensi
#define NIL NULL

using namespace std;


typedef struct dataDaerah *adrDaerah;
typedef struct dataPotensi *adrPotensi;
typedef struct listRelasi *adrRelasi;

struct dataDaerah {
    string infoDaerah;
    int jumlahPotensi;
    adrDaerah nextDaerah;
    adrDaerah prevDaerah;

};
struct Daerah {
    adrDaerah firstDaerah;
    adrDaerah lastDaerah;
};
struct dataPotensi {
    string infoPotensi;
    adrPotensi nextPotensi;
    adrPotensi prevPotensi;
};
struct Potensi {
    adrPotensi firstPotensi;
    adrPotensi lastPotensi;
};
struct listRelasi {
    adrRelasi nextRelasi;
    adrDaerah toDaerah;
    adrPotensi toPotensi;
};
struct Relasi {
   adrRelasi firstRelasi;
};


bool isEmptyDaerah(Daerah A);
bool isEmptyPotensi(Potensi B);
bool isEmpty(Relasi C);
void buatListDaerah(Daerah &A);
void buatListPotensi(Potensi &B);
void buatListRelasi(Relasi &C);
void buatDataDaerah(string X, adrDaerah &P);
void buatDataPotensi(string X, adrPotensi &P);
void buatRelasi(adrDaerah X, adrPotensi Y, adrRelasi &P);
void insertLastRelasi(Relasi &C, adrRelasi P);
void insertFirstPotensi(Potensi &B, adrPotensi P);
void insertDaerah(Daerah &A, adrDaerah P);
void printDaerah(Relasi C, Daerah A, string X);
void printPotensi(Relasi C, Potensi B, string X);
void printALLPotensi(Potensi B);
void printALLDaerah(Daerah A);
void printALLDaerah1(Daerah A);
void printALLPotensi1(Potensi B);
void printALL(Daerah A, Potensi B, Relasi C);
void deleteRelasi(Relasi &C, adrRelasi &P);
void deleteDaerah(Daerah &A,Relasi &C,adrDaerah &P, string X);
void deletePotensi(Potensi &B,Relasi &C,adrPotensi &Q ,string X);
void gotoxy(int x, int y);
void insertSortPotensi( Daerah &A , adrDaerah P);
void insertSortPotensi1( Daerah &A , adrDaerah P);
void sortDaerahD (Daerah A );
void sortDaerahU(Daerah A );
adrRelasi searchRelasi(Relasi C ,string X,string Y);
adrRelasi searchPotensiRelasi(Relasi C, adrPotensi P);
adrRelasi searchDaerahRelasi(Relasi C, adrDaerah P);
adrPotensi searchPotensi(Potensi B, string X);
adrDaerah searchDaerah(Daerah A, string X);

#endif // DATA_H_INCLUDED
