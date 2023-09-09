#include<stdio.h>
/* Printing temp table code */
#define LOWER 300
#define UPPER 0
#define STEPS 20
int main()
{
  int frh;
  for(frh=LOWER; frh >= UPPER; frh = frh-STEPS) { 
    printf("%3d\t%6.1f\n",frh, (5.0/9.0)*(frh-32.0));
  }
  return 0;
}
