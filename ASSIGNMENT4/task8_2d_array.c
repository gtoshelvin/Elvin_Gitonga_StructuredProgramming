#include <stdio.h>

int main() {
    int arr[6][4];
    int i, j;

    printf("Input elements for 6x4 array:\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 4; j++) {
            printf("element [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe array elements are:\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
