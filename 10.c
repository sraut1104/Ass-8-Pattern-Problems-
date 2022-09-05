/*      Patter-7
        1234321
        123 321
        12   21
        1     1
*/

#include<stdio.h>
int main()
{
    int j,i;
    for(i=1;i<=4;i++)
    {
         for(j=1;j<=7;j++)
        {
            if((j>=1&&j<=5-i) || (j>=3+i&&j<=7))
            {
                if(j>=1&&j<=5-i)
                    printf("%d",j);
                else if(j>=3+i&&j<=7)
                    printf("%d",8-j);
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
