/**
 * @file stat.h
 * @brief Array multi-calculations program code
 *
 * This is a header file  code that is declared from main c file stats.c in order to  declare    all the functions used in the code
 
 *
 * @author Kareem Ameed
 * @date 31/5/2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
 
 
 

/**            (print_array function)
 * @brief print the given array without sorting
 * This function prints the elements of the  array without sorting
 * @param test (The elements of the array)
 * @param SIZE (Number of elements of the array)
 */
unsigned char print_array(unsigned char[],int);

/**          (sort_array function)
  * @brief print the given array without sorting
 * This function sorts the given array in a descending order 
 * @param test (The elements of the array)
 * @param SIZE (Number of elements of the array)
 */
unsigned char sort_array(unsigned char[],int);

/**              (find_maximim function)
  * @brief Finds maximum value of the array
 * This function computes the maximum value of the array after sorting 
 * @param test (The elements of the array)
 * @param SIZE (Number of elements of the array)

 * @return max (The maximum element of the array)
 */
unsigned char find_maximum(unsigned char[],int);

/**              (find_minimum function)
  * @brief Finds minimum value of the array
 * This function computes the minimum value of the array after sorting 
 * @param test (The elements of the array)
 * @param SIZE (Number of elements of the array)

 * @return max (The minimum element of the array)
 */
unsigned char find_minimum(unsigned char[],int);

/**              (find_median function)
  * @brief Finds middle value of the array
 * This function computes the middle value of the array 
 * If it's an odd array it's simply the middle value of the array
 * It it's an even array it's the average of the two middle elements of the array 
 * @param test (The elements of the array)
 * @param SIZE (Number of elements of the array)

 *@return median (The middle value of the array)
 */

unsigned char find_median(unsigned char[],int);

/**              (find_mean function)
  * @brief Finds mean value of the array
 * This function computes the mean value of the array by submission of all elements of the array then dividing the total value by the number of elements 
 * @param test (The elements of the array)
 * @param SIZE (Number of elements of the array)

 *@return mean (The average value of the array)
 */

 float find_mean(unsigned char[],int);

#endif /* __STATS_H__ */
