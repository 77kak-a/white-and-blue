# include <stdio.h>
# include <math.h>

int main(void)
{
	
	int a,b,c;
	double delta;
	double x1,x2;
	scanf("%d%d%d",&a,&b,&c);
	delta = b*b - 4*a*c;
	
	if (delta >0)
	{
		x1 = (-b + sqrt(delta) / (2.0*a));
		x2 = (-b - sqrt(delta) / (2.0*a));
		printf("该一元二次方程有俩个解, x1 = %f, x2 = %f\n", x1, x2) ;
	}
	else if (delta == 0)
	{
		x1 = (-b) / (2.0*a);
		x2 = x1;
		printf("该一元二次方程有一个唯一解， x1 = x2 =%f\n", x1);
	}
	else
	{
		printf("无解") ;
	}
}
