/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 10:51:03 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 11:04:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool is_space(char ch)
{
	return (ch == ' ' || ch == '\t');//etc.. i wanna just this
}
char *remove_extra_space(char *s)
{
	int read = 0,write;
	bool inword = 0;//false
	while(s[read] != '\0')
	{
		if(is_space(s[read]) && inword == 1)
		{
			inword = 0;
			s[write++] = s[read];
		}
		if(!is_space(s[read]) && inword == 0 || !is_space(s[read]) && inword == 1)
		{
			inword = 1;
			s[write++] = s[read];
		}
		read++;
	}
	s[write-1] = '\0';
	return s;
}

int main(int count,char *strs[])
{
	if(count == 2)
	{
		char *s = remove_extra_space(strs[1]);
		printf("Normalized string : \"%s\"\n",s);
	}
}
