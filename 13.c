/*         Patter-7
        ABCDEFGFEDCBA
        ABCDEF FEDCBA
        ABCDE   EDCBA
        ABCD     DCBA
        ABC       CBA
        AB         BA
        A           A

*/

#include<stdio.h>
int main()
{
    int j,i;
    for(i=1;i<=7;i++)
    {
         for(j=1;j<=13;j++)
        {
            if((j>=1 && j<=8-i) || (j>=6+i && j<=13))
            {
                if(j>=1 && j<=8-i)
                    printf("%c",64+j);
                else if(j>=6+i && j<=13)
                    printf("%c",78-j);
            }
            else
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}
