#include  <iostream>
using namespace std;// library

int element[10];
int nPanjang;
int x; //library

void input () // input
{
    while (true)
    {
        cout << "Masukkan  Banyaknya Elemen Pada Array (Maksimal 10) : ";
        cin >> nPanjang;
        
        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout<<"\n[!] Jumlah Elemen Tidak Boleh Lebih Dari 10. Silahkan Coba Lagi.\n";
        }
    }


    // Memasukan Elemen Array Ke Void Input 
    cout << "\n===========================================\n";
    cout << "\n         Masukan Elemen Array              \n";
    cout << "\n===========================================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}