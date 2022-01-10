#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "MLL.h"
#include <iostream>
#include <string>

using namespace std;


int getOption_1303204141();
void showPengerajinx_1303204141(List_pengerajin L, string nama, int umur);
void deletepengerajinTertentu_1303204141(List_pengerajin L, string nama, int umur);
void searchPengerajinTertentu_1303204141(List_pengerajin L, string nama, int umur);
void addFurnitureToPengerajin_1303204141(List_pengerajin &L,List_furniture &F ,string nama, int umur, string namaFurniture);
void deleteFurnitureToPengerajin_1303204141(List_pengerajin &L,List_furniture &F ,string nama, int umur, string namaFurniture);
void findFurnitureToPengerajin_1303204141(List_pengerajin &L,List_furniture &F ,string nama, int umur, string namaFurniture);
void showAllFurnitureByPengerajinX(List_pengerajin &L,List_furniture &F,string nama,int umur);
void connectingPengrajinToFurniture_1303204126(List_pengerajin &L,List_furniture &F,string nama,int umurstring,string namaFurniture);
void disconnectingPengrajinToFurniture_1303204126(List_pengerajin &L, List_furniture &F,string nama,int umur,string namaFurniture);
void show(List_furniture &F, string namaFurniture);
void UbahData_1303204126(List_furniture &F, string namaFurnitureAwal, string namaFurnitureAkhir);

#endif // MENU_H_INCLUDED
