#include <stdio.h>
#include <unistd.h>

int main()
{

    char X[20];

    write(1, "hatim ghlid ", 12);
    read(0, X, 20);
    write(1, X, 20);
    write(1, " haitam ghlid", 12);

    return 0;
}
