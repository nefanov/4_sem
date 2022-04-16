#include <stdio.h>

int check() {
    for (int i=0;i<4096;i++); // dummy cycle
    
    return 1;
}

int main()
{
    int i = 0;
    for (int i=0; i < 4096; i++) {
        if (check() && (i%2)) // try to swap & build on -O0,-O2
            printf("%d\n", i++);
    }
    printf("Hello World");

    return 0;
}
