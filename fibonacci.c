# include <stdio.h>
int Fibonacci(int n) 
{
	if (n==1 || n==2)
	return 1;
	else return Fibonacci(n-1)+Fibonacci(n-2);
	
}
int main()
{
	int i;
	for (i=1;i<=200;i++)
	printf("%d\n",Fibonacci(i));
	return 0;
	
 } 
