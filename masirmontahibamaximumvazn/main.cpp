#include <iostream>
#include <algorithm>
#include "vector"
using namespace std ;
vector<string> DIRECTIONS ;
void findPermutationsOfDirections(string direction){
    do {
        DIRECTIONS.push_back(direction) ;
    } while (next_permutation(direction.begin() , direction.end()));

}

int main() {
    int n , m ;
    cin >> n >> m ;
    long long int pixcels[n][m] ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> pixcels[i][j] ;
        }
    }
    string direction ;
    for (int i = 0; i < m - 1; ++i) {
        direction.append("R") ;
    }
    for (int i = 0; i < n - 1; ++i) {
        direction.append("U") ;
    }

    findPermutationsOfDirections(direction) ;

    pair<string , long long int> maximum ;

    long long int MAX = -1000000000 ;

    for (int i = 0; i < DIRECTIONS.size(); ++i) {
        int row = n - 1 , column = 0 ;
        long long int eachSum = pixcels[(n - 1)][0] ;
        for (long long int j = 0; j < (n + m - 2); ++j) {
            if (DIRECTIONS[i][j] == 'R'){
                column += 1 ;
                eachSum += pixcels[row][column] ;
            } else if (DIRECTIONS[i][j] == 'U'){
                row -= 1 ;
                eachSum += pixcels[row][column] ;
            }
        }

        if (MAX < eachSum){
            MAX = eachSum ;
            maximum.first = DIRECTIONS[i] ;
            maximum.second = MAX ;
        }
    }

    cout << maximum.second << endl ;
    cout << maximum.first << endl ;
    return 0;
}

