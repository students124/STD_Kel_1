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

