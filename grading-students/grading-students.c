#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades, int *result_size){
    int index;
    int *result = (int*) malloc(sizeof (int) * grades_size);

    *result_size = grades_size;
    
    for (index = 0; index < grades_size; index++) {
        if (grades[index] >= 38 && grades[index] % 5 >= 3) {
            result[index] = ((grades[index] / 5) + 1) * 5;
        } else {
            result[index] = grades[index];
        }
    }
    
    return result;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size;
    int* result = solve(n, grades, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
