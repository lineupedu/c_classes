#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower+1;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		/* celsius = 5 * (fahr-32)/9; */
		printf("%3.0f %3.2f\n", fahr, celsius);
		if(fahr == 1){
		  fahr =0;
		}
		fahr = fahr + step;
	}
	return 0;
}
