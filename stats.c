
/**
 * @file stats.c
 * @brief Array multi-calculations program code
 *
 * This is a C code that performs some statistics with an array
   1-Sorting the array in descending order
   2-Finding Maximum value of the array
   3-Finding Minimum value of the array
   4-Finding Median of the array
   5-Finding Mean of the array
 *
 * @author Kareem Ameed
 * @date 31/5/2019
 *
 */



#include <stdio.h>
#include "stats.h"
#define SIZE (40)
 
 
void main() {


  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  	int max,min,median;
	float mean;
	
  print_array(test,SIZE);
  sort_array(test,SIZE);
  max=find_maximum(test,SIZE);
  min=find_minimum(test,SIZE);
  median=find_median(test,SIZE);
  mean=find_mean(test,SIZE);
  
  /* Statistics and Printing Functions Go Here */

printf("The Maximum value of the array is(max=%d)\n",max);
printf("The Minimum value of the array is(min=%d)\n",min);
printf("The Median of the array is(median=%d)\n",median);
printf("The Mean value of the array is(mean=%.4f)\n",mean);

}

/* Add other Implementation File Code Here */

//This function will print the array without sorting
 unsigned char print_array( unsigned char number[], int n ){
	int i;
	printf("Elements of array are:\n");
		for(i=0;i<n;++i){
			printf("%d\n",number[i]);
		}
}

// This function will Sort the array in descending order
// This is done by comparing two elements of the array then by using a temp variable(a) we can to assign new numbers to variables
 unsigned char sort_array( unsigned char number[], int n ){
	int i,j,a;
	for(i=0;i<n;++i){
		for(j=i+1;j<n;j++){
			if(number[i]<number[j]){
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
		}
		printf("Elements of array after sorting in descending order are:\n");
		for(i=0;i<n;++i){
			printf("%d\n",number[i]);
		}
}

//This function is responsible for finding the maximim value of the array
//After sorting the maximum value will be the first element of array (n)

unsigned char find_maximum(unsigned char number[],int n){
	
	//to get the maximum value of the array
	int max;
	max=number[0];
	return max;
	
}

//This function is responsible for finding the minimum value of the array
//After sorting the minimum value will be the last element of array (n-1)

unsigned char find_minimum(unsigned char number[],int n){
	//to get the maximum value of the array
	int min;
	min=number[n-1];
	return min;
}

//This function is responsible for finding the median of the array
//If the number of elements of array is an odd number the median will be simple the middle value(n/2)
//If the number of elements of array is an even number then median will we the average of the two middle values[(n-1)/2 and (n+1)/2)
unsigned char find_median(unsigned char number[],int n){
	int median;
	if(n%2==0){
			median = (number[(n-1)/2] + number[(n+1)/2])/2.0; //Even array
			}else median=number[n/2]; //Odd array
	
		return median;	
}

//This function is responsible for finding the median of the array
// It it equal to the sum of all elements of the array divided by the number of elements of the array

float find_mean(unsigned char number[],int n){
	int i;
	float total,mean;
	for(i=0;i<n;++i){
	
	total=total+number[i];
    }
	mean=total/n;
	return mean;
}


	
	
	



