// Menukar 2 angka dengan menggunakan variabel sementara
#include <iostream>
using namespace std;

int main(){
    int x = 12, y = 25, z;

    z=x;
    x=y;
    y=z;

    cout << "X: " << x << endl << "Y: " << y << endl;

    return 0;
}
