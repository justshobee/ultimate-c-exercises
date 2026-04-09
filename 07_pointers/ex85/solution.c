/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 10:04:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 10:31:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *remove_pos(char *s,int pos)
{
	pos = pos - 1;
	while(s[pos] != '\0')
	{
		s[pos] = s[pos + 1];
		pos++;
	}
	return s;
}
int find_index_tar(char *s,char tar)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == tar)
			return i;
		i++;
	}
	return -99;
}
char *remove_spec_char(char *s,char target)
{
	char *str = NULL;
	int index = find_index_tar(s,target);
	while(index != -99)
	{
		str = remove_pos(s,index+1);
		index = find_index_tar(s,target);
	}
	return str;
}
int main(int count,char *strs[])
{
	if(count == 3)
	{
		char *s = remove_spec_char(strs[1],*strs[2]);
		printf("String after removing '%c' : \"%s\"\n",*strs[2],s);
	}
	return 0;
}
