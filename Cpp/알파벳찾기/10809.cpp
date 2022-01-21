#include <iostream> 
#include <ctype.h>

#include <stdio.h>
#include <string.h>

int main()
{
    char x[100], y[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int z[26] = {0};
    scanf("%s", x);

    for (int i = 0; i < strlen(x); i++)
            for (int j = 0; j < 26; j++)
                if (x[i] == y[j] && z[j] == 0)
                    z[j] = i + 1;

    for (int i = 0; i < 26; i++){
        if (z[i] == 0)
            z[i] = -1;
        else
            z[i]--;
        printf("%d ", z[i]);
    }

    
    return 0;
}