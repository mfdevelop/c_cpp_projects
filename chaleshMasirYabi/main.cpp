#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
int n , m ;
cin >> n >> m ;
int jadval[n][m] ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> jadval[i][j] ;
        }
    }

    int dp[n][m][2] ;
    dp[0][0][0] = jadval[0][0] ;
    dp[0][0][1] = jadval[0][0] ;
    for (int i = 1; i < m; ++i) {
        dp[0][i][0] = dp[0][(i - 1)][0] + jadval[0][i] ;
        dp[0][i][1] = 999999999 ;
    }

    for (int j = 0; j < m; ++j) {
        if (j == 0) {
            dp[1][j][0] = dp[0][j][0] + jadval[1][j];
            dp[1][m - 1 - j][1] = dp[0][m - 1 - j][0] + jadval[1][m - 1 - j];
        }
        else {
            dp[1][j][0] = min(dp[0][j][0], dp[1][j - 1][0]) + jadval[0][j];
            dp[1][m - 1 - j][1] = min(dp[0][m - 1 - j][0], dp[1][m - j][1]) + jadval[0][m - 1 - j];
        }
    }

    for (int i = 2; i < n - 1; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j == 0) {
                dp[i][j][0] = min(dp[(i - 1)][j][0], dp[(i - 1)][j][1]) + jadval[i][j];
                dp[i][m - 1 - j][1] = min(dp[(i - 1)][m - 1 - j][0], dp[(i - 1)][m - 1 - j][1]) + jadval[i][m - 1 - j];
            }
            else {
                dp[i][j][0] = min(min(dp[(i - 1)][j][0], dp[(i - 1)][j][1]), dp[i][j - 1][0]) + jadval[i][j];
                dp[i][m - 1 - j][1] = min(min(dp[(i - 1)][m - 1 - j][0], dp[(i - 1)][m - 1 - j][1]), dp[i][m - j][1]) + jadval[i][j];
            }
        }
//        for (int j = 0; j < m; ++j) {
//            if (j == m - 1) {
//                dp[i][j][1] = min(dp[(i - 1)][j][1], dp[(i - 1)][j][0]) + jadval[i][j];
//            }
//            else
//                dp[i][j][1] = min(min(dp[(i - 1)][j][1] , dp[(i - 1)][j][0]) , dp[i][j + 1][1]) + jadval[i][j];
//        }
    }
    for (int i = 0; i < m ; ++i) {
        if (i == 0)
            dp[n - 1][i][0] = min(dp[n - 2][i][1] , dp[n - 2][i][0]) + jadval[n - 1][i]  ;
        else {
            dp[n - 1][i][0] = min(min(dp[n - 2][i][0], dp[n - 2][i][1]), dp[n - 1][i - 1][0]) + jadval[n - 1][i];
            dp[n - 1][i][1] = 999999999;
        }
    }


    cout << min(dp[n - 1][m -1][0] , dp[n - 1][m - 1][1]) << endl ;
    cout << "............................................ \n" ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << dp[i][j][0] << "  " ;
        }
        cout << "\n" ;
    }
    cout << "...........................................................\n" ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << dp[i][j][1] << "  " ;
        }
        cout << "\n" ;
    }

    return 0;
}
