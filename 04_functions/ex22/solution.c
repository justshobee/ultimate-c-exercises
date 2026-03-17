/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/17 13:47:16 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/17 14:01:34 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

inline int get_max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int main()
{
	int a = 10,b = 20;

	int max = get_max(a,b);

	printf("a = %d, b = %d, max is : %d\n",a,b,max);

	return 0;
}


/*
gcc solution.c -O1

The inline keyword is an optimization hint that minimizes function call overhead.

    Inlining: Instead of creating a separate block of code for get_min and jumping to it every time it’s called, the compiler copies the function’s body directly into the calling function’s code at the point of the call.
    Trade-offs: This can improve speed by removing call overhead but can increase the overall program size (code bloat) if the function is called many times or if the function body is large. It is typically best reserved for very small, frequently used functions.

*/
