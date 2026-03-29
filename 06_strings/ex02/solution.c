/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/29 07:09:39 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/29 07:17:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int tt_strlen(char str[])
{
    int i = 1;
    while(str[i] != '\0')
        i++;

    return (i);
}

int main()
{
    char str[] = "Hello World!";

    int len = tt_strlen(str);

    printf("The string is : %s\n",str);
    printf("The length of the string is : %d\n",len);

    return (0);
}
