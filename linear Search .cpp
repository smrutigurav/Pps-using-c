

#include <stdio.h>

int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int index = 0, i;

    for (i = 0; i < 7; i++)
    {
        if (a[i] == 4)
        {
            printf("The number is present at %d\n", i);
            index = 1;
        }
    }

    if (index == 0)
    {
        printf("The number is not present\n");
    }

    return 0;
}




