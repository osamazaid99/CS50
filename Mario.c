#include <stdio.h>
#include <cs50.h>

int main(void)

{
   int h;
   int a;
   int s;
   int hh;

    do
    {
      printf("Height:");
      h = GetInt();
    }
while(h>23 || h<0);

 for (a = 1; a <= h; a++) 
    {
        for (s = (h - a); s > 0; s--)
        {
            printf(" "); 
        }
 
        for (hh = 1; hh <= (a + 1); hh++)
        {   
            printf("#"); 
        }
 
        printf("\n");
    }
    
    
}
