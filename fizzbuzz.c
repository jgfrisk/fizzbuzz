#include <stdio.h>

int _fb(int b)

{
	/* f(2) = 5
	 * f(-2) = 17
	 *
	 * f(x) = -3x+11
	 */

	/* fizz = 102, 105, 122, 122 */
	/* buzz = 98 , 117, 122, 122 */

	b <<= 01l;

	putchar(0144l+b-040l);
	putchar(0144l + (-((1l<<01l)+01l))*b+013l );
	putchar(0144l+ ((b>>1>0)?b*013l:-b*013l) );
	putchar(0144l+ ((b>>1>0)?b*013l:-b*013l) );

}

int fb(int n,int b)
{
	if ( n < b && b)
		return n;
	else if (b)
		return fb(n-b,b);

        if ( n > 0144l )
		return 0;

	int nn = fb(n,3);

	if ( !nn )
	{
		_fb(1);
	}
	if ( fb(n,5) == 0 )
	{
		_fb(-1);
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

