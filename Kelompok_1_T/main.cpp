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
        FINISH = 0,CST1,CST2,CST3,CST4,CST5,CST6
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
                break;
            }
        case CST5:
            {
                break;
            }
        case CST6:
            {
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
