#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED

#include <iostream>
#include <string>


using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define nextClass(P) (P)->nextClass
#define first(L) ((L).first)


typedef struct elm_pengerajin *adr_pengerajin;
typedef struct elm_furniture *adr_furniture;


struct infotype_pengerajin
{
    string nama;
    int umur;
};

struct infotype_furniture
{
    string nama;
};


struct elm_pengerajin
{
    infotype_pengerajin info;
    adr_pengerajin next;
};

struct elm_furniture
{
    infotype_furniture info;
    adr_furniture next;
    adr_pengerajin nextClass;
};


struct List_furniture
{
    adr_furniture first;
};

struct List_pengerajin
{
    adr_pengerajin first;
};

//prototype
void createList_1303204141(List_furniture &L);
void createList_1303204141(List_pengerajin &L);
adr_furniture createElement_1303204141(string nama);
adr_pengerajin createElement_1303204141(string nama, int umur);
void insertFirst_1303204141(List_furniture &L, adr_furniture P);
void insertFirst_1303204141(List_pengerajin &L, adr_pengerajin P);
void insertLast_1303204141(List_furniture &L, adr_furniture P);
void insertLast_1303204141(List_pengerajin &L, adr_pengerajin P);
void deleteFirst_1303204141(List_furniture &L, adr_furniture &P);
void deleteFirst_1303204141(List_pengerajin &L, adr_pengerajin &P);
void deleteAfter_1303204141(adr_furniture &prec, adr_furniture &P);
void deleteAfter_1303204141(adr_pengerajin &prec, adr_pengerajin &P);
void deleteLast_1303204141(List_furniture &L, adr_furniture &P);
void deleteLast_1303204141(List_pengerajin &L, adr_pengerajin &P);
adr_pengerajin findPengerajin_1303204141(List_pengerajin L, string nama, int umur);
adr_furniture findFurniture_1303204141(List_furniture L, string nama);

#endif // MLL_H_INCLUDED
