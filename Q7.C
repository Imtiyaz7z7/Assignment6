#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i=0;
    while (num!=0)
    {
        num=num/10;
        i++;
    }
    
    printf("%d digit number",i);
    
    return 0;
}