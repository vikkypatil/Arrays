# Arrays
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*a,sum=0,curVal=0,max;
    scanf("%d",&n);
    a = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
        curVal = curVal + (i*a[i]);
    }
    max = curVal;
    for(i=1;i<n;i++)
    {
        curVal = curVal + sum - n*a[n-i];
        if(max<curVal)
            max = curVal;
    }
    printf("\nmax = %d",max);
    return 0;
}
