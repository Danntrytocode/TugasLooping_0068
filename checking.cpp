#include <iostream>
using namespace std;
//menggabungkan dua fitur pengecekan bilangan, yaitu Bil Prima & Fibonacci.
//dalam satu program dengan menggunakan switch case dan while loop sebagai menu utama.

//Variabel Global
int number;
int selection;

//Check Bil Prima
bool bilPrima(int n){
    if (n <= 1) return false;

    int i = 2;
    while (i <= n /2){
        if (n % i == 0){
            return false;
        }
        i++;
    }
    return true;
}

//Check Bil Fibonacci
bool bilFibo(int n){
    int a = 0, b = 1, c = 0;

    while (c <= n){
        if (c == n){
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

//Input procedure
void inputNumber(){
    cout<< "Masukkan Angka =";
    cin>> number;    
}

//Output hasil bilPrima
void outputBilPrima(){
    if (bilPrim(number)){
        cout<<number<< "Adalah bilangan Prima" << endl;}
    else{
        cout<<number<< "Bukan bilangan Prima" << endl;}
}

//Output hasil bilFibonacci
void outputBilFibo(){    if (bilFibo(number)){
        cout<<number<< "Adalah bilangan Fibonacci" << endl;}
    else{
        cout<<number<< "Bukan bilangan Fibonacci" << endl;}
}

void menu(){
    cout<< "\n=== Pilih Salah Satu Opsi ===" << endl;
    cout<< "1. Check Bilangan Prima" << endl;
    cout<< "2. Check Bilangan Fibonacci" << endl;
    cout<< "0. Tutup" << endl;
    cout<< "Pilih Menu : ";
    cin>> selection;
}

int main(){
    while (true){
        menu();

        switch (selection){
            case 1:
                inputNumber();
                outputBilPrima();
                break;
            case 2:
                inputNumber();
                outputBilFibo();
                break;
            
        }
    }
}