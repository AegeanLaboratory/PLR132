#include <stdio.h>

int main()
{
	
   int i, space, seires, c = 0;
   
   printf("Dwse enan arithmo gia sxima: ");
   scanf("%d", &seires);
   
   for (i = 1; i <= seires; ++i, c = 0)
   {
      for (space = 1; space <= seires - i; ++space)
	  {
         printf("  ");
      }
      
      while (c != 2 * i - 1)
	  {
         printf("* ");
         ++c;
      }
      
      printf("\n");
   }
   
   return 0;
}