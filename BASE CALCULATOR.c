#include <stdio.h>
#include <math.h>
#include <string.h>

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

int octal(int n) {
    int octalNumber = 0;
    int placeValue = 1;

    while (n != 0) {
        int remainder = n % 8;
        octalNumber += remainder * placeValue;
        n /= 8;
        placeValue *= 10;
    }

    return octalNumber;
}

void hexadecimal(int n) {
    int index = 0;
    char hexa[100];

    while (n!=0) {
        int remainder = n % 16;
        if (remainder < 10) {
            hexa[index] = remainder + '0';
        }
        else {
            hexa[index] = remainder + 'A' - 10;
        }
        index++;
        n/=16;
    }
    for (int i = index - 1; i >= 0; i--) {
            printf("%c", hexa[i]);
        }
        printf("\n");
}

int main() {
    int tb=0;
    printf("Base Converter\n");
    printf("input your 10 base number: ");
    scanf("%d", &tb);
    printf("Your binary number is: %d\n", binary(tb));
    printf("Your octal number is: %d\n", octal(tb));
    printf("Your hexadecimal number is: ");
    hexadecimal(tb);

    return 0;
}
