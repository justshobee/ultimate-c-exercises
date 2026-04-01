/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/01 18:36:16 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/01 19:01:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int first_acc(char str[],char target,int start)
{
	int i = start;
	while(str[i] !='\0')
	{
		if(str[i] == target)
			return i;
		i++;
	}
	return -1;
}

void remove_dup(char str[],int index)
{
	int i = index;
	while(str[i+1] !='\0')
	{
		str[i] = str[i + 1];
		i++;
	}
	str[i] = '\0';
}

void remove_dup_str(char str[])
{
	int i = 0,first = 0;
	while(str[i] != '\0')
	{
		first = first_acc(str,str[i++],i);
		if(first != -1)
		{
			remove_dup(str,first);
			i = 0;
		}
	}
}

void remove_dup_m2(char str[])
{
	int seen[256] = {0};
	int read_i = 0,write_i = 0;
	while(str[read_i] != '\0')
	{
		char current_ch = str[read_i];
		if(seen[current_ch] == 0)
		{
			seen[current_ch] = 1;
			str[write_i] = current_ch;
			write_i++;
		}
		read_i++;
	}
	str[write_i] = '\0';
}
int main()
{
	char str[] = "programmingisgreat";
	remove_dup_m2(str);

	printf("%s.\n",str);
}
