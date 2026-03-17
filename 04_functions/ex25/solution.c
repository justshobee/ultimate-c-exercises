/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/17 14:26:11 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/17 17:17:21 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> // Required for atexit() and exit()

// The cleanup function (must take void and return void)
void cleanup_handler(void) {
    printf("[atexit] Cleanup performed: Shutting down resources.\n");
}

// Function that forces program termination
void terminate_program(int status) {
    printf("[terminate_program] Calling exit() with status %d...\n", status);
    // This terminates the program immediately.
    // Registered atexit handlers are called automatically.
    exit(status);
}

int main() {
    int error_code = 1;

    // Register the cleanup function.
    // It will be called when exit() is executed.
    if (atexit(cleanup_handler) != 0) {
        fprintf(stderr, "Could not register atexit handler.\n");
        return 1;
    }

    printf("[main] Program execution starting.\n");

    terminate_program(error_code);

    // This line will NEVER be reached because exit() terminated the program
    printf("[main] This line is after exit() and will not print.\n");

    return 0; // The program never gets here
}

