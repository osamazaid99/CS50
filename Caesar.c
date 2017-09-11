#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
       printf("try again\n");
        return 1;
    }
    
        int k = atoi(argv[1]);
        
    if (k < 0)
    {
        printf("try again\n");
        return 1;
    }
        printf("plaintext: ");
        
        string p = get_string();
        
        printf("ciphertext: ");
        
        for(int i = 0, n = strlen(p); i < n; i++)
        {
           if (islower(p[i]))
           {
               printf("%c", (((p[i] + k) - 97) % 26) + 97);
           }
           
           else if (isupper(p[i]))
           {
               printf("%c", (((p[i] + k) - 65) % 26) + 65);
           }
           
           else
           {
                printf("%c", p[i]);
           }
           
        }
        printf("\n");
        
        return 0;
    
}
