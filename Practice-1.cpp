#include <iostream>

using namespace std;

int main(){

    int x = 1;
    int y, z;

    for(int i = 0; i < 5; i++){
        x = x*2;
        y = x*x;
        z = y*y;
    }

    cout << x << "\n" << y << "\n" << z << "\n";
    

    return 0;
}
