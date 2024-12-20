#include <stdio.h>

int main(){
    int arr[20] = {1,5,4,6,8,99,78,25,35,93};
    int nonkey[20];
    int key;
    printf("Enter the Key : ");
    scanf("%d",&key);
    int count = 0,j=0;
    for(int i = 0;i<10;i++){
        if(arr[i]!=key){
            nonkey[j] = arr[i];
            j++;
            count++;
        }
    }
    printf("The number of values not equal to the key are : %d",count);
    printf("\nThe values not equal to the key are: ");
    for(int i = 0; i < count; i++){
        printf("%d ", nonkey[i]);
    }
}
