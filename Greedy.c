//this program outputs the minimum number of coins to be used to give a certain amount of change as per the user input.

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
   float change;
   int count = 0, changeCent;
    
    
    do
    {
        printf("O hai! How much change is owed?\n");
         change = get_float();
    }
    while(change<0);
    
   change *= 100.0;
   changeCent = round(change);
   
   while(changeCent >= 25)
   {
       count++;
       changeCent-= 25;
   }
   
    while(changeCent >= 10)
   {
       count++;
       changeCent-= 10;
   }
   
    while(changeCent >= 5)
   {
       count++;
       changeCent-= 5;
   }
   
    while(changeCent >= 1)
   {
       count++;
       changeCent-= 1;
   }
   
   printf("%i\n", count);
}
