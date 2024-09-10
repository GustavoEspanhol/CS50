#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int compute_words(string text);
int compute_sentences(string text);
int compute_letters(string text);

int main(void)
{
  string text = get_string("Text: ");
  int words = compute_words(text);
  int sentences = compute_sentences(text);
  int letters = compute_letters(text);

  float L = ((float)letters / (float)words) * 100;
  float s = ((float)sentences / (float)words) * 100;
  float index = 0.0588 * L - 0.296 * s - 15.8;
  int grade = round(index);

  if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }

}

int compute_words(string text)
{
  int lenght = strlen(text);
  int w = 0;
  int i = 0;
  do{
  i++;
  if(isblank(text[i]))
  {
   w++;
  }
  }while(i < lenght);
  w++;

  return w;
}

int compute_sentences(string text)
{
  int lenght = strlen(text);
  int s = 0;
  int i = 0;
  do{
  i++;
  if(text[i] == '.' || text[i] == '!' || text[i] == '?')
  {
   s++;
  }
  }while(i < lenght);

  return s;

}

int compute_letters(string text)
{
  int lenght = strlen(text);
  int l = 0;
  int i = 0;
  do{
  i++;
  if(isalpha(text[i]))
  {
   l++;
  }
  }while(i < lenght);
  l++;

  return l;
}
