#include <stdio.h>
#include <cs50.h>

void print_column(int Height);

int main(void)
{
  int h = get_int("Height: ");
  print_column (h);
}
void print_column(int Height)
{
  for (int i = 0; i <= Height; i++)
  {
   printf("#\n");

  }


}
