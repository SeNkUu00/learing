#include <unistd.h>
int main()
{
    char a[10] = "name:";
    char b[10] = "kniya:";
    char c[10] = "age:";
    char d[10] = "gender:";
    char e[10] = "email:";

    write(1, a, 5);
    write(1, "\n", 1);

    write(1, b, 6);
    write(1, "\n", 1);

    write(1, c, 4);
    write(1, "\n", 1);

    write(1, d, 7);
    write(1, "\n", 1);

    write(1, e, 6);
    write(1, "\n", 1);

    return 0;
}