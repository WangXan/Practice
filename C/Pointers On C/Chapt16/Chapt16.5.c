#include <math.h>
#include <stdio.h>

#define A 	10.45
#define B 	10.00
#define	 C  	-1.0
#define X 	1.78816

double	wind_chill( double temp, double velocity )
{
	temp = 33 - temp;
	return 33 - ( ( A + B * sqrt( velocity ) + C * velocity ) * temp ) /
		( A + B * sqrt( X ) + C * X );
}

int main()
{
	printf("Input the temprature and the velocity : \n");
	double temp,velocity;
	scanf("%lf%lf",&temp,&velocity);
	printf("wind chill : %.2lf\n", wind_chill(temp,velocity));
	return 0;
}