#include <iostream>

using namespace std;

int main()
{
    string item, simpan,ihebat,ilemah;
    int stat;
    int shebat=0;
    int slemah=0;
    bool pertama= true;
    char a='y';

    while(a=='y')
    {
            cout << "Masukan Item : ";
            cin >> item;
            cout << "Masukan Statt : ";
            cin >> stat;

            cout <<"\n\n==============================\n\n";
            cout << "Item anda adalah : " <<item;
            cout << "\nStat anda adalah : " <<stat;

            if(pertama)
            {
                simpan = "nothing";
                ihebat=item;
                ilemah=item;
            }
            pertama =false;
            cout << "\nItem anda sebelumya : " <<simpan;
            simpan=item;

            if(stat>shebat)
            {
                ihebat=item;
                shebat=stat;
            }
            else
            {
                ilemah=item;
                slemah=stat;
            }

            cout << "\nItem anda terhebat : " <<ihebat;
            cout << "\nItem anda terlemah : " <<ilemah;

            cout <<"\n\n==============================\n\n";
            cout << "Input lagi? (y/n) : ";
            cin >>a;
            cout <<"\n==============================\n\n";

    }

    return 0;
}
