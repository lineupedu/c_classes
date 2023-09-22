 #include <stdio.h>
 /* copy input to output; 2nd version */
 int main()
 {
   int c;
   while (c = getchar() != EOF) {
     //putchar(c);
     if (c==0)
	     printf("c is Zero");
     if (c==1)
	     printf("c is one");
   }
   return 0;
 }
