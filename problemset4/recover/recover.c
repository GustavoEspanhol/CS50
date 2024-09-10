#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

  FILE* card = fopen(argv[1], "r");

  if(card == NULL)
  {
    fprintf(stderr, "Could not open %s.\n", argv[1]);
    return 2;
  }

   FILE* outptr = NULL;
   BYTE buffer[512];
   int jpeg = 0;
   char image[8]={0};

    while(fread(buffer, 1, 512, card)==512)
    {
      if(buffer[0]==0xff && buffer[1]==0xd8 && buffer[2]==0xff && (buffer[3] & 0xf0) == 0xe0)
      {
        if(outptr != NULL)
        {
            fclose(outptr);
        }
        sprintf(image, "%03i.jpg", jpeg++);
        outptr = fopen(image, "w");
      }
      if(outptr != NULL)
      {
       fwrite(buffer, 1, 512, outptr);
      }
    }
    if(outptr != NULL)
    {
        fclose(outptr);
    }
    fclose(card);

    return 0;



}
