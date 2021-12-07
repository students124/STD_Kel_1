#include "MLL.h"
#include "Menu.h"


int main()
{
    system("clear");

    ListDouble L;
    adrDLL P;
    infotype data;
    bool status;

    createList_1303204141(L);

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
            inputData_1303204141(L);
            break;
        case MENAMPILKAN:
            cout << "Menampilkan Seluruh Data" << endl << endl;
            show_1303204141(L);
            break;
        case TP:
            cout << "Inputkan data yang dicari : ";
            cin >> data;

            status = findString_1303204141(L,data);

            if(status == true)
            {
                cout << "Data di temukan" << endl;
            }else
            {
                cout << "Data Tidak di temukan" << endl;
            }
            break;
        case MENGHAPUS:
            P = first(L);
            deleteFirst_1303204141(L,P);
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
