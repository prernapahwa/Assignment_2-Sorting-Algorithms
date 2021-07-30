/*
 * Insertion Sort 
 *
 * @Prerna(1910990964)
 * 25/7/2021
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<time.h>


void insertion_sort(int n , int *arr) {
    for(int i = 0; i <= n - 1; i++) {
        int currernt = arr[i];
        int j = i;
        while(arr[j - 1] > currernt && j >= 1) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = currernt;
    }
}



void mixed (int n , int *arr) {
    int upper= n ;
    int lower = 1;
    for(int i = 0; i < n; i++) {
    	arr[i] = (rand() % (upper - lower + 1)) + lower; // setting array elements to a random value;
    }
} 


void ascending (int n , int *arr) {

    for(int i = 0; i < n; i++) {
    	arr[i] = i; //setting array elements in ascending order 
    }
}

void descending (int n , int *arr) {
    int index = 0;
    for(int i = n-1; index < n; i--) {
    	arr[index] = i;//setting array elements in descending order
	    //printf("%d ",arr[index]);
	    index++;
	
    }
}


void Time(int n , int arr[]) {
    clock_t start = clock();
    insertion_sort(n,arr);//bubble sort
    clock_t stop = clock();
    double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time in ms: %f\n", elapsed);
}


int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    

    printf("Random\n");
    mixed (n , arr); // setting array elements randomly
    Time(n , arr);

    
    printf("Ascending\n");
    ascending (n , arr); // setting array elements in ascending order
    Time(n , arr);


    
    
    printf("Descending\n");
    descending(n , arr); // setting array elements in descending order
    Time(n , arr);
    
    printf("\n");
    
    return 0;
}
