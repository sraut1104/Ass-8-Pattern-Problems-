/*     Pattern-9
        1234321
         12321
          121
           1
*/

#include<stdio.h>
int main()
{
    int i,j,x=0,y;
    for(i=1;i<=4;i++)
    {
        y=i-x;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j>=1 && j<=4)
                {
                    printf("%d",y);
                    y++;
                }
                if(j==5)
                {
                    y=y-2;
                    printf("%d",y);
                }
                if(j>=6 && j<=7)
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
