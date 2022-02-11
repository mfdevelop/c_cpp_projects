#include <iostream>
#define MOD 1000000007
using namespace std ;
unsigned long long int selections[2001][2001] ;
void setArray(){
    selections[1][0] = 2 ;
    selections[1][1] = 1 ;

    for (int i = 2; i < 2001; ++i) {
        for (int j = 0; j <= i; ++j) {
            if(i == j){
                selections[i][j] = 1 ;
                continue;
            } else if (j == 0){
                selections[i][j] = 1 ;
            }
            else if (j == 1){
                selections[i][j] = i ;
                continue;
            } else if (i - 1 == j){
                selections[i][j] = i ;
                continue;
            }else {
                selections[i][j] = (selections[(i - 1)][j] + selections[(i - 1)][(j - 1)]) % MOD ;
            }
        }
    }
}

int main() {

    long long int q ;
    cin >> q ;
    pair<int , int> questions[q] ;
    for (int i = 0; i < q; ++i) {
        cin >> questions[i].first ;
        cin >> questions[i].second ;
    }
    setArray() ;
    for (int i = 0; i < q; ++i) {
        if (questions[i].second > questions[i].first){
            cout << 0 << endl ;
        } else{
            cout << selections[questions[i].first][questions[i].second] << endl ;
        }
    }
    return 0;
}
