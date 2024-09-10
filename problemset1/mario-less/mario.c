#include<stdio.h>
#include<cs50.h>

int main(void)
{
     int H;
    do
    {
         H = get_int("Height: ");
    }
    while (H < 1 || H > 8);

     for(int i = 0 ; i < H; i++)
     {
        int n = H - i;
        for(int j = H + 1 - n; j < H; j++)
        {
             printf(" ");
        }
        for(int j = n - 1; j < H; j++)
        {
             printf("#");
        }
        printf("\n");







    }
}
