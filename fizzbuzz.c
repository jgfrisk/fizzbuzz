#include <stdio.h>

int fb(int n,int b)
{
	if ( n < b && b)
		return n;
	else if (b)
		return fb(n-b,b);

        if ( n > 0144 )
		return 0;

	int nn = fb(n,3);

	if ( !nn )
	{
		printf("Fizz");
	}
	if ( fb(n,5) == 0 )
	{
		printf("Buzz");
	}
	else if ( nn )
	{
		printf("%d",n);

	}

	puts("");

	return fb(n+1,b);

}

int main(int n)
{
	fb(n,0);
}

