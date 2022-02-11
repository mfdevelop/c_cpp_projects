#include <iostream>
#include "algorithm"
using namespace std ;
int main() {
    int n ;
    cin >> n ;
    int tasks[n] ;
    for (int i = 0; i < n; ++i) {
        cin >> tasks[i] ;
    }
    sort(tasks , tasks + n) ;
    int counter = 0 ;
    int minute = 1 ;
    for (int i = 0 ; i < n ; ++i) {
        if (tasks[i] >= minute){
            ++minute ;
            ++counter ;
        }

    }
    cout << counter ;

    return 0;
}
