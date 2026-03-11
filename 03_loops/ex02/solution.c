/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 11:14:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 11:28:43 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char opr;
	float a,b;
	float res;
	printf("Enter operator (+, -, *, /):");
	scanf("%c",&opr);
	printf("Enter two operands : ");
	scanf("%f %f",&a,&b);

	switch(opr)
	{
		case '+' :
			res = a + b;
			break;
		case '-' :
			res = a - b;
			break;
		case '*' :
			res = a * b;
			break;
		case '/' :
			res = a / b;
			break;
		default :
			printf("The operator not found!\n");
	}

	printf("%.2f %c %.2f = %.2f\n",a,opr,b,res);

	return 0;
}
