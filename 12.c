/*   Star Pattern-5
            A
           ABA
          ABCBA
         ABCDCBA
        ABCDEDCBA
*/

#include<stdio.h>
int main()
{
    int i,j,y;
    for(i=1;i<=5;i++)
    {
        y=65;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
                {
                    if (j>=1 && j<=5)
                    {
                        printf("%c",y);
                        y++;
                    }
                    if (j==6 )
                    {
                        y=y-2;
                        printf("%c",y);
                    }
                    if (j>=7 && j<=9)
                    {
                        y--;
                        printf("%c",y);
                    }
                }
            else
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}
