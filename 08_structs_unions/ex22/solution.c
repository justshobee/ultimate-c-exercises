/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 21:37:18 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 21:37:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float unit_price;
};

// 1. Function to create and return an Item structure
struct Item add_item(int item_id) {
    struct Item i;
    i.id = item_id;

    printf("Item ID %d\n", i.id);
    printf("  Enter Name: ");
    scanf("%s", i.name);
    printf("  Enter Quantity: ");
    scanf("%d", &i.quantity);
    printf("  Enter Unit Price: $");
    scanf("%f", &i.unit_price);

    return i;
}

// 2. Function to calculate item value
float calculate_value(struct Item i) {
    return (float)i.quantity * i.unit_price;
}

int main() {
    struct Item inventory[3];
    float total_value = 0.0;

    for (int i = 0; i < 3; i++) {
        inventory[i] = add_item(100 + i);
        total_value += calculate_value(inventory[i]);
    }

    printf("\n--- Total Inventory Value ---\n");
    printf("Total value of all items: $%.2f\n", total_value);

    return 0;
}
