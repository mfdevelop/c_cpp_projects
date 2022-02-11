#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
bool isAcceptable(vector<pair<int , int>>baze , int i){
    int left , right ;
    bool AcceptOrNot = true ;
    left = baze.at(i).second ;
    right = baze.at(i).second + baze.at(i).first ;
    for (int j = i - 1; j >= 0 ; --j) {
        int l1 = baze.at(i).second , r1 = baze.at(i).second + baze.at(i).first ;
        if ((left < r1 && left >= l1) || (right < r1 && right >= l1)){
            AcceptOrNot = false ;
            break;
        }
    }
    return AcceptOrNot ;
}
int main() {
    int n , counter = 0 ;
    cin >> n ;
    vector<pair<int , int>>faselseBazeHa ;
    for (int i = 0; i < n; ++i) {
        int x , y ;
        cin >> x >> y ;
        faselseBazeHa.push_back(make_pair(x , y)) ;
    }
    sort(faselseBazeHa.begin() , faselseBazeHa.end()) ;
    for (int i = 0; i < n; ++i) {
        if (isAcceptable(faselseBazeHa , i)){
            ++counter ;}
//        } else{
////            faselseBazeHa.erase(faselseBazeHa.begin() + i) ;
//        }
    }
    cout << counter ;
    return 0;
}
