/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 11:57:23 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 12:06:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int data[5] = {1, 3, 5, 7, 9};
    int *ptr = data; // Pointer initialized to array base address

    printf("Array element at index 2 (Value should be 5):\n");

    // Method 1: Subscript notation (Standard Array access)
    printf("1. Subscript notation: %d\n", data[2]);

    // Method 2: Pointer notation with the base address (Array name as pointer)
    printf("2. Pointer notation (arr + 2): %d\n", *(data + 2));

    // Method 3: Pointer notation with the offset pointer
    printf("3. Pointer notation (ptr + 2): %d\n", *(ptr + 2));

    return 0;
}
