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
 * @file <stats.h> 
 * @brief Week 1 Application Assignment
 *
 * In this programming assignment you will create a simple application that performs statistical analytics on a dataset. 
 * This assignment will help you get re-oriented with c-programming syntax and host machine compilation. We begin by setting up a version control repository on your local machine. You will then develop and test your code there. 
 * When complete, you will upload a zip of your repository to Coursera. 
 * Please read through all instructions before starting.
 * 
 * @author <Konstantinos Theodosiou>
 * @date <21/04/2022 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(int median, int mean, int maximum, int minimum);
/**
 * @brief This function prints the statistics of the array calculated in the other functions.
 *
 * <Add Extended Description Here>
 *
 * @param Median The median of the array.
 * @param Mean The mean of the array.
 * @param Maximum The maximum of the array.
 * @param Minimum The minimum of the array.
 *
 * @return VOID
 */

int find_maximum(unsigned char test[]);
/**
 * @brief This function prints the maximum of the array.
 *
 * <Add Extended Description Here>
 *
 * @param test[] The array to be searched.
 *
 * @return maximum The maximum of the array.
 */

int find_minimum(unsigned char test[]);
/**
 * @brief This function prints the minimum of the array.
 *
 * <Add Extended Description Here>
 *
 * @param test[] The array to be searched.
 *
 * @return minimum The minimum of the array.
 */

int find_mean(unsigned char test[]);
/**
 * @brief This function prints the mean of the array.
 *
 * <Add Extended Description Here>
 *
 * @param test[] The array to be searched.
 *
 * @return mean The mean of the array.
 */

int find_median(unsigned char test[]);
/**
 * @brief This function prints the median of the array.
 *
 * <Add Extended Description Here>
 *
 * @param test[] The array to be searched.
 *
 * @return median The median of the array.
 */

void sort_array(unsigned char test[]);
/**
 * @brief This function sorts the array.
 *
 * <Add Extended Description Here>
 *
 * @param test[] The array to be sorted.
 *
 * @return VOID
 */

void print_array(unsigned char test[]);
/**
 * @brief This function prints the array.
 *
 * <Add Extended Description Here>
 *
 * @param test[] The array to be printed.
 *
 * @return VOID
 */

#endif /* __STATS_H__ */
