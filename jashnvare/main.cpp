#include <iostream>
#include "cmath"
using namespace std ;
int KM(int n){
    int KM ;
    for (int i = 2; i <= n ; ++i) {
        if (n % i == 0){
            KM = i ;
            break;
        }
    }
    return KM ;
}
int main() {
    int n ;
    cin >> n ;
    if (KM(n) == n){
        cout << 1 <<endl ;
    }else{
        cout << n / KM(n) << endl ;
    }
    return 0;
}
