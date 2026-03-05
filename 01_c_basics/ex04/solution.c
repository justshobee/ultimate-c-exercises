/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/05 11:11:12 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/05 11:20:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_pow(int base,int exp)
{
	int i = 0;
	int pow = 1;
	while(i < exp)
	{
		pow = pow * base;
		i++;
	}
	return pow;
}

int main()
{
	float raduis = 5;
	const float PI = 3.14159;

	float areaOfCircle = PI * tt_pow(raduis,2);
	float Circumference = 2 * PI * raduis;

	printf("Area of the circle is : %.3f\n",areaOfCircle);
	printf("Circumference of the circle is : %.3f",Circumference);

	return 0;
}
