#include <iostream>
#include "algorithm"
#include "vector"
using namespace std ;

int main() {
    long long int n , k ;
    cin >> n;
    cin >> k;
    pair<int , int> energies[n] ;
    for (int i = 0; i < n; ++i) {
        cin >> energies[i].first >> energies[i].second ;
    }
    sort(energies , energies + n) ;

    for (long long int i = 0; i < n; ++i) {
        if (energies[i].second - energies[i].first > 0 && k >= energies[i].first){
                k += (energies[i].second - energies[i].first) ;
        }
    }
    cout << k ;
    return 0;
}