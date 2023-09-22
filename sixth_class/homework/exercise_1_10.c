#include <stdio.h>
int main()
{
   int c;
   while((c = getchar()) != EOF) {
      if(c == '\t') {
         putchar('\\');
         putchar('t');
         continue;
      }
      if(c == ' ') {
         putchar('\\');
         putchar('b');
         continue;
      }
      if(c == '\\') {
         putchar('\\');
         putchar('\\');
         continue;
      }
      else
         putchar(c);
   }
   return 0;
}
