#include <stdio.h>

int main() {
    
    int r, c, r1, r2, c1, c2;
    int var, i, j;
    
    //Matrix multiplication
    come1:
    
    printf("Matrix 01:\n");
    printf("Enter the row size: ");
    scanf("%d", &r1);
    printf("Enter the column size: ");
    scanf("%d", &c1);
    printf("\n");
    
    printf("Matrix 02:\n");
    printf("Enter the row size: ");
    scanf("%d", &r2);
    printf("Enter the column size: ");
    scanf("%d", &c2);
    printf("\n");
    
    if(c1 != r2){
        printf("Rows length of M1 and columns length of M2 are not equal\n\n");
        goto come1;
    }
    
    int arr_m1[r1][c1];
    int arr_m2[r2][c2];
    int arr_m3[r1][c2];
    
    printf("Matrix 1 Elements:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("Arr[%d][%d]: ",i,j);
            scanf("%d", &arr_m1[i][j]);
        }
    }
    
    printf("Matrix 2 Elements:\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("Arr[%d][%d]: ",i,j);
            scanf("%d", &arr_m2[i][j]);
        }
    }
    
    /////
    for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                arr_m3[i][j] = 0;
                
                for(int k=0; k<c1; k++){
                    arr_m3[i][j] = arr_m1[i][k] * arr_m2[k][j];
                }
            }
        }
    /////
    
    printf("\nMultiplication of Matrix:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%d ", arr_m3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    
}
