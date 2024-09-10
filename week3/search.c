#include<cs50.h>
#include<stdi.h>

int main(void)
{
    int numbers[] = {20,500,10,5,100,1,50};

    int i = get_int("Numbers: ");
    for(int i = 0; i < 7; i++)
    {
        if(numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }

    }
    printf("Not Found\n");
    return 1;

}
