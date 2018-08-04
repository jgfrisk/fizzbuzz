#include <stdio.h>

int fb(int _,int __)
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

                __ <<= 01l;

                putchar(0144l+__-040l);
                putchar(0144l + (-((1l<<01l)+01l))*__+013l );
                putchar(0144l+ ((__>>01>0l)?__*013l:-__*013l) );
                putchar(0144l+ ((__>>01>0l)?__*013l:-__*013l) );

                return 0144l;
        }

        if ( _ < __ && __)
                return _;
        else if (__)
                return fb(_-__,__);

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

        return fb(_+01l,__);

}

int main(int ___)
{
        fb(___,00<<0l<(~1+1));
}

