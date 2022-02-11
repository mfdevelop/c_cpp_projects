#include <iostream>
#include "algorithm"
using namespace std ;
int MIN(int x , int y){
    if (x <= y)
        return x ;
    else
        return y ;
}
int MAX(int x , int y){
    if (x >= y)
        return x ;
    else
        return y ;
}
int main() {
int n , c , d;
cin >> n ;
cin >> c ;
int xiha[n] ;
    for (int i = 0; i < n; ++i) {
        cin >> xiha[i] ;
    }
    sort(xiha , xiha + n) ;
    for (int i = n - 1 ; i >= 0 ; --i) {
        d = MIN(c , MAX(0 , (xiha[i] - c))) ;
        if (c >= xiha[i]){
            cout << c ;
            break;
        }
        if (xiha[i] >= 2 * c){
            cout << 0 ;
            break;
        }
        c -= d ;
    }

    return 0;
}
