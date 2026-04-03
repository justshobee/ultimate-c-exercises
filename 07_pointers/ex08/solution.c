/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 12:08:12 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 12:33:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int other_var = 10;
    int *p = &other_var;

    printf("Address of arr[0]: %p\n", arr);
    printf("Address of other_var: %p\n", &other_var);

    // Compilation Error: Attempting to assign a new address to the array name
    //arr = p; // <--- UNCOMMENTING THIS LINE WILL CAUSE A COMPILATION ERROR!

    /* Correct way to use the array name for access */
    printf("Value of arr[2] using array name: %d\n", *(arr + 2));

    return 0;
}
