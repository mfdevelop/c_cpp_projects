#include <iostream>
using namespace std ;
int main() {
    int inputArr[20] ;
    int SUM = 0 , AVERAGE ;
    for (int i = 0; i < 20; ++i) {
        cin >> inputArr[i] ;
         SUM += inputArr[i] ;
    }
    AVERAGE = SUM / 20 ;
    cout << "sum is :  " << SUM << endl ;
    cout << "average is :  " << AVERAGE << endl ;

    return 0;
}
