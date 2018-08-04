#include <stdio.h>

int mod(int a,int b)
{
	if ( a < b )
		return a;
	else
		return mod(a-b,b);
}

int main(int n, char *s[])
{
	if ( n > 100 )
		return 0;

	if ( mod(n,15) == 0 )
	{
		puts("FizzBuzz");
	}
	else if ( mod(n,3) == 0 )
	{
		puts("Fizz");
	}
	else if ( mod(n,5) == 0 )
	{
		puts("Buzz");
	}
	else
	{
		printf("%d\n",n);
	}

	main(n+1,NULL);


}

