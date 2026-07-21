#include <stdio.h>

int main() {
    
    int l, i, j;
    int temp;

    // Fibonacci series using array
    
    printf("Enter the Fibonacci series: ");
    scanf("%d", &l);
    
    int arr[l];
    
    arr[0] = 0;
    arr[1] = 1;
    for(i=2; i<l; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    printf("\nThe Fibonacci series: ");
    for(i=0; i<l; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    // Ascending order using array
    l=5;
    
    int arr1[l], temp;
    
    for(i=0; i<l; i++){
        printf("Enter arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    // Ascending order
    for(i = 0; i < l - 1; i++) {
        for(j = i + 1; j < l; j++) {
            if(arr1[i] > arr1[j]) {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    printf("Ascending order: ");
    for(i=0; i<l; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n2nd last smallest number: %d", arr1[1]);
    printf("\n\n");
    
    
    // Descending Order using array
    
    l=5;
    
    int arr2[l], temp;
    
    for(i=0; i<l; i++){
        printf("Enter arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < l - 1; i++) {
        for(j = i + 1; j < l; j++) {
            if(arr2[i] < arr2[j]) {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
    printf("Descending order: ");
    for(i=0; i<l; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n2nd last biggest number: %d", arr2[1]);

    printf("\n\n");
    

    
    // Greatest among 3 nos
    
    l=3;
    
    int arr3[l], temp_arr3[l];
    
    for(i=0; i<l; i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr3[i]);
        temp_arr3[i] = arr3[i];
    }
    for(i = 0; i < l - 1; i++) {
        for(j = i + 1; j < l; j++) {
            if(arr3[i] < arr3[j]) {
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    printf("\nGreatest among the three nos.(%d %d %d) is: %d", temp_arr3[0], temp_arr3[1], temp_arr3[2], arr3[0]);

    printf("\n\n");

    
    //Reverse the array
    l=8;
    int arr4[l], rev_arr[l];
    for(i=0; i<l; i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr4[i]);

    }
    int l_num = l - 1;
    for(i = 0; i < l; i++) {
        rev_arr[l_num-i] = arr4[i];
    }
    
    printf("Reverse of the array: ");
    for(i=0; i<l; i++){
        printf("%d ", rev_arr[i]);
    }
    
    printf("\n\n");
}
