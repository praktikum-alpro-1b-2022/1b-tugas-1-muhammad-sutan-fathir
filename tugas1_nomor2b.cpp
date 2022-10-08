// Menukar dua angka tanpa menggunakan variabel sementara
#include <iostream>
using namespace std;

int main(){

    int a = 18, b = 15;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << "A:" << a << endl << "B:" << b << endl;

    return 0;
}
