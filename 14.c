/*   Star Pattern-14
            *
            **
            * *
            *  *
            *****

*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                if (i==3 || i==4)
                {
                    if (j>=2 && j<i)
                        printf(" ");
                    else
                        printf("*");
                }
                else
                    printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
