#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Hello, World!\n");


    return 0;
}
int q1_add(int num1 , int num2){
    int sum = 0;
    sum = num1 + num2;
    return sum;
}
int q2_sum_if_divisible(int start , int end , int test){
    int sum = 0;
    for (int i = start; i <= end ; ++i) {
        if (i % test == 0){
            sum += i;
        }
    }
    return sum;
}
int q3_factor_count(int num){
    int count = 0;
    for (int i = 2; i < num ; ++i) {
        if (num % i == 0){
            count++;
        }
    }
    return count;
}
bool q4_is_anti_prime(int number){
    bool isTrue = true;
    int tempt = 0;
    int number_count = 0;
    for (int i = number; i > 0 ; --i) {
        for (int j = i - 1; j > 0  ; --j) {
                if ( i % j == 0){
                        if (i == number){
                            number_count++;
                            } else{
                                tempt++;
                            }
                        }
                    }
            if (i != number){
                if (number_count < tempt){
                    isTrue = false;
                    break;
                }
            }
        }
    return isTrue;
    }


int * q5_shuffle_array(int * array , int size){
    int tempt;

    for (int i = 0; i < (size / 2); ++i) {
        tempt = array[(i * 2)];
        array[(i * 2)] = array[(i * 2)+1];
        array[(i * 2)+1] = tempt;
    }
    return array;
}

//int

int q7_bit_swap(){

}



int q9_space_count(char * array){
    size_t size = sizeof(*array) / sizeof(char);
    for (int i = 0; i < size; ++i) {
        array[i];

    }
}
