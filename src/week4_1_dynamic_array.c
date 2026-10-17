
/*
 * week4_1_dynamic_array.c
 * Author: Tunjay Bayramzade
 * Student ID: 251ADB234
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int* arr = NULL;

  printf("Enter number of elements: ");
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid size.\n");
    return 1;
  }

  /* Allocate memory for n integers. */
  arr = malloc((size_t)n * sizeof(int));

  /* Check whether allocation succeeded. */
  if (arr == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  /* Read the integers into the allocated array. */
  printf("Enter %d integers: ", n);

  int sum = 0;

  for (int i = 0; i < n; i++) {
    if (scanf("%d", &arr[i]) != 1) {
      printf("Invalid input.\n");
      free(arr);
      return 1;
    }

    sum += arr[i];
  }

  /* Calculate and print the sum and floating-point average. */
  printf("Sum = %d\n", sum);
  printf("Average = %.2f\n", (double)sum / n);

  /* Release the allocated memory. */
  free(arr);

  return 0;
}
