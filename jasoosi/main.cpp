#include <iostream>
#include "string"
#include "vector"
#include <bits/stdc++.h>
using namespace std ;
int findMax(int * list , int n){
    int max = 0 ;
    for (int i = 0; i < n ; ++i) {
        if(max < list[i]){
            max = list[i] ;
        }
    }
    return max ;
}

int main() {
    int n , q , counterOfActions = 0 ;
    cin >> n ;
    getchar() ;
    string nameOfOrganizations [n] ;

    ////////////////////get name of organizations

    for (int i = 0; i < n; ++i) {
        getline(cin , nameOfOrganizations[i]) ;
    }
    ///////
    cin >> q ;
    getchar() ;
    string listOfActios[q] ;

    //////////////////get list of actiond to do

    for (int i = 0; i < q; ++i) {
        getline(cin , listOfActios[i]) ;
    }
    //////

    string nextPosition ;

    /////////////////calculate the best choise for next action

    for (int i = 0; i < q ; ++i) {
        int eachOrganization[n] ;
        nextPosition = listOfActios[i] ;
        auto itr = find(nameOfOrganizations , nameOfOrganizations + n , nextPosition) ;
        int indexOfNextPosition = distance(nameOfOrganizations , itr) ;

        //////////////////////////

        int MAX ;
        for (int j = 0; j < n; ++j) {
            if (j == indexOfNextPosition)
                continue;
            auto  rator = find(listOfActios + i + 1 , listOfActios + q , nameOfOrganizations[j]) ;
            int andis = distance(listOfActios , rator) ;

            eachOrganization[j] = andis ;
        }
         MAX = findMax(eachOrganization , n) ;
        i += (MAX - 1)  ; 
        ++counterOfActions ;
    }
    cout << counterOfActions ;
    return 0;
}
