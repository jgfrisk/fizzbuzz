#include <stdio.h>

int mod(int n,int b)
{
	if ( n < b && b)
		return n;
	else if (b)
		return mod(n-b,b);

        if ( n > 0144 )
		return 0;

	int nn = mod(n,3);

	if ( !nn )
	{
		printf("Fizz");
	}
	if ( mod(n,5) == 0 )
	{
		printf("Buzz");
	}
	else if ( nn )
	{
		printf("%d",n);

	}

	puts("");

	return mod(n+1,b);

}

int main(int n)
{
	mod(n,0);
}

