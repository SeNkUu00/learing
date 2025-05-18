#include <unistd.h>

void ft_patcher(char c) {
    write(1, &c, 1);
}

int main() {
    // Example usage of ft_patcher
    ft_patcher('A');
    return 0;
}