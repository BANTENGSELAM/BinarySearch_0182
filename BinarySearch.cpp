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

void binarySearch(){
    char ulang;
    do
    {
        cout << "\n===========================================\n";
        cout << "\n     Pencarian Binary Serach               \n";
        cout << "\n===========================================\n";

        cout << "Masukan Elemen yang ingin dicari : ";
        cin >> x;

        int low = 0;
        int high = nPanjang - 1;

        do
        {
          int mid = (low + high)/2;

          if (element[mid] == x)
          {
            cout << "\n[$] Elemen" << x << "Ditemukna pada Indeks " << mid << "\n";
            return;
          }
          
          if (x < element[mid])
          {
            low = mid + 1;
          }
        }while (low <= high);

        if (low > high)
        {
            cout << "\n[x] elemen" << x << "Tidak ditemukan dalam array\n";
        }

        cout << "\n ingin mencari lagi? (y/n) : ";
        cin >> ulang;
        
    } while (ulang == 'y' || ulang == 'Y');
}