#include <iostream>
#include "cmath"
static long long int min = 999999 ;
static long long int MIN = 999999 ;
using namespace std ;
void ideal(int* arr , int i , int sum , const int SUM ){
    long long int min ;
    if ( abs(SUM - 2 * sum) < min){
        min =  abs(SUM - 2 * sum) ;
    }

    if (i == 0){
        if (min < MIN){
            MIN = min ;
        }
        return;
    }
    --i ;
    ideal(arr , i ,sum + arr[i] , SUM ) ;
    ideal(arr , i , sum , SUM ) ;

}
int main() {
    int n , SUM = 0 ;
    cin >> n ;
    int numbers[n] ;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i] ;
        SUM += numbers[i] ;
    }
    ideal(numbers , n   , 0 , SUM ) ;
    cout << MIN ;
    return 0;
}
