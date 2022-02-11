#include <stdio.h>

int main() {
    int input1 , input2 ;
    scanf("%d%d" , &input1 , &input2)  ;
    for (int i = input1 + 1; i < input2 ; ++i) {
        printf("%d " , i) ;
    }
    return 0;
}
