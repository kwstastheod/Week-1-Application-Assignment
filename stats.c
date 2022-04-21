/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Konstantinos Theodosiou>
 * @date <20 April 2022 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90} ;

  /* Other Variable Declarations Go Here */

  unsigned char sorted_test[SIZE];
  int median, minimum, maximum, mean = 0;
  
  /* Statistics and Printing Functions Go Here */

  void print_statistics(int median, int mean, int maximum, int minimum) {
    printf("Median = %d \t Mean = %d \t Maximum = %d \t Minimum = %d\n", median, mean, maximum, minimum);
  }

  int find_maximum(unsigned char test[]) {
    int i = 0;
    int maximum = test[0];
    for (i = 1; i < SIZE; i++){
      if (test[i] > maximum){
        maximum = test[i];
      }
    }
    return maximum;
  }

  int find_minimum(unsigned char test[]){
    int i = 0;
    int minimum = test[0];
    for (i = 1; i < SIZE; i++){
      if (test[i] < minimum){
        minimum = test[i];
      }
    }
    return minimum;
  }

  int find_mean(unsigned char test[]) {
    int i = 0, mean = 0, sum = 0;
    for (i = 0; i < SIZE; i++){
      sum = sum + test[i];
    }
    mean = sum / SIZE;
    return mean;
  }

  int find_median(unsigned char sorted_test[]){
    int i = 0;
    unsigned char median;
    if (SIZE % 2 == 1){
      median = sorted_test[(SIZE / 2) - 1];
    }
    else {
      median = sorted_test[(SIZE / 2)] + sorted_test[(SIZE / 2) + 1];
    }
    return median;
  }

  void sort_array(unsigned char test[]){
    int i = 0, j = 0; 
    unsigned char temp;
    for (i = 0; i < SIZE; i++){
      for (j = 0; j < i; j++){
        if (test[j] < test[i]){
          temp = test[j];
          test[j] = test[i];
          test[i] = temp;
        }
      }
    }
  }

  void print_array(unsigned char test[]) {
       int i = 0;
       for (i = 0; i < SIZE; i++) {
               printf("%d\t", test[i]);
               if ((i+1) % 8 == 0) {
                       printf("\n");
               }
       }
  }

  maximum = find_maximum(test);
  minimum = find_minimum(test);
  mean = find_mean(test);
  sort_array(test);
  median  = find_median(test);
  print_statistics(median, mean, maximum, minimum);
  print_array(test);
  


/* Add other Implementation File Code Here */


};