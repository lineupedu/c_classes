#include <stdio.h>
/* print Celsius-Fahrenheit table
for celsius = -17, -6, ..., 148 */
int main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = -17; /* lower limit of temperature scale */
	upper = 148; /* upper limit */
	step = 11; /* step size */
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * (celsius) + 32;
		printf("%3d\t%4d\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
