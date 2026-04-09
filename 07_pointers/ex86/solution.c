/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 10:38:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 10:50:34 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char non_repeat_ch(char *s)
{
	int freq[256] = {0};

	int i = 0;
	while(s[i] != '\0')
	{
		freq[s[i]]++;
		i++;
	}

	i = 0;
	while(i < 256)
	{
		if(freq[i] == 1)
			return (char)i;
		i++;
	}
	return '\0';
}
int main(int count,char *arr[])
{
	if(count == 2)
	{
		char ch = non_repeat_ch(arr[1]);
    if (ch != '\0') {
        printf("First non-repeating character: '%c'\n", ch);
    } else {
        printf("No non-repeating character found.\n");
    }
	}
	return 0;
}

