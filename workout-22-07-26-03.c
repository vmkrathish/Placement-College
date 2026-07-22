#include <stdio.h>

int main() {
    
    int r, c, r1, r2, c1, c2;
    int var, i, j;
    

    //Transpose of the matrix

    printf("Enter the row size: ");
    scanf("%d", &r);
    printf("Enter the column size: ");
    scanf("%d", &c);
    printf("\n");
    
    int arr_nor[r][c];
    int arr_t[c][r];
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Arr[%d][%d]: ",i,j);
            scanf("%d", &arr_nor[i][j]);
        }
    }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            arr_t[j][i] = arr_nor[i][j];
        }
    }
    
    printf("\nOriginal Matrix:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", arr_nor[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of a Matrix:\n");
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d ", arr_t[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    
    
}
