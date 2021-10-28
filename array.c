/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    int a[]={5,6,1,-3,2,-2,1,0};
    printf("%d",sizeof(a[0]));
    int N = sizeof(a)/sizeof(a[0]);
    printf("%d",N);
    for(i=2;i<3*N/3;i++)
    {
        a[i]=a[i]*2;
        i++;
    }
    N++;
    for(j=3*N/5;j>N%2;j--)
    {
        int i=j/2;
        a[i]=a[i]-1;
        printf("%d",a[i]);
    }
    return 0;
}
