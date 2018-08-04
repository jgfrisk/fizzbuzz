#include <stdio.h>

int main(int n)
{
	if ( n > 100 )
		return 0;

	if ( n % 15 == 0 )
	{
		puts("FizzBuzz");
	}
	else if ( n % 3 == 0 )
	{
		puts("Fizz");
	}
	else if ( n % 5 == 0 )
	{
		puts("Buzz");
	}
	else
	{
		printf("%d\n",n);
	}

	main(n+1);


}

