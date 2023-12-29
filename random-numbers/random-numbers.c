#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    for(int i = 0; i < 6; i++) {

        int random = (rand() % 60) + 1;
        printf("Number %d: %d\n",i+1, random);
    }

    return 0;

}
