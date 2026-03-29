/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/29 09:33:10 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/29 10:10:14 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	tt_strlen(char str[])
{
    // str1 must be large enough to hold both strings + '\0'
	int	i= 1;
	while (str[i] != '\0')
		i++;

	return (i);
}
int	main(void)
{
    char	str1[50] = "Hello ";
    char	str2[] = "World!";
	
	int len1 = tt_strlen(str1);

	int i = len1;
	int j = 0;
	while(str2[j] != '\0')
	{
		str1[i++] = str2[j++];
	}
    // 3. Add the null terminator at the new end of str1
	str1[i] = '\0';

	printf("Concatenated string: %s\n",str1);
	
}
