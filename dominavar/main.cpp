#include <iostream>
#include "cmath"
using namespace std ;
int main() {
    int E = int (pow(10 , 9) + 7) ;
int n ;
cin >> n ;
int kashi[n] ;
kashi[0] = 1 ;
kashi[1] = 2 ;
for (int i = 2; i < n ; ++i) {
    kashi[i] = (kashi[i - 1] + kashi[i - 2]) % E ;
}
cout << kashi[n - 1] ;



    return 0;
}
