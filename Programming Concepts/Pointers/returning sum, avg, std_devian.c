// Write a function that receives 5 integers and return the sum, average and standard deviation of these numbers. Call this function from main() and print the results in main().

#include<stdio.h>
#include<math.h>
void function(int a, int b, int c, int d, int e, float *sum, float *avg, float *std_devian);

void main()
{
	int a,b,c,d,e;
	float sum,avg,std_devian;
	
	printf("Enter the first number:- \n");
	scanf("%d",&a);
	printf("Enter the second number:- \n");
	scanf("%d",&b);
	printf("Enter the third number:- \n");
	scanf("%d",&c);
	printf("Enter the fourth number:- \n");
	scanf("%d",&d);
	printf("Enter the fifth number:- \n");
	scanf("%d",&e);
	
	function(a, b, c, d, e, &sum, &avg, &std_devian); 
	
	printf("The sum is = %f\n",sum);
	printf("The average is = %f\n",avg);
	printf("The standard deviation is = %f\n",std_devian);
}

void function(int a, int b, int c, int d, int e, float *sum, float *avg, float *std_devian)
{
	*sum = a+b+c+d+e;
	*avg = *sum/5.0;
	*std_devian = sqrt (((a-*avg)*(a-*avg))+((b-*avg)*(b-*avg))+((c-*avg)*(c-*avg))+((d-*avg)*(d-*avg))+((e-*avg)*(e-*avg))/5.0);
}
