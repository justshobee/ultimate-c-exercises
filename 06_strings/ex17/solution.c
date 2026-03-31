/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/31 16:49:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/31 17:47:17 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char str[] = "  This  is   a  test.   ";

	int read_i = 0,write_i = 0;
	bool inword = false;
	while(str[read_i] != '\0')
	{
		if(str[read_i] != ' ')
		{
			inword = true;
			str[write_i++] = str[read_i];
		}
		if(str[read_i] == ' ' && inword)
		{
			inword = false;
			str[write_i++] = str[read_i]; 
		}
		read_i++;
	}
	str[write_i-1] = '\0';
	printf("Normalized string: \"%s\"\n", str);
}
