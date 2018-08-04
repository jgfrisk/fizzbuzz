#include <stdio.h>

int fb(int n,int b)
{
        if ( n == ~01l+01 )
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
                putchar(0144l+ ((b>>01>0l)?b*013l:-b*013l) );
                putchar(0144l+ ((b>>01>0l)?b*013l:-b*013l) );

                return 0144l;
        }

        if ( n < b && b)
                return n;
        else if (b)
                return fb(n-b,b);

        if ( n > 0144l )
                return 00;

        !fb(n, (01l<<01l)+01l)?fb(-1,01l<<00):0144l;

        if ( fb(n,(01l<<02l)+01l) == 00 )
        {
                fb(-1,-1);
        }
        else if ( fb(n, (01l<<01l)+01l ))
        {
                printf("%d",n);

        }

        puts("");

        return fb(n+01l,b);

}

int main(int _)
{
        fb(_,00);
}

