/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/15 17:04:20 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/15 17:14:17 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
int multiply(int a,int b)
{
	return a  * b;
}

int (*multiplyptr)(int ,int);
int main()
{
	multiplyptr = &multiply;
	int a = 10,b = 5;
	int sum = (*multiplyptr)(a,b);

	printf("a = %d, b = %d\n",a,b);
	printf("Result of multiplication (via function pointer): %d\n",sum);

	return 0;
}*/

#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    // 1. Declare a function pointer 'ptr_func'
    // It points to a function that takes (int, int) and returns int.
    int (*ptr_func)(int, int);

    // 2. Assign the address of the 'multiply' function to the pointer
    ptr_func = multiply; // Or ptr_func = &multiply;

    int a = 10, b = 5;
    printf("a:%d b:%d\n", a, b);
    int result;

    // 3. Call the function using the pointer (dereferencing it)
    result = (*ptr_func)(a, b);

    // Alternative call syntax (often cleaner)
    // result = ptr_func(a, b);

    printf("Result of multiplication (via function pointer): %d\n", result); // 50

    return 0;
}
