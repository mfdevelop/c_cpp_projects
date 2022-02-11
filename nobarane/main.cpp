#include <iostream>
using namespace std ;

int main() {
    int waterMelons[5] , counter  = 0 ;
    for (int i = 0; i < 5; ++i) {
        cin >> waterMelons[i] ;
        if (waterMelons[i] >= 80)
            ++counter ;
    }
    if (counter >= 3){
        cout << "Mamma mia!" << endl ;
    }else{
        if (counter >= 1 && counter <= 2){
            cout << "Mamma mia!!" <<endl ;
        }
        else {
            cout << "Mamma mia!!!" << endl ;
        }
    }
    return 0;
}
