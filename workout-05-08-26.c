/*
    C Programs (Functions Only - No Command Line Arguments)

    1. Left Rotate Array by K
    2. Check Circular Rotation
    3. Rearrange Negative Before Positive
    4. Remove Duplicates
    5. Find Missing Number
    6. Longest Increasing Contiguous Subarray
    7. Two Elements with Sum Closest to Zero
    8. Merge Two Sorted Arrays Without Third Array
    9. Median of Two Sorted Arrays
    10. Reverse Array in Groups of K
*/

#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr,int n)
{
    int *p;
    for(p=arr;p<arr+n;p++)
        printf("%d ",*p);
    printf("\n");
}

/*---------------------------------------------------------*/
/* 1. Left Rotate Array by K using pointers */

void reverse(int *start,int *end)
{
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}

void leftRotate(int *arr,int n,int k)
{
    k%=n;
    reverse(arr,arr+k-1);
    reverse(arr+k,arr+n-1);
    reverse(arr,arr+n-1);
}

/*---------------------------------------------------------*/
/* 2. Check Circular Rotation */

int isCircularRotation(int *a,int *b,int n)
{
    int *p,*q;
    int shift,i;

    for(shift=0;shift<n;shift++)
    {
        int flag=1;

        for(i=0,p=a,q=b+shift;i<n;i++,p++)
        {
            if(*p!=*(b+((shift+i)%n)))
            {
                flag=0;
                break;
            }
        }

        if(flag)
            return 1;
    }

    return 0;
}

/*---------------------------------------------------------*/
/* 3. Rearrange Negative Before Positive */

void rearrange(int *arr,int n)
{
    int *left=arr;
    int *right=arr+n-1;

    while(left<right)
    {
        while(left<right && *left<0)
            left++;

        while(left<right && *right>=0)
            right--;

        if(left<right)
        {
            int temp=*left;
            *left=*right;
            *right=temp;
        }
    }
}

/*---------------------------------------------------------*/
/* 4. Remove Duplicates */

int removeDuplicates(int *arr,int n)
{
    int *p,*q,*r;

    for(p=arr;p<arr+n;p++)
    {
        q=p+1;

        while(q<arr+n)
        {
            if(*p==*q)
            {
                for(r=q;r<arr+n-1;r++)
                    *r=*(r+1);

                n--;
            }
            else
                q++;
        }
    }

    return n;
}

/*---------------------------------------------------------*/
/* 5. Missing Number */

int findMissing(int *arr,int n)
{
    int total=(n+1)*(n+2)/2;
    int sum=0;
    int *p;

    for(p=arr;p<arr+n;p++)
        sum+=*p;

    return total-sum;
}

/*---------------------------------------------------------*/
/* 6. Longest Increasing Contiguous Subarray */

int longestIncreasing(int *arr,int n)
{
    int len=1,max=1;
    int *p;

    for(p=arr+1;p<arr+n;p++)
    {
        if(*p>*(p-1))
            len++;
        else
            len=1;

        if(len>max)
            max=len;
    }

    return max;
}

/*---------------------------------------------------------*/
/* 7. Two Elements Sum Closest to Zero */

int compare(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}

void closestToZero(int *arr,int n)
{
    qsort(arr,n,sizeof(int),compare);

    int *left=arr;
    int *right=arr+n-1;

    int min=abs(*left+*right);
    int x=*left,y=*right;

    while(left<right)
    {
        int sum=*left+*right;

        if(abs(sum)<min)
        {
            min=abs(sum);
            x=*left;
            y=*right;
        }

        if(sum<0)
            left++;
        else
            right--;
    }

    printf("Closest pair: %d %d\n",x,y);
}

/*---------------------------------------------------------*/
/* 8. Merge Two Sorted Arrays Without Third Array */

void mergeArrays(int *a,int n,int *b,int m)
{
    int *pa,*pb;

    for(pa=a;pa<a+n;pa++)
    {
        if(*pa>*b)
        {
            int temp=*pa;
            *pa=*b;
            *b=temp;

            for(pb=b;pb<b+m-1 && *pb>*(pb+1);pb++)
            {
                temp=*pb;
                *pb=*(pb+1);
                *(pb+1)=temp;
            }
        }
    }
}

/*---------------------------------------------------------*/
/* 9. Median of Two Sorted Arrays */

double medianSortedArrays(int *a,int *b,int n)
{
    int i=0,j=0;
    int m1=-1,m2=-1;

    for(int count=0;count<=n;count++)
    {
        m1=m2;

        if(i==n)
            m2=*(b+j++);
        else if(j==n)
            m2=*(a+i++);
        else if(*(a+i)<*(b+j))
            m2=*(a+i++);
        else
            m2=*(b+j++);
    }

    return (m1+m2)/2.0;
}

/*---------------------------------------------------------*/
/* 10. Reverse in Groups of K */

void reverseGroups(int *arr,int n,int k)
{
    int *start=arr;

    while(start<arr+n)
    {
        int *end=start+k-1;

        if(end>=arr+n)
            end=arr+n-1;

        reverse(start,end);

        start+=k;
    }
}

/*---------------------------------------------------------*/

int main()
{
    int arr1[]={1,2,3,4,5,6,7};
    int n1=7;

    printf("1. Left Rotate\n");
    leftRotate(arr1,n1,2);
    printArray(arr1,n1);

    int a[]={1,2,3,4,5};
    int b[]={3,4,5,1,2};

    printf("\n2. Circular Rotation: ");
    if(isCircularRotation(a,b,5))
        printf("Yes\n");
    else
        printf("No\n");

    int arr2[]={2,-5,7,-1,3,-8,9};
    printf("\n3. Rearranged Array\n");
    rearrange(arr2,7);
    printArray(arr2,7);

    int arr3[]={1,2,2,3,4,3,5,5};
    int size=removeDuplicates(arr3,8);
    printf("\n4. Remove Duplicates\n");
    printArray(arr3,size);

    int arr4[]={1,2,3,5,6};
    printf("\n5. Missing Number = %d\n",findMissing(arr4,5));

    int arr5[]={1,2,3,1,2,3,4,5};
    printf("\n6. Longest Increasing Length = %d\n",
           longestIncreasing(arr5,8));

    int arr6[]={1,60,-10,70,-80,85};
    printf("\n7. Closest Sum To Zero\n");
    closestToZero(arr6,6);

    int arr7[]={1,5,9,10,15,20};
    int arr8[]={2,3,8,13};

    printf("\n8. Merge Without Third Array\n");
    mergeArrays(arr7,6,arr8,4);

    printArray(arr7,6);
    printArray(arr8,4);

    int arr9[]={1,12,15,26,38};
    int arr10[]={2,13,17,30,45};

    printf("\n9. Median = %.2lf\n",
           medianSortedArrays(arr9,arr10,5));

    int arr11[]={1,2,3,4,5,6,7,8,9};
    printf("\n10. Reverse Groups\n");
    reverseGroups(arr11,9,3);
    printArray(arr11,9);

    return 0;
}
