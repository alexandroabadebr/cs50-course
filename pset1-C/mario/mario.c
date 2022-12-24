#include <stdio.h>

int main()
{
  int value;
  int i;
  int j;

    do
    {
      printf("Height: ");
      scanf("%d", &value);

    }
    while (value < 1 || value > 8);

      for(i = 1; i <= value; i++){
        for(j = value - i; j >= 1; j--)
	        printf(" ");
        for(j = 1; j <= i; j++)
          printf("#");
         printf("  ");
        for(j = 1; j <= i; j++)
          printf("#");
         printf("\n");
      }
    return 0;
}
