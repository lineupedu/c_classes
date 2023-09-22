#include <stdio.h>

/* This program is explaining the horizontal Histogram code */

#define IN 1
#define OUT 0

#define MAX 10



int main()
{
  int count[MAX] = {0};
  int c, len = 0, i = 0, j = 0;
  int state = OUT;

  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\t' || c == '\n') {
      if(state == IN && len >= 1 &&
         len < MAX) {
           count[len]++;
      }
      len = 0;
      state = OUT;
    }else if(state == OUT) {
      state = IN;
      len++;
    }else {
      len++;
    }
  }

  printf("\n");
  for(i = 1; i < MAX; i++) {
    printf("%2d | ", i);
    for(j = 0; j < count[i]; j++)
      printf("*");
    printf("\n");
  } 
  return 0;
}	
