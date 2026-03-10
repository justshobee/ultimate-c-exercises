/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 22:00:14 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 22:01:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main() {
    int quantity = 3;
    float unit_price = 15.75f;
    char code = 'A';

    printf("Item Code: %c, Quantity: %d, Total Price: $%.2f\n",
           code, quantity, quantity * unit_price);

    return 0;
}
