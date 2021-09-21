#include<stdio.h>
#define len 150
int main()
{
      char str[len];
      int i, line, word, ch;
      line=word=ch=0;

      printf("Enter a string in multiple lines.\nTo end type - in a blank line and press Enter :\n");
      scanf("%[^-]", str);

      for(i=0; str[i]!='\0'; i++)
      {
        if(str[i]=='\n')
        {
          line++;
          word++;
        }
        else
        {
          if(str[i]==' '||str[i]=='\t')
          {
            word++;
            ch++;
          }
          else ch++;
        }
      }

      printf("\nCharacters = %d\nWords = %d\nLines = %d",ch,word,line);
      return 0;
 }
