#include <stdio.h>
int findLCM(int a, int b);
 int main()
{
    int n1,n2,lcm;
    printf(" Input 2 numbers to find the LCM \n");
    scanf("%d %d",&n1,&n2);
    if(n1 >  n2)
        lcm= findLCM(n2,n1);
    else
        lcm = findLCM(n1,n2);
    printf(" \n The LCM of %d and %d is %d",n1,n2,lcm);
    return 0;
}
int findLCM(int a, int b)
{
    static int l = 0;
    l += b;
    if((l % a == 0) && (l % b == 0))
    {
        return l;
    }
    else
    {
        findLCM(a, b);
    }
}
