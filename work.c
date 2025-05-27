#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{

    char A[10] = "42";
    char B[10] = "3.14";
    char C[10] = "H";

    write(1, A, 3);
    write(1, "\n", 1);

    write(1, B, 4);
    write(1, "\n", 1);

    write(1, C, 2);
    write(1, "\n", 1);

    return 0;
}