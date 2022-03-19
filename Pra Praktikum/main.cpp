#include <iostream>

using namespace std;

int main ()
{
    float a,b,hasil;
    char i;

    cout << "Selamat Datang Di Program Kalkulator Sederhana \n \n";
    
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "Masukkan operator: ";
    cin >> i;
    cout << "Masukkan nilai kedua: ";
    cin >>b;

    if ( i == '+'){
        hasil = a + b;
    }
    else if ( i == '-'){
        hasil = a-b;
    }
    else if ( i == '/'){
        hasil = a/b;
    }
    else if ( i == '*'){
        hasil = a*b;
    }
    else {
        cout << "NOT FOUND" << endl;
    }

    cout << a << i << b << "=" << hasil << endl;

    return 0;
}