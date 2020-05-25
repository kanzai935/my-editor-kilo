#include <unistd.h>
#include <stdio.h>

int main() {
    char c;
    while(read(STDIN_FILENO, &c, 1) > 0){
        printf("endless");
    }
    return 0;
}
