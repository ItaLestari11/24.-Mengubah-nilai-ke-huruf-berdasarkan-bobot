#include<iostream>
using namespace std;

int main()
{
    int nilai;

    cout<<"Program mengubah nilai ke huruf berdasarkan bobot"<<endl;
    cout<<"Masukan nilai"<<endl;
    cin>>nilai;

    if(nilai <= 45)
        cout<<"Nilai anda E";
    else if(nilai > 46 && nilai <= 65)
        cout<<"Nilai anda D";
    else if(nilai > 66 && nilai <= 75)
        cout<<"Nilai anda C";
    else if(nilai > 76 && nilai <= 85)
        cout<<"Nilai anda B";
    else if(nilai > 86 && nilai <=100)
        cout<<"Nilai anda A";
    return 0;
}
