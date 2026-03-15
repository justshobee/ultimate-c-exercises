/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/15 11:52:20 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/15 12:09:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Private helper function definition
float calculate_tax(float income) {
    printf("Inside Private helper function\n");
    const float TAX_RATE = 0.15;
    return income * TAX_RATE;
}

// Main function definition, which uses the helper
float calculate_net_salary(float gross) {
    printf("Inside main tax function\n");
    float tax_amount = calculate_tax(gross);
    float net_salary = gross - tax_amount;

    printf("Gross Salary: %.2f\n", gross);
    printf("Tax Deducted: %.2f\n", tax_amount);

    return net_salary;
}

int main() {
    float gross_income = 50000.00;
    float net = calculate_net_salary(gross_income);

    printf("Net Salary Received: %.2f\n", net);

    return 0;
}
