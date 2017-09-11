//this program uses the Vigenere method to encypher text

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //rejecting anything but 2 argc
    if ( argc != 2)
    {
        printf("booo\n");
        return 1;
    }
    
    //assigning variables
    string k = argv[1];
    int n = strlen(k);
    
    
    //checking for alphabetical characters only
    for (int i = 0; i < n; i++)
    {
        if (false == isalpha(k[i]))
        {
         
           printf("booo\n");
            return 1;
         
        }
        
    }
    
    //encipher 
    
    printf("plaintext: ");
    string p = get_string();
    
    printf("ciphertext: ");
    
    for (int i = 0, j = 0; i < strlen(p); i++, j++)
    {
        if (j > (n-1))
        {
            j = 0;
        }
        
        
        if (islower(p[i]))
        {
          printf("%c", (((p[i] - 97) + (toupper(k[j]) - 65)) % 26) + 97);
        }
     
        else if(isupper(p[i]))
        {
               printf("%c", (((p[i] - 65) + (toupper(k[j]) - 65)) % 26) + 65);
        }
        
        else
        {
            printf("%c", p[i]);
            j--;
        }
    }
    
    printf("\n");
    
    return 0;
}
