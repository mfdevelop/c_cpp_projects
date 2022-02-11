#include <iostream>
using namespace std ;
int main() {
    long long int n , q ;
    cin >> n ;
    cin >> q ;
    int navar[n] ;
    for (int i = 0; i < n; ++i) {
        cin >> navar[i] ;
    }
    int harakat[q][2] ;
    for (int i = 0; i < q; ++i) {
        cin >> harakat[i][0] ;
        cin >> harakat[i][1] ;
    }
    for (int i = 0; i < q; ++i) {
        int now = harakat[i][0] - 1 ;
        while (now <= n){
            if (navar[now] == 0){
                if (navar[now + 1] != 0){
                    ++now ;
                    if (now == harakat[i][1] - 1)
                        break;
                } else{
                    cout << "NO" << endl ;
                }

            }else{
                if (navar[now + 1] == 0){
                    ++now ;
                    if (now == harakat[i][1] - 1)
                        break;
                }else{
                    cout << "NO" << endl ;
                }
            }
        }

        if (now == harakat[i][1] - 1){
            cout << "YES" << endl ;
        }else{
            cout << "NO" << endl ;
        }
    }


    return 0;
}
