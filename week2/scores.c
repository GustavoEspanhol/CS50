#include <stdio.h>
#include <cs50.h>

int main(void)
{
  const int N = 3;
  int scores[N];

  for (int i = 0; i < N; i++)
  {
    scores[i] = get_int("score: ");
  }

  printf("average: %f\n", (scores[0] + scores[1] + scores[2] /(float) N));



}
