#include<stdio.h>
int main(){
    int size, i, j, swap;
    printf("Enter the size of array :");
    scanf("%d", &size);
    int arr[size]; //5
    printf("Input %d elements: \n", size);
    for(i=0; i<size; i++){
        printf("Element %d : ", i);            // index 0 1 2 3 4
        scanf("%d", &arr[i]); //arr[5] =>      4 3 6 8 2
    }
    for(i=0; i<size; i++){     // 4 3 5 8 2
        for(j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                swap = arr[i];
                arr[i] = arr[j]; 
                arr[j] = swap;
            }
        }
    }
    printf("Ascending order : ");
    for(i=0; i<size; i++){
        printf("%d  ", arr[i]);
    }
return 0;
}