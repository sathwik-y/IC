#include <stdio.h>

int main(){
    int prices[] = {7,1,5,3,6,4};
    int length = sizeof(prices)/sizeof(int);
    int min =prices[0], max = 0;
    int minIndex;
    int maxIndex;
    int maxProfit = 0;
    // Buy date 
    for(int i = 0; i < length; i++){
        if(prices[i] < min) {
            min = prices[i];
        }
    }
        for(int i = 0; i < length; i++){
        if(prices[i] == min) {
            minIndex = i;
            printf("The best day to buy the commodity is on  : Day %d ",minIndex+1);
        }
    } 
    

    // sell date 
    for(int i = minIndex; i < length ; i++) {
        if (prices[i] > max) {
            max = prices[i];
        }
    }
    for(int i = 0; i < length; i++){
        if(prices[i] == max) {
            maxIndex = i;
            printf("\nThe best day to sell the commodity is on  : Day %d ",maxIndex+1);
        }
    }   

    int profit = prices[maxIndex]-prices[minIndex];
    printf("\nProfit : %d ",profit);
} 
