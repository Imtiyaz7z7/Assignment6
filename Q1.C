#include<stdio.h>
int main(){
    int n;
    int s = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
        s = s+i;
    }
    printf("The sum is:\n");
    printf("%d\n",s);
    
    return 0;
}