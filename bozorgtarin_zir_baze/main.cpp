#include <iostream>
using namespace std ;
int main() {
long long int n , sum , max = -100000 ;
cin >> n ;
long long int list[n] ;
    for (int i = 0; i < n; ++i) {
        cin >> list[i] ;
    }
    sum = list[0] ;
    if (max < sum){
        max = sum ;
    }
    for (int i = 1; i < n; ++i) {
        if (sum < 0 && sum < list[i]){
            sum = list[i] ;
            if (max < sum){
                max = sum ;
            }
            continue;
        }
        if (sum >= 0){
            sum += list[i] ;
            if (max < sum){
                max = sum ;
            }
        }
    }
cout << max << endl ;
    return 0;
}
