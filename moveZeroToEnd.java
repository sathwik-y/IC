public class moveZerotoEnd {
    public static void printArray(int [] arr){
        for (int i = 0 ; i < arr.length; i ++) {
            System.out.print(arr[i] + " ");
        }
    }
    public static void main(String[] args) {
        int arr[] = {8,1,0,2,1,0,3};
        int j = 0;
        for(int i = 0; i < arr.length; i++) {
            if(arr[i]!=0 && arr[j]== 0)  // Swap the values only when i is non zero and j is zero. this will keep moving the zero at the end. 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            if(arr[j]!=0) {
                j++; // if j is not zero , keep incrementing j. j is only used to identify the zeros. 
            }
        }
        printArray(arr);
    }
}
