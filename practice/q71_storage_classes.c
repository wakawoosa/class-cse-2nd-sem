/* Q71. Describe the various storage classes in C (theory)
 *
 * C has four storage classes, which decide the scope, default value,
 * lifetime and visibility of a variable:
 *
 *   1. auto     - default storage class for local variables. Created
 *                 when the block is entered and destroyed when the
 *                 block exits. Holds a garbage value until initialised.
 *
 *   2. register - requests the compiler to store the variable in a
 *                 CPU register instead of RAM (if possible) for faster
 *                 access. Used for variables accessed very frequently,
 *                 e.g. loop counters. The compiler may ignore the request.
 *
 *   3. static   - a static local variable retains its value between
 *                 function calls (it is initialised only once and lives
 *                 for the entire program). A static global variable is
 *                 visible only within the file it is declared in.
 *
 *   4. extern   - declares a variable that is defined in another file
 *                 or later in the same file, allowing it to be shared
 *                 across multiple files (linkage, not a new variable).
 *
 * The program below demonstrates auto, register and static.
 */
#include <stdio.h>

void counter(void)
{
    /* static variable: retains its value across multiple calls */
    static int staticCount = 0;

    /* auto variable: re-initialised to 0 every time the function is called */
    auto int autoCount = 0;

    staticCount++;
    autoCount++;

    printf("staticCount = %d, autoCount = %d\n", staticCount, autoCount);
}

int main()
{
    register int i;  /* register variable, typically used for loop counters */

    for (i = 1; i <= 3; i++) {
        counter();
    }

    return 0;
}
