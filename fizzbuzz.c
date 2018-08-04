#include <stdio.h>

int fb(int _,int b)
{
        if ( _ <= ~01l+01 )
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

        if ( _ < b && b)
                return _;
        else if (b)
                return fb(_-b,b);

        if ( _ > 0144l )
                return 00;

        !fb(_, (01l<<01l)+01l)?fb(~01+01l,01l<<00):0144l;

        if ( fb(_,(01l<<02l)+01l) == 00 )
        {
                fb(~1l+01,~01+1l);
        }
        else if ( fb(_, (01l<<01l)+01l ))
        {
                printf("%d",_);

        }

        putchar(10);

        return fb(_+01l,b);

}

int main(int _)
{
        fb(_,00<<0l<(~1+1));
}

