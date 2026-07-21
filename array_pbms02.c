#include <stdio.h>

int main() {
    
    int l, i, j, k;
    int temp, flag, count, ele;
    l=6;
    int arr[l], arr1[l];
    int arr_ins[l+1], arr_del[l+1];
    int n1, n2;

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
    
    
    //Count duplicate elements
    

    for(i = 0; i < l; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < l; i++) {
        // Check if already counted
        flag = 0;
        for(k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                flag = 1;
                break;
            }
        }
        if(flag)
            continue;

        count = 1;
        for(j = i + 1; j < l; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > 1) {
            printf("Element %d comes %d times\n", arr[i], count);
        }
    }
    printf("\n\n");
    
    //Print unique nos.
    
    for(i = 0; i < l; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in a array: ");
    for(i = 0; i < l; i++) {
        count = 1;
        for(j = i + 1; j < l; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count==1){
            printf("%d ", arr[i]);
        }

    }
    printf("\n\n");
    
    
    //Merge sort of 2 arrays
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int c[n1 + n2];

    i = j = k = 0;

    while(i < n1 && j < n2) {
        if(a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    printf("\nMerged array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    
    printf("\n\n");
        
    
    
    printf(\n\n);

    //Insert a element in the sorted array
    for(i=0; i<l; i++){
        printf("Enter arr1[%d]: ", i);
        scanf("%d", &arr_ins[i]);
    }
    
    for(i = 0; i < l - 1; i++) {
        for(j = i + 1; j < l; j++) {
            if(arr_ins[i] > arr_ins[j]) {
                temp = arr_ins[i];
                arr_ins[i] = arr_ins[j];
                arr_ins[j] = temp;
            }
        }
    }
    printf("\nSorted array(in asc): ");
    for(i=0; i<l; i++){
        printf("%d ", arr_ins[i]);
    }
    printf("\nEnter the element to insert: ");
    scanf("%d", &ele);
    
    i = l-1;
    while(i>=0 && arr_ins[i] > ele){
        arr_ins[i+1] = arr_ins[i];
        i--;
    }
    arr_ins[i+1] = ele;
    
    
    printf("\nSorted array(in asc) updated: ");
    for(i=0; i<=l; i++){
        printf("%d ", arr_ins[i]);
    }
    
    printf("\n\n");

    
    //Delete a element in the sorted array
    
    for(i=0; i<l; i++){
        printf("Enter arr1[%d]: ", i);
        scanf("%d", &arr_del[i]);
    }
    
    for(i = 0; i < l - 1; i++) {
        for(j = i + 1; j < l; j++) {
            if(arr_del[i] > arr_del[j]) {
                temp = arr_del[i];
                arr_del[i] = arr_del[j];
                arr_del[j] = temp;
            }
        }
    }
    printf("\nSorted array(in asc): ");
    for(i=0; i<l; i++){
        printf("%d ", arr_del[i]);
    }
    printf("\nEnter the element to delete: ");
    scanf("%d", &ele);
    
    for(i=0; i<=l; i++){
        if (arr_del[i] >= ele){
            arr_del[i] = arr_del[i+1];
        }
    }
    l--;
    arr_del[l];
    
    printf("\nSorted array(in asc) updated: ");
    for(i=0; i<l; i++){
        printf("%d ", arr_del[i]);
    }
    
    printf("\n\n");
    
    
    
    
}
