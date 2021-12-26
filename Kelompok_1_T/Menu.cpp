#include "Menu.h"

int getOption_1303204141()
{
    cout << "=======MENU========" << endl;
    cout << "1. Menambahkan N data pengerajin baru" << endl;
    cout << "2. Menampilkan data pengerajin x" << endl;
    cout << "3. Menghapus pengerajin tertentu" << endl;
    cout << "4. Mencari pengerajin x" << endl;
    cout << "0. Exit" << endl;
    cout << "===================" << endl;
    cout << endl;
    cout << "Pilihan Menu: ";

    int hasil = 0;
    cin >> hasil;

    cout << endl;

    return hasil;
}

void showPengerajinx_1303204141(List_pengerajin L, string nama,int umur)
{
    if(first(L) == NULL)
    {
        cout << "LIST EMPTY" << endl;
    }else
    {
        adr_pengerajin P = findPengerajin_1303204141(L,nama,umur);

        if(P == NULL)
        {
            cout << "NO DATA AVAILABLE" << endl;
        }else
        {
            cout << "Nama : " << info(P).nama << endl;
            cout << "Umur : " << info(P).umur << endl;
        }
    }
}

void deletepengerajinTertentu_1303204141(List_pengerajin L, string nama, int umur)
{
    adr_pengerajin P = findPengerajin_1303204141(L,nama,umur);

    if(P == NULL)
    {
        cout << "NO DATA AVAILABLE" << endl;
    }else
    {
        if(first(L) == P)
        {
            deleteFirst_1303204141(L,P);
        }else if(next(P) == NULL)
        {
            deleteLast_1303204141(L,P);
        }else
        {
            adr_pengerajin Q = first(L);

            while(Q != P)
            {
                Q = next(P);
            }

            deleteAfter_1303204141(Q,P);
        }
    }
}

void searchPengerajinTertentu_1303204141(List_pengerajin L, string nama, int umur)
{
    adr_pengerajin P = findPengerajin_1303204141(L,nama,umur);

    if (P == NULL)
    {
        cout << "The " << nama << "did not exist" << endl;
    }else
    {
        cout << "Nama : " << nama << endl;
        cout << "Umur : " << umur << endl;
    }
}

void addFurnitureToPengerajin_1303204141(List_pengerajin &L,List_furniture &F ,string nama, int umur, string namaFurniture)
{
    adr_pengerajin P = findPengerajin_1303204141(L,nama,umur);

    if (P == NULL)
    {
        cout << "The " << nama << "did not exist" << endl;
    }else
    {
        adr_furniture Q = createElement_1303204141(namaFurniture);

        insertLast_1303204141(F,Q);

        nextClass(Q) = P;
    }
}


void deleteFurnitureToPengerajin_1303204141(List_pengerajin &L,List_furniture &F ,string nama, int umur, string namaFurniture)
{
    adr_pengerajin P = findPengerajin_1303204141(L,nama,umur);

    if (P == NULL)
    {
        cout << "The " << nama << "did not exist" << endl;
    }else
    {
        adr_furniture Q = findFurniture_1303204141(F,namaFurniture);

        if(Q == NULL)
        {
            cout << "No " << namaFurniture << " Available to be deleted" << endl;
        }else
        {
            if(first(F) == Q)
            {
                deleteFirst_1303204141(F,Q);
            }else if(next(Q) == NULL)
            {
                deleteLast_1303204141(F,Q);
            }else
            {
                adr_furniture R = first(F);

                while(R != Q)
                {
                    R = next(R);
                }

                deleteAfter_1303204141(R,Q);
            }
        }
    }
}
