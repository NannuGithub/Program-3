#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x )
{
	return(x*x-x-1);
}
void main()
{
	float a,b,m,e;
	int i;
	//clrscr () ;
	printf("\n Enter a, b,and e \n");
	scanf("%f %f %f",&a ,&b, &e);
	if(f(a)*f(b)>0)
	printf("\n Enter invalid interval\n");
	else
		m=(a*f(b)-b*f(a))/f(b)-f(a);
		i=1;
		while(fabs (f(m))>e)
		{
			printf("\n %d %f %f %f %f %f",i,a,b,m,f(m),f(a)*f(m));
			if(f(a)*f(m)>0)
			a=m;
			else
            a=b;
			b=m;
			m=(a*f(b)-b*f(a))/f(b)-f(a);
			i=i+1;
		}
		printf("\nroot= %f",m);



		getch();
	}
