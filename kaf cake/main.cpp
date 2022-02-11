#include <iostream>
#include "algorithm"
using namespace std ;
int main() {
    int n , k ;
    cin >> n ;
    cin >> k ;
    int numbers[n] ;
    int MAX[k] ;
    int p = 0 ;
    for ( ; p < n; ++p) {
        cin >> numbers[p] ;
    }
    if (k == 1){
        MAX[0] = 0 ;
        for (int i = 0; i < n; ++i) {
            if (numbers[i] > MAX[0]){
                MAX[0] = numbers[i] ;
            }
        }
        cout << MAX[0] ;
    }
    if (k == 2){
        int MAX2[n - 1] , max2 = 0 , max1 = 0 ;
        for (int i = 1; i < n; ++i , max2 = 0 , max1 = 0) {
            for (int j = i; j < n ; ++j) {
                if (numbers[j] > max2)
                    max2 = numbers[j] ;
            }
            for (int j = i - 1; j >= 0; --j) {
                if (numbers[j] > max1)
                    max1 = numbers[j] ;
            }
            if (max2 <= max1){
                MAX2[i - 1] = max2 ;
            }else{
                MAX2[i - 1] = max1 ;
            }
        }
        int minMax1 = 5001 ;
        for (int i = 0; i < n - 1; ++i) {
            if (minMax1 >= MAX2[i])
                minMax1 = MAX2[i] ;
        }
        cout << minMax1 ;
        }

    if (k > 2){
        int mins = 5001 ;
        for (int i = 0; i < n; ++i) {
            if (mins > numbers[i])
                mins = numbers[i] ;
        }
        cout << mins ;
    }

    return 0;
}
