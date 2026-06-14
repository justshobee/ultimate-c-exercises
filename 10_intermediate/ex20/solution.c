/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/14 19:00:37 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/14 19:26:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Convert binary to decimal
*
* Description: A function that accepts a string representation of a binary
* number and convers it to decimal (int) in C.
*/

#include <stdio.h>

// Example of binary number conversion logic/math
//
// 10101 binary -> 21 decimal
//
// 1    0    1    0    1
// 2^4  2^3  2^2  2^1  2^0
// 16 + 0 +  4 +  0 +  1
// = 21

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_pow(int base, int exp)
{
	int		i;
	int		pow;

	i = 0;
	pow = 1;
	while (i < exp)
	{
		pow = pow * base;
		i++;
	}
	return (pow);
}

int		convert(char *str)
{
	int		i;
	int		i_bin;
	int		res;

	i = ft_strlen(str) - 1;
	i_bin = 0;
	res = 0;
	while (i >= 0)
	{
		if (str[i] == '1')
			res += ft_pow(2, i_bin);
		i_bin++;
		i--;
	}
	return (res);
}

int		convert_m2(char *str)
{
	int		i;
	int		decval;
	int		res;

	i = ft_strlen(str) - 1;
	// decval is the current 2^n value of the digit the below loop is converting
	decval = 1;
	res = 0;
	// We perform the conversion one digit at a time, going from the right side 
	// of the string to the left.  If the current digit is a '1' we add the value
	// of that digit to the total.  We multiply decval by 2 to keep track of the 
	// increasing worth of each digit as a power of 2 as we move from right to 
	// left in the string.
	while (i >= 0)
	{
		if (str[i] == '1')
			res += decval;
		decval *= 2;
		i--;
	}
	return (res);
}

int		main(int size, char **str)
{
	if (size == 2)
		printf("%d\n",convert_m2(str[1]));
	return (0);
}
