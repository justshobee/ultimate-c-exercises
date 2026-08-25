/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/25 10:27:24 by shobeedev // learn the why,              */
/*   Updated: 2026/08/25 10:40:34 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	start(void)
{
	printf("Hello!\n");
}

void	end(void)
{
	printf("Goodbye!\n");
}

void	help(void)
{
	printf("Help menu :\n\
	1 : start\n\
	2 : end  \n\
	3 : help \n");
}

void	error(void)
{
	printf("Invalid option\n");
}

void run_menu_option(int choice)
{
	void	(*fn[4]) (void) = {start, end, help, error};
	if (choice > 4)
	{
		fn[3]();
		return ;
	}
	fn[choice - 1]();
}

int		main(int size, char **str)
{
	if (size == 2)
		run_menu_option(atoi(str[1]));
	return (0);
}
