/*   Star Pattern-5
            1
           121
          12321
         1234321
        123454321
*/

#include<stdio.h>
int main()
{
    int i,j,x=0,y;
    for(i=1;i<=5;i++)
    {
        y=i-x;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
                {
                    if (j>=1 && j<=5)
                    {
                        printf("%d",y);
                        y++;
                    }
                    if (j==6 )
                    {
                        y=y-2;
                        printf("%d",y);
                    }
                    if (j>=7 && j<=9)
                    {
                        y--;
                        printf("%d",y);
                    }
                }
            else
                printf(" ");
        }
        x++;
        printf("\n");
    }


    return 0;
}
