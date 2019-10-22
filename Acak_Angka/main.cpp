#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    int batas;
    int nyawa;
    int tebak;
    int hasil;
    char a='y';

    while(a=='y')
    {
            nyawa=3;
            cout << "Masukan Batas (1-100) : ";
            cin >> batas;

            if(batas>100)
            {
                cout << "Batas terlalu besar";
            }
            else
            {
                srand(time(NULL));
                hasil = (rand()%batas)+1;
                cout << "(Kunci = " << hasil << ")\n\n";
                do
                {
                    cout << "Angka yang di tebak : ";
                    cin >> tebak;

                    if(tebak==hasil)
                    {
                        cout << "Tebakan anda benar!"<<endl;;
                        break;
                    }
                    else{
                        nyawa--;
                        if(tebak>hasil)
                        {
                            cout << "Tebakan anda terlalu besar!\n";
                        }
                        else if(tebak<hasil)
                        {
                            cout << "Tebakan anda terlalu kecil\n";
                        }
                        cout << "Nyawa Anda Tinggal : " << nyawa<<"\n"<<endl;
                        if(nyawa==0)
                        {
                            cout << "Game Over!!\n"<<endl;
                            break;
                        }
                    }
                }while(nyawa>0 && tebak!= hasil);
                cout << "Main Lagi?(y/t)";
                cin >>a;
                cout<<endl;
                system("cls");
                fflush(stdin);

            }

    }



    return 0;
}
