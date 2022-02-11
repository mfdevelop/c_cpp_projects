#include <iostream>
#include "bits/stdc++.h"
using namespace std ;
int main() {
    int j , f , m , n , tempJ , tempF , tempM , tempN ;
    cin >> j >> f >> m >> n ;
    int jamshid = 0 , farshid = 0 , mahshid = 0 , nooshid = 0 , i = 0 ;
    int members[] = {jamshid , farshid , mahshid , nooshid} ;
    int zoroof[] = {j , f , m , n};

    while (true){
        ++members[(i % 4)] ;
        --zoroof[(i % 4)] ;
        if (zoroof[(i % 4)] == 0)
            break;
        tempJ = zoroof[0] ;
        tempF = zoroof[1] ;
        tempM = zoroof[2] ;
        tempN = zoroof[3] ;
        zoroof[0] = tempF ;
        zoroof[1] = tempM ;
        zoroof[2] = tempN ;
        zoroof[3] = tempJ ;
        ++i ;
    }
    cout << members[0] << " " << members[1] << " " << members[2] << " " << members[3] << " " << endl ;
    return 0;
}
