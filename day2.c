/*
 * Bubble Sort
 *
 * @Prerna(1910990964)
 * 25/7/2021
 * Coding_Assignment->day2
 *
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>


void bubble_sort(int n , int *arr) {

    //n-1 because we need to compare ith element with i+1 ...
    for(int i = 0; i < n-1; i++) {
	int flag = 0; 

        //elements from last will start getting in place
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j]; //swaping
                arr[j] = arr[j+1];
                arr[j+1] = temp;
		flag = 1;
            }
        }

	if(flag == 0) {
	    //means no swaps
	    break;
	    //this will optimise if the array is already sorted but the steps are remaining.
	}
    }
    //sorted
}

void mixed (int n , int *arr) {
    
    for(int i = 0; i < n; i++) {
    	arr[i] = rand(); // setting array elements to a random value;
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
	index++;
    }
}


void time(int n , int arr[]) {
    struct timeval te;
    long long time_taken;
    gettimeofday(&te, NULL);
    long long start = te.tv_sec *1000ll + te.tv_usec / 1000;
    bubble_sort(n  , arr); //bubble sort
    gettimeofday(&te, NULL);
    long long end = te.tv_sec *1000ll + te.tv_usec / 1000;
    printf("%lld\n",end - start);
}


int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    

    printf("Random\n");
    mixed (n , arr); // setting array elements randomly
    time(n , arr);

    
    printf("Ascending\n");
    ascending (n , arr); // setting array elements in ascending order
    time(n , arr);


    
    
    printf("Descending\n");
    descending(n , arr); // setting array elements in descending order
    time(n , arr);
    
    printf("\n");
    
    return 0;
}
