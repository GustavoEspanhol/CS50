#include<stdio.h>
#include<cs50.h>

int add(int a, int b);
int main(void)
{
  int A;
  do
  {
    A = get_int("Change owed: ");
  }
  while(A < 0);

    int quarters = 0;
    while(A >= 25)
    {
      quarters++;
      A = A -25;
    }

    int tencents = 0;
    while(A >= 10)
    {
      tencents ++;
      A = A - 10;
    }

    int fivecents = 0;
    while(A >= 5)
    {
      fivecents ++;
      A = A - 5;
    }

    int pennies = 0;
    while(A >= 1)
    {
      pennies++;
      A = A -1;
    }

    int coins = (quarters + tencents + fivecents + pennies);
    printf("%i\n", coins);
}
