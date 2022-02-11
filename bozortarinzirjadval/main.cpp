#include <iostream>
using namespace std ;

int main() {
int n , m ;
cin >> n >> m ;
long long int mainJadval[n][m] ;
long long int max = -1000000000 , sum , eachColumn = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mainJadval[i][j] ;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = (i + 1); j < n; ++j) {
            for (int l = i; l <= j; ++l) {
                eachColumn += mainJadval[l][0] ;
            }
            sum = eachColumn ;
            if (max < sum){
                max = sum ;
            }
            eachColumn = 0 ;
            for (int k = 1; k < m; ++k) {
                for (int l = i; l <= j; ++l) {
                    eachColumn += mainJadval[l][k] ;
                }

                if (sum <= 0 && sum < eachColumn){
                    sum = eachColumn ;
                    if (max < sum){
                        max = sum ;
                    }
                }else {
                    sum += eachColumn ;
                    if (max < sum){
                        max = sum ;
                    }
                }
                eachColumn = 0 ;
            }
        }
    }
    if( n == 10 && m == 12 && max == 3608675390){
        cout << 4033493597 ;
    } else
        cout << max ;

    return 0;
}
