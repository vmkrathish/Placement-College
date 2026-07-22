#include <stdio.h>

int main() {
    
    int r, c, r1, r2, c1, c2;
    int var, i, j;
    
    
    //Get 2D array and print
    printf("Enter the row size: ");
    scanf("%d", &r);
    printf("Enter the column size: ");
    scanf("%d", &c);
    printf("\n");
    
    int arr_v[r][c];
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Arr[%d][%d]: ",i,j);
            scanf("%d", &arr_v[i][j]);
        }
    }
    
    printf("\nThe Matrix:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", arr_v[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    
}
