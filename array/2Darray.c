#include<stdio.h>

int main()  {

    //2DArray: Array of array(s).
    int arr1[] = { 98, 56, 45, 78, 78 };
    int arr2[] = { 54, 85, 82, 19, 23 };
    int arr3[] = { 53, 89, 14, 68, 92 };
    int arr [3] [5] = {
            { 98, 56, 45, 78, 78 },
            { 54, 85, 82, 19, 23 },
            { 53, 89, 14, 68, 92 }
            };

            //Modify an element: arr[row][column] = value
            arr [2][4] = 98;
            
            //Print 2D array.
            for (int r = 0; r < 3; r++) {
              for (int c = 0; c < 5; c++) {
                    printf("%d ", arr[r][c]);
            }
            printf("\n");
            }
    return 0;
}