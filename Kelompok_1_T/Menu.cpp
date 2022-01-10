#include "Menu.h"

int getOption_1303204141()
{
    //function melakukan penerimaan instruksi user

    cout << "=======MENU========" << endl;
    cout << "1. Menambahkan Pengerajin Baru" << endl;
    cout << "2. Menampilkan data pengerajin x" << endl;
    cout << "3. Menghapus pengerajin tertentu" << endl;
    cout << "4. Mencari pengerajin x" << endl;
    cout << "5. Menambahkan Furniture Pada Pengerajin X" << endl;
    cout << "6. Menghapus Furniture pada Pengerajin X" << endl;
    cout << "7. Menampilkan seluruh furniture yang dibuat oleh pengrajin X" << endl;
    cout << "8. Mencari furniture Y yang dibuat oleh pengrajin X" << endl;
    cout << "9. Membuat relasi antara pengrajin X dan furniture Y" << endl;
    cout << "10.Menghapus relasi antara pengrajin dan furniture Y" << endl;
    cout << "11.Menampilkan data pengrajin yang paling banyak membuat furniture X" << endl;
    cout << "12.Mengubah data furniture X menjadi P dan tampilkan perubahannya" << endl;
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
    //function di bentuk sesuai kebutuhan Case studi no 1

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
    //function di bentuk sesuai kebutuhan Case studi no 2

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
    //function di bentuk sesuai kebutuhan Case studi no 3

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
    //function di bentuk sesuai kebutuhan Case studi no 4
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
    //function di bentuk sesuai kebutuhan Case studi no 5

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

void showAllFurnitureByPengerajinX(List_pengerajin &L,List_furniture &F,string nama,int umur)
{
    //function by case studi no 7

    adr_pengerajin P = findPengerajin_1303204141(L,nama,umur);

    if(P == NULL)
    {
        cout << "Pengerajin tidak ditemukan" << endl;
    }else
    {
        adr_furniture Q = first(F);

        cout << "Pengerajin " << info(P).nama << " telah membuat furniture : ";

        while(Q != NULL)
        {
            if(info(nextClass(Q)).nama == info(P).nama)
            {
                cout << info(Q).nama << ",";
            }
            Q = next(Q);
        }
        cout << "." << endl;
    }
}

void findFurnitureToPengerajin_1303204141(List_pengerajin &L,List_furniture &F ,string nama, int umur, string namaFurniture)
{
    adr_furniture P = findFurniture_1303204141(F,namaFurniture);
    adr_pengerajin Q = findPengerajin_1303204141(L,nama,umur);

    if((P == NULL) && (Q == NULL))
    {
        cout << "NO DATA AVAILABLE" << endl;
    }else
    {
        if(nextClass(P) == Q)
        {
            cout << "DATA FOUND" << endl << endl;

            cout << info(Q).nama << " memiliki : " << info(P).nama << endl;
        }else
        {
            cout << "Furniture not found" << endl;
        }
    }
}


void connectingPengrajinToFurniture_1303204126(List_pengerajin &L,List_furniture &F,string nama,int umur,string namaFurniture){

    //Prosedur dibentuk sesuai dari case no 9


    adr_pengerajin P = findPengerajin_1303204141(L,nama,umur);

    if(P == NULL){
        cout<<"Nama Pengrajin tidak ada"<<endl;

    }else{

        //Kita anggap furniture tidak ada di dalam list
        insertLast_1303204141(L,P);
    }

}

void disconnectingPengrajinToFurniture_1303204126(List_pengerajin &L, List_furniture &F,string nama,int umur,string namaFurniture){

    //Prosedur dibentuk sesuai dari case no 10

    adr_pengerajin P = findPengerajin_1303204141(L,nama,umur);
    adr_furniture Q = findFurniture_1303204141(F,namaFurniture);

    if(P == NULL && Q == NULL){
        cout<<"Nama Pengrajin tidak ada"<<endl;
    }else{
        if(first(F) == Q){
            deleteFirst_1303204141(F,Q);
        }else if(next(P) == NULL){
            deleteLast_1303204141(F,Q);
        }else{
            adr_furniture R = first(F);
                while(R != Q){
                    R = next(R);
                }

                deleteAfter_1303204141(R,Q);

            }
    }
}


void show(List_furniture &F, string namaFurniture)
{
    int i = 0;
    if(first(F) == NULL)
    {
        cout << "LIST KOSONG" << endl;
    }else
    {
        adr_furniture P = first(F);

        while(P != NULL)
        {
            if((info(P).nama == namaFurniture) && (nextClass(P) != NULL))
            {
                i++;
            }
            P = next(P);
        }

        cout << "Banyaknya pengerajin yang membuat " << namaFurniture << " sama dengan : " << i << endl;
    }
}

void UbahData_1303204126(List_furniture &F, string namaFurnitureAwal, string namaFurnitureAkhir){


    adr_furniture P = findFurniture_1303204141(F,namaFurnitureAwal);
    if(P == NULL){
        cout<<"Data Tidak Ada, tidak ada perubahan"<<endl;
    }else{
        adr_pengerajin Q = nextClass(P);
        adr_furniture prec = first(F);
        while(prec != P){
            prec = next(prec);
        }
        deleteAfter_1303204141(prec, P);
        adr_furniture R = createElement_1303204141(namaFurnitureAkhir);
        nextClass(R) = Q;
        insertAfter_1303204126(prec,R);
        cout<<"Mengganti furniture X dengan furniture P"<<endl;
    }
}
