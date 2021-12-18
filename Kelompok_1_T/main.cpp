#include "MLL.h"
#include "Menu.h"




int main()
{
    system("clear");

    List_pengerajin L;
    adr_pengerajin P;
    bool status;


    enum option
    {
        FINISH = 0,MENAMBAH,MENAMPILKAN,MENGHAPUS,TP
    };

    int userOpt = getOption_1303204141();
    char is_continue;

    while (userOpt != FINISH)
    {
        switch (userOpt)
        {
        case MENAMBAH:

            break;
        case MENAMPILKAN:
            cout << "Menampilkan Seluruh Data" << endl << endl;

            break;
        case TP:

            break;
        case MENGHAPUS:

            break;
        default:
            cout << "Pilihan Tidak ditemukan !!!" << endl;
            break;
        }
        cout << endl;

        label_continue:

        cout << "lanjutkan? (y/n) : ";

		cin >> is_continue;
		if ((is_continue == 'y') | (is_continue == 'Y')){
            system("clear");
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
