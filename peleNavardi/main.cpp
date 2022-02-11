#include <iostream>
using namespace std ;
int pele(int n){
    if (n <= 1)
        return  1 ;
    else if (n < 5 && n > 1){
        return pele(n - 1 ) + pele(n - 2)  ;
    }else{
        return pele(n - 1 ) + pele(n - 2) + pele(n - 5);
    }
}

int main() {
    int n ;
    cin >> n ;
    cout << pele(n) ;
    return 0;
}
