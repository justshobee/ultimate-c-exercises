/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 18:55:18 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 18:56:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
/*
* Program: Hello world example
* 
* Description: A "hello world" program in C.

// standard library that includes functions for input and output (like printf)
#include <stdio.h>
*/
// the main function is where execution of statements will begin
int main(void)
{
  // Outputs the text Hello, World! to the terminal (technically this is what
  // we'll call standard output), the " " characters define what's called a 
  // string literal, and the \n is a newline character.  C statements like 
  // this end with a ; character.
  printf("Hello, World!\n");

  // the main function returns an int, and we return 0, which tells the OS 
  // running the program that it has exited successfully
  return 0;
}
