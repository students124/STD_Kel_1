#include "MLL.h"
#include "Menu.h"

int main()
{
    system("cls");

    List_pengerajin P;
    List_furniture F;

    createList_1303204141(P);
    createList_1303204141(F);

    bool status;


    enum option
    {
        FINISH = 0,CST1,CST2,CST3,CST4,CST5,CST6,CST7,CST8,CST9,CST10,CST11,CST12
    };

    int userOpt = getOption_1303204141();
    char is_continue;

    while (userOpt != FINISH)
    {
        switch (userOpt)
        {
        case CST1:
            {
                int umur;
                string nama;

                cout << "Nama Pengerajin : ";
                cin >> nama;

                cout << "Umur Pengerajin : ";
                cin >> umur;

                adr_pengerajin Q = createElement_1303204141(nama,umur);
                insertLast_1303204141(P,Q);
                break;
            }

        case CST2:
            {
                string nama;
                int umur;

                cout << "Nama Pengerajin yang di cari : ";
                cin >> nama;

                cout << "Umur Pengerajin yang di cari : ";
                cin >> umur;

                showPengerajinx_1303204141(P,nama,umur);

                break;
            }
        case CST3:
            {
                string nama;
                int umur;

                cout << "Nama Pengerajin yang akan dihapus : ";
                cin >> nama;

                cout << "Umur Pengerajin yang akan dihapus : ";
                cin >> umur;

                deletepengerajinTertentu_1303204141(P,nama,umur);

                break;
            }
        case CST4:
            {
                string nama;
                int umur;

                cout << "Nama Pengerajin yang akan dihapus : ";
                cin >> nama;

                cout << "Umur Pengerajin yang akan dihapus : ";
                cin >> umur;

                searchPengerajinTertentu_1303204141(P,nama,umur);

                break;
            }
        case CST5:
            {
                string nama,namaFurniture;
                int umur;

                cout << "Nama Pengerajin yang akan di add furniturenya : ";
                cin >> nama;

                cout << "Umur Pengerajin yang akan di add furniturenya : ";
                cin >> umur;

                cout << "nama Furniture yang ingin ditambahkan : ";
                cin >> namaFurniture;

                addFurnitureToPengerajin_1303204141(P,F,nama,umur,namaFurniture);

                break;
            }
        case CST6:
            {
                string nama,namaFurniture;
                int umur;

                cout << "Nama Pengerajin yang akan di add furniturenya : ";
                cin >> nama;

                cout << "Umur Pengerajin yang akan di add furniturenya : ";
                cin >> umur;

                cout << "nama Furniture yang ingin ditambahkan : ";
                cin >> namaFurniture;

                deleteFurnitureToPengerajin_1303204141(P,F,nama,umur,namaFurniture);

                break;
            }
        case CST7:
            {
                string nama;
                int umur;

                cout << "Nama Pengerajin yang akan ditampilkan : ";
                cin >> nama;

                cout << "Umur Pengerajin yang akan ditampilkan : ";
                cin >> umur;

                showAllFurnitureByPengerajinX(P,F,nama,umur);

                break;
            }
        case CST8:
            {
                string nama,namaFurniture;
                int umur;

                cout << "nama Furniture yang ingin dicari : ";
                cin >> namaFurniture;

                cout << "Nama Pengerajin yang akan dicari : ";
                cin >> nama;

                cout << "Umur Pengerajin yang akan dicari: ";
                cin >> umur;

                break;
            }
        case CST9:
            {
                string nama,namaFurniture;
                int umur;

                cout << "Nama Pengerajin yang akan diconnect : ";
                cin >> nama;

                cout << "Umur Pengerajin yang akan diconnect : ";
                cin >> umur;

                cout << "nama Furniture yang ingin diconnect : ";
                cin >> namaFurniture;

                cout << "Connecting all furniture and pengerajin" << endl;

                connectingPengrajinToFurniture_1303204126(P,F,nama,umur,namaFurniture);
                break;
            }
        case CST10:
            {
                string nama,namaFurniture;
                int umur;

                cout << "Nama Pengerajin yang akan disconnect : ";
                cin >> nama;

                cout << "Umur Pengerajin yang akan disconnect : ";
                cin >> umur;

                cout << "nama Furniture yang ingin disconnect : ";
                cin >> namaFurniture;

                cout << "Disconnecting all furniture and pengerajin" << endl;

                disconnectingPengrajinToFurniture_1303204126(P,F,nama,umur,namaFurniture);
                break;

            }
        case CST11:
            {
                string namaFurniture;

                cout << "nama Furniture : ";
                cin >> namaFurniture;

                show(F,namaFurniture);
                break;
            }
        case CST12:
            {
                string namaFurnitureAwal, namaFurnitureAkhir;

                cout << "nama Furniture Awal : ";
                cin >> namaFurnitureAwal;

                cout << "Nama Furniture Akhir : ";
                cin >> namaFurnitureAkhir;

                UbahData_1303204126(F,namaFurnitureAwal,namaFurnitureAkhir);
                break;
            }
        default:
            {
                cout << "Pilihan Tidak ditemukan !!!" << endl;
                break;
            }
        }
        cout << endl;

        label_continue:

        cout << "lanjutkan? (y/n) : ";

		cin >> is_continue;
		if ((is_continue == 'y') | (is_continue == 'Y')){
            system("cls");
			userOpt = getOption_1303204141();
		}else if ((is_continue == 'n') | (is_continue == 'N'))
		{
			break;
		}else{
			goto label_continue;
		}
    }

    cout << endl;
    cout << "Terima Kasih, Dan Sampai Bertemu Kembali" << endl;

    return 0;
}
