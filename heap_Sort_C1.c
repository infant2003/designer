#include <stdio.h>   
void heapify(int a[], int n, int i){  
    int largest = i;   
    int left = 2 * i + 1;  
    int right = 2 * i + 2; 
    if (left < n && a[left] > a[largest])  
        largest = left;  
    if (right < n && a[right] > a[largest])  
        largest = right;  
    if (largest != i) {   
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp; 
        heapify(a, n, largest);  
    }  
}  
void heapSort(int a[], int n){  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify(a, n, i);  
    for (int i = n - 1; i >= 0; i--) {  
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        heapify(a, i, 0);  
    }  
}  
void printArr(int arr[], int n)  {  
    for (int i = 0; i < n; ++i)  {  
        printf("%d\t", arr[i]);  
    }  
          
}  
int main(){  
    int n,arr[50],data;
    printf("\nEnter the no.of elements to push:");
    scanf("%d",&n);
    printf("\nEnter the %d data's:\n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        arr[i]=data;
    }
    printf("Before sorting array elements are - \n");  
    printArr(arr, n);  
    heapSort(arr, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(arr, n);  
    return 0;  
}  