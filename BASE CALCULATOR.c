#include <stdio.h>
#include <math.h>

int binary(int n1) {
    int ans1=1;
        while(n1>1) {
            if (n1%2==0) {
                ans1 = ans1*10;
                n1/=2;
            }
            else {
                ans1 = ans1*10+1;
                n1-=1;
                n1/=2;
            }
        }
    return ans1;
}



int main() {
    int tb=0;
    printf("Base Converter\n");
    printf("input your 10 base number: ");
    scanf("%d", &tb);
    printf("Your binary number is: %d", binary(tb));

    return 0;
}
