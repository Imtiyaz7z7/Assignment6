#include<stdio.h>
int main(){
    int n;
    int s = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n",i);
        s = s*i;
    }
    printf("The sum is:\n");
    printf("%d\n",s);
    
    return 0;
}