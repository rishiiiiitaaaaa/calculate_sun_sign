#include<stdio.h>
void main()
{
    int m , d;
    printf("enter dob in form of mm dd : \n");
    scanf("%d %d",&m),&d;
    if(m==12  && d >=22 || m==1 && d<=19 )
        printf("capricon");
    else if ( m==1  && d >=20 || m==2 && d<=17 )
        printf(" aquarius");
    else if ( m==2  && d >=18 || m==3 && d<=19  )
        printf("pisces");

    else if ( m==3  && d >=20 || m==4 && d<=19  )
        printf("aries");

    else if ( m==4  && d >=20 || m==5 && d<=20  )
        printf("taurus");

    else if ( m==5  && d >=21 || m==6 && d<=20 )
        printf(" gemini ");

    else if ( m==6  && d >=21 || m==7 && d<=22  )
        printf("cancer");

    else if ( m==7  && d >=23 || m==8 && d<=22  )
        printf("leo");
    else if ( m==8  && d >=23 || m==9 && d<=22  )
        printf("virgo");
    
    else if ( m==9 && d >=23 || m==10 && d<=22  )
        printf("libra");

    else if ( m==10  && d >=23 || m==11 && d<=21 )
        printf("sorpio");
    else if ( m==11  && d >=22 || m==12 && d<=21  )
        printf("sagittarius");
    
    else 
        printf ("re-enter your dob\n");
    
}