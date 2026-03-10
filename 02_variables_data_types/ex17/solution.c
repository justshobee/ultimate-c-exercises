/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 21:41:57 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 21:50:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int x = 10; // Outer scope variable

    printf("Outer x: %d\n", x);

    { // Start of Inner Block/Scope
        int x = 50; // Inner scope variable (Shadows outer x)
        int y = 5;

        printf("Inner x: %d\n", x);
        printf("Inner y: %d\n", y);
    } // End of Inner Block/Scope

    printf("Outer x (after inner block): %d\n", x);
    // printf("%d", y); // This would cause a compile-time error!

}
