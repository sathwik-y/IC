#include <stdio.h>

int main(){
    int arr[20] = {1,2,3,3,4,5,6,6,7,8,9,9,0};
    int nondup[20]; 
    int j = 0;
    int length = sizeof(arr)/sizeof(int);
    for(int i = 0; i < length; i++) {
        if(arr[i] != arr[i-1]){
            nondup[j] = arr[i];
            j++;
        }
    }    
    printf("New Array without duplicates : ");
    for(int i = 0; i < j; i++){
        printf("%d ", nondup[i]);
    }
    return 0;
}
