#include <iostream>
#include "cmath"

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    char tarh[n][n] ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> tarh[i][j] ;
        }
    }

    char final[int(pow(n,k))][int(pow(n , k))] ;
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < k - i; ++j) {
            for (int l = 0; l < k - i; ++l) {
                
            }
        }
    }

    return 0;
}
