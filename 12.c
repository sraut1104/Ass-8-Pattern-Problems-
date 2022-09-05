/*     Pattern-12
        ABCDCBA
         ABCBA
          ABA
           A
*/

#include<stdio.h>
int main()
{
    int i,j,x=0,y;
    for(i=1;i<=4;i++)
    {
        y=65;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j>=1 && j<=4)
                {
                    printf("%c",y);
                    y++;
                }
                if(j==5)
                {
                    y=y-2;
                    printf("%c",y);
                }
                if(j>=6 && j<=7)
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
