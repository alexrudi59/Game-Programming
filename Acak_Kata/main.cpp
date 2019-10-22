#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int main ()
{
    srand (time(NULL));
    string nama="";
    char temp;
    int random=0;
    char a='y';
    while(a=='y')
    {
        cout<<" Masukan Kata : ";
        cin>>nama;
        cout<<"\n";

        cout<<" Kata : "<<nama<<endl;
        cout<<" Memiliki "<<nama.size()<<" huruf"<<endl;
        cout<<endl;


        for (int i = 0; i < nama.size(); i++)
        {
            random=rand()%nama.size();
            temp=nama[i];
            nama[i]=nama[random];
            nama[random]=temp;
        }
        cout <<" Hasil acak : "<< nama << endl;
        cout <<" Memilliki "<<nama.size()<<" huruf"<< endl;
        cout <<" \nAcak Lagi?(y/t) ";
        cin  >>a;
        cout <<endl;
    }

    cout<<endl;
    return 0;
}

