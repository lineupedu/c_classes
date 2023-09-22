#include <stdio.h>
int main()
{
   int c, nl, nb, nt;
   nl = nb = nt = 0;
   while((c = getchar()) != EOF) {
      if(c == ' ') {
         nb++;
      }else if(c == '\t'){
         nt++;
      }else if(c == '\n'){
         nl++;
      }
   }
   printf("Total Blank is %d\n", nb);
   printf("Total Tab is %d\n", nt);
   printf("Total New line is %d\n", nl);

   return 0;
}
