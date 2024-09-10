#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digits(string k);
string encipher(int r, string p);

int main(int argc, string argv[])
{
    int key;
    if(argc == 2 && only_digits(argv[1]))
    {
      key = atoi(argv[1]);
      string plaintext = get_string("plaintext: ");
      encipher(key, plaintext);
      printf("ciphertext: %s\n", plaintext);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

bool only_digits(string k)
{
 for (int i = 0; k[i] != '\0'; i++)
    {
        if (!isdigit(k[i]))
        {
            return false;
        }
    }
    return true;

}
string encipher(int key, string plaintext)
{
int lenght = strlen(plaintext);
for (int e = 0; e < lenght; e++)
{
    int upper = 65;
    int lower = 97;

    if(isupper(plaintext[e]))
    {
      plaintext[e] = (((plaintext[e] - 'A') + key) % 26) + upper;
    }
    else if(islower(plaintext[e]))
    {
        plaintext[e] = (((plaintext[e] - 'a') + key) % 26) + lower;
    }
}
return plaintext;
}
