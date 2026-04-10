//Area of circle
#include<stdio.h>
#define PI 3.14
//int main()
//{
//	float r;
//	printf("Enter the value of radius: ");
//	scanf("%f",&r);
//	float area=PI*r*r;
//	printf("\nThe area of circle is %f",area);	
//}
//area of square
/**int main()
{
	float l;
	printf("Enter the value of length: ");
	scanf("%f",&l);
	float area=l*l;
	printf("\nThe area of square is %f",area);	
}**/
/**int main()
{
	float b;
	float h;
	printf("Enter the value of base: ");
	scanf("%f",&b);
	printf("Enter the value of height:");
	scanf("%f",&h);
	float area=0.5*b*h;
	printf("\nThe area of triangle is %f",area);	
}**/
/**int main()
{
	float r;
	printf("Enter the value of radius: ");
	scanf("%f",&r);
	float perimeter=2*PI*r;
	printf("\nThe perimerter of circle is %f",perimeter);	
}**/
int main()
{
	float p;
	float r;
	float n;
	printf("Enter the value of principle: ");
	scanf("%f",&p);
	printf("Enter the value of rate: ");
	scanf("%f",&r);
	printf("Enter the value of time: ");
	scanf("%f",&n);
	float intrest=p*r*n/100;
	printf("\nThe intrest is %f",intrest);	
}