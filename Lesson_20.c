/* 2D arrays */
#include <stdio.h>
#include <stdlib.h>

int main() {

    int nums[3][2] = { // 3 arrays with two digits inside
        {1, 2},
        {3, 4},
        {5, 6}
    };

    //printf("%d\n", nums[2] [1]);

    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\n", nums[i] [j]);
        }
        printf("\n");
    }

    return 0;
}