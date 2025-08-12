//ARRAYS
//Collection of similar type of data items.
//Homogenous type of data
//its fixed size
//array start from 0 index and end with size-1.

//Advantages
//Easy of searching
//Easy of sorting
//random access
//code optimization

//DISAdvantages
//we cannot store different type of data
//fixed size
//insertion and deletion array is worst case
//waste of memory


//types of Arrays
//1.1-D array   = int a[size];
//2.2-D array   = int a[row size][colssize]
//3. Multidimensional array = int a[noof matrix][row][cols]

//1-d array
//#include<stdio.h>
//int main(){
//	int a[5];
//	a[0]=23;
//	a[1]=98;
//	a[2]=11;
//	a[3]=34;
//	a[4]=20;
//    for(int i=0;i<5;i++)
//	printf("%d",a[i]);
//	return 0;
//}



//2-D array

//#include <stdio.h>
//
//int main() {
//    int a[2][3] = {
//        {1, 2, 3},
//        {4, 5, 6}
//    };
//
//    printf("The 2-D array elements are:\n");
//    
//    for (int i = 0; i < 2; i++) {        // rows
//        for (int j = 0; j < 3; j++) {    // columns
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}



//multi-dimensional array

#include <stdio.h>

int main() {
    int a[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Printing all elements of 3D array
    for (int i = 0; i < 2; i++) {         // depth
        for (int j = 0; j < 2; j++) {     // rows
            for (int k = 0; k < 3; k++) { // columns
                printf("a[%d][%d][%d] = %d\n", i, j, k, a[i][j][k]);
            }
        }
    }

    return 0;
}

