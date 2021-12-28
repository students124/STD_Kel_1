#include "MLL.h"
#include "Menu.h"

int main()
{
    system("clear");

    List_pengerajin P;
    List_furniture F;

    bool status;


    enum option
    {
        FINISH = 0,CASE1,CASE2,CASE3,CASE4,CASE5,CASE6
    };

    int userOpt = getOption_1303204141();
    char is_continue;

    while (userOpt != FINISH)
    {
        switch (userOpt)
        {
        case CASE1:

            break;
        case CASE2:
            cout << "Menampilkan Seluruh Data" << endl << endl;

            break;
        case CASE3:

            break;
        case CASE4:

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
