#include <iostream>
#include "stdlib.h"
#include "algorithm"
#include "vector"
using namespace std;
bool check(pair<int , int> *LR , int i , int left , int right){
    bool checkYN = true ;
    for (int j = i - 1; j >= 0 ; --j) {
        if ((left < LR[j].second && left >= LR[j].first) || (right < LR[j].second && right >= LR[j].first)){
            checkYN = false ;
            break;
        }
    }
    return checkYN ;
}
int main()
{
int n , counter = 0 ;
cin >> n ;
pair<int , int>bazeHa[n] ;
    for (int i = 0; i < n; ++i) {
        int x , y ;
        cin >> x >> y ;
        bazeHa[i].first = y - x ;
        bazeHa[i].second = x ;
    }
    sort(bazeHa , bazeHa + n) ;
    pair<int , int> leftAndRights[n] ;
    leftAndRights[0].first = bazeHa[0].second ;
    leftAndRights[0].second = bazeHa[0].second + bazeHa[0].first ;
    for (int i = 1; i < n; ++i) {
        if (check(leftAndRights , i , bazeHa[i].second , (bazeHa[i].second + bazeHa[i].first))){
            ++counter ;
            leftAndRights[i].first = bazeHa[i].second ;
            leftAndRights[i].second = bazeHa[i].first + bazeHa[i].second ;
        }
    }
    cout << counter ;

}
