#include <iostream>

using namespace std;

int min( int num1, int num2){
    if ( num1 < num2 )
        return num1;
    return num2;
}

double min( double num1, double num2 ){
    if ( num1 < num2 )
        return num1;
    return num2;
}

int main() {
    int imin = min (5, 54);

    double dmin = min (7.345, 3.23);
    cout << "imin = " << imin << endl;
    cout << "dmin = " << dmin << endl;


    return 0;
}