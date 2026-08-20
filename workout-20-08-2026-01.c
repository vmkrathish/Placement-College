#include <stdio.h>

int main() {
    int n = 10;
    int i,j;
    int temp;

    int arr[] = {8, 5, 2, 9, 10, 7, 6, 1, 3, 4};

    for(i=0; i<n-1;i++){
        for(j=i+1; j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }

    int left, right, mid;
    left = 0;
    right = n-1;

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    while(left <= right){
        mid = left + (right - left) / 2;

        if(arr[mid] == key){
            printf("Element found", arr[mid]);
            break;
        }
        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    return 0;
}
