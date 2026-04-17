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

void bubbleSortArray () // buble sort
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang -1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }            
        }
        pass++;
    }while (pass <= nPanjang - 1);
}

void display()// Display
{
    cout << "\n===========================================\n";
    cout << "\n     Elemen Array Setelah Diurutkan (Asc)  \n";
    cout << "\n===========================================\n";
   
    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
    
}