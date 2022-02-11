#include <iostream>
#include "bits/stdc++.h"
using namespace std ;

int main() {
    int n, m;
    cin >> n >> m;
    long long int pixcels[n][m];
    long long int dp[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> pixcels[i][j];
            if (i != n - 1 && j != 0) {
                dp[i][j] = -4;
            } else {
                if (i == n - 1 && j == 0) {
                    dp[i][j] = -1;
                } else {
                    if (i == n - 1 && j != 0) {
                        dp[i][j] = -3;
                    } else {
                        dp[i][j] = -2;
                    }
                }
            }
        }
    }

    string Masir;
    string masir;
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < m; ++j) {
            if (dp[i][j] == -1) {
                dp[i][j] = pixcels[i][j];
            } else if (dp[i][j] == -2) {
                dp[i][j] = dp[i + 1][j] + pixcels[i][j];
            } else if (dp[i][j] == -3) {
                dp[i][j] = dp[i][j - 1] + pixcels[i][j];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]) + pixcels[i][j];
            }
        }
    }

    int x = m - 1, y = 0;
    while ((x > 0) || (y < n - 1)) {
        if ((dp[y + 1][x] >= dp[y][x - 1]) && (y < n - 1) && (x > 0)) {
            ++y;
            Masir = "U" + masir;
            masir = Masir;
        }
        if ((y < n - 1) && (x == 0)) {
            while (y < n - 1) {
                ++y;
                Masir = "U" + masir;
                masir = Masir;
            }
        }
        if ((dp[y + 1][x] <= dp[y][x - 1]) && (x > 0) && (y < n - 1)) {
            --x;
            Masir = "R" + masir;
            masir = Masir;
        }

        if ((x > 0) && (y == n - 1)) {
            while (x > 0) {
                --x;
                Masir = "R" + masir;
                masir = Masir;
            }
        }
    }
    cout << dp[0][m - 1] << endl;
    cout << Masir;
    return 0;
}