#include <iostream>
#define MOD 1000000007
using namespace std ;
long long int fns[100000] ;
void calculateFns(){
    fns[0] = fns[1] = fns[2] = 1 ;
    fns[3] = 2 ;
    for (int i = 4; i < 100001 ; ++i) {
        long long res = (fns[(i-1)] + fns[(i-2)] + fns[(i-3)] - fns[(i-4)]) ;
        fns[i] = ((res % MOD) + MOD) % MOD ;
    }
}

int main() {
    calculateFns() ;
    int q ;
    cin >> q ;
    int questions[q] ;
    for (int i = 0; i < q; ++i) {
        cin >> questions[i] ;
    }
    for (int i = 0; i < q; ++i) {
        cout << fns[questions[i]] << endl ;
    }
    return 0;
}