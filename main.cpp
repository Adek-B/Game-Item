#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string item;
    int stat;
    string item_sebelumnya;
    int stat_sebelumnya;
    int pilihan;
    char ulang = 'y';
    while (ulang == 'y'){
        cout << "Item = ";
        cin >> item;
        cout << "Stat = ";
        cin >> stat;
        cout << "Tambah Inputan : " << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;
        cout << "Masukkan Pilihan Anda : ";
        cin >> pilihan;
        if(pilihan == 1){
            item_sebelumnya = item;
            int stat_sebelumnya = stat;
            cout << "Item = ";
            cin >> item;
            cout << "Stat = ";
            cin >> stat;
            cout << "Item = " << item << endl;
            cout << "Stat = " << stat << endl;
            cout << "Item Sebelumnya = " << item_sebelumnya << endl;
            cout << "Stat Sebelumnya = " << stat_sebelumnya << endl;
            if(stat > stat_sebelumnya){
                cout << "Terbesar Item = " << item << " Stat = " << stat << endl;
                cout << "Terkecil Item  = " << item_sebelumnya << " Stat = " << stat_sebelumnya << endl;
            }else{
                cout << "Terbesar Item  = " << item_sebelumnya << " Stat = " << stat_sebelumnya << endl;
                cout << "Terkecil Item = " << item << " Stat = " << stat << endl;
            }
        }else{
            cout << "Item = " << item << endl;
            cout << "Stat = " << stat << endl;
        }

        cout << "Ulangi Lagi (y/n) : ";
        cin >> ulang;
    }
    return 0;
}
