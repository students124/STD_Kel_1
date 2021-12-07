#include "Menu.h"

int getOption_1303204141()
{
    cout << "=======MENU========" << endl;
    cout << "1. Menambahkan N data baru" << endl;
    cout << "2. Menampilkan Semua Data" << endl;
    cout << "3. Menghapus data pertama dari data" << endl;
    cout << "4. Mencari data yang diinginkan" << endl;
    cout << "0. Exit" << endl;
    cout << "===================" << endl;
    cout << endl;
    cout << "Pilihan Menu: ";

    int hasil = 0;
    cin >> hasil;

    cout << endl;

    return hasil;
}

void inputData_1303204141(ListDouble &L)
{
    adrDLL P;
    int i,j;
    infotype data;

    cout << "Banyaknya N data yang diinginkan : ";
    cin >> i;

    j = 1;

    while(j <= i)
    {
        cout << "Inputkan data ke-" << j << " :";
        cin >> data;

        P = alokasi_1303204141(data);
        insertLast_1303204141(L,P);
        j++;
    }
}
