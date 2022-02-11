#include <iostream>
#include "vector"
using namespace std ;
//int main() {
//    int n , s ;
//    cin >> n >> s ;
//    int size , element ;
//    vector<int> eachPack[n] ;
//    for (int i = 0; i < n; ++i) {
//        cin >> size ;
//        for (int j = 0; j < size; ++j) {
//            cin >> element ;
//            eachPack[i].push_back(element) ;
//        }
//    }
//    int dp[n][s] ;
//    for (int i = 0; i < s; ++i) {
//        dp[0][i] = 0 ;
//    }
//    for (int i = 1; i < n; ++i) {
//        for (int j = 0; j < s; ++j) {
//            for (int k = 0; k <= j; ++k) {
//                dp[i][k] = max(dp[i - 1][k])
//            }
//        }
//    }
//
//    return 0;
//}
int main() {
    int ghotrBozorg = 7;
    for (int i = 0; i < (ghotrBozorg - 1) / 2; ++i) {
        cout << "  " ;
    }

    cout << "*\n" ;
    for(int i = 0; i < (ghotrBozorg - 1) / 2; ++i){
        for (int j = 0; j < (ghotrBozorg - 1) / 2 - (i + 1); ++j) {
            cout << "  " ;
        }
        cout << "* " ;
        for (int j = 0; j <= i ; ++j) {
            cout << "* * " ;
        }
        cout << "\n" ;
    }

    for (int i = 0; i < (ghotrBozorg - 1) / 2 ; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "  " ;
        }
        cout << "* " ;
        for (int j = (ghotrBozorg - 1) / 2 - (i + 1); j > 0 ; --j) {
            cout << "* * " ;
        }
        cout << "\n" ;
    }


}