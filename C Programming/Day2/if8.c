// WAp 

#include <stdio.h>

int main() {
    int n1,n2,n3;

    printf("Enter number 1 : ");
    scanf("%d",&n1);
    printf("Enter number 2 : ");
    scanf("%d",&n2);
    printf("Enter number 3 : ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3) {
        printf("n1 is greater\n");
    } else if (n2>n1 && n2>n3) {
        printf("n2 is greater\n");
    } else {
        printf("n3 is greater");
    }

}