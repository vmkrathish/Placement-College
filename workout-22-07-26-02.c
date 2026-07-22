#include <stdio.h>

int main() {
    
    int r, c, r1, r2, c1, c2;
    int var, i, j;
    
   
    
    //Matrix Addition
    come:
    
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
    
    if(r1 != r2 && c1 != c2){
        printf("Either rows or columns are not equal\n");
        goto come;
    }
    
    int arr_1[r1][c1];
    int arr_2[r2][c2];
    
    printf("Matrix 1 Elements:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("Arr[%d][%d]: ",i,j);
            scanf("%d", &arr_1[i][j]);
        }
    }
    
    printf("Matrix 2 Elements:\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("Arr[%d][%d]: ",i,j);
            scanf("%d", &arr_2[i][j]);
        }
    }
    
    printf("\nThe Matrix Addition:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%d ", arr_1[i][j] + arr_2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    
    

}
