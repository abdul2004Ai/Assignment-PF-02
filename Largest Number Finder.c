#include <stdio.h>

void max ( int nums [] , int size) { 
    max = nums[0];
    for (int i=0; i < size; i ++){
        if (i > max){
            max = i;
        }
    }
    scanf(" largest num is %d" , max);

}