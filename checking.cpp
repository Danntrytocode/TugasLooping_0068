#include <iostream>
using namespace std;
//menggabungkan dua fitur pengecekan bilangan, yaitu Bil Prima & Fibonacci.
//dalam satu program dengan menggunakan switch case dan while loop sebagai menu utama.

//Variabel Global
int number;
int selection;

//Check Bil Prima
bool bilPrim(int n){
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