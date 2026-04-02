/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/01 12:16:41 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/01 13:01:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_strlen(char str[])
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

void reverse_str(char str[])
{
	char tmp;
	int start = 0;
	int end = tt_strlen(str) - 1;
	while(start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}

void remove_extra_space(char str[])
{
	int i = 0,j = 0;
	bool inword = false;
	while(str[i] != '\0')
	{
		if(str[i] != ' ')
		{
			inword = true;
			str[j++] = str[i];
		}
		if(str[i] == ' ' && inword)
		{
			inword = false;
			str[j++] = str[i];
		}
		i++;
	}
	if(str[j - 1] == ' ' )
		str[j-1] = '\0';
	str[j] = '\0';
}
void reverse_words(char str[])
{
	remove_extra_space(str);
	reverse_str(str);

	int i = 0,start = 0,end = 0;
	char tmp;
	int wordstart = 0;
	while(str[i] !='\0')
	{
		if(i == 0 || str[i-1] == ' ')
			wordstart = i;
		if(str[i-1] != ' ' && str[i] == ' ')
		{
			start = wordstart;
			end = i - 1;
			while(start < end)
			{
				tmp = str[start];
				str[start] = str[end];
				str[end] = tmp;
				start++;
				end--;
			}
		}
		i++;
	}
}

int main()
{
	char str[] = "C  programming  is   fun";
	reverse_words(str);
	printf("%s.\n",str);

	
}
