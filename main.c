#include <stdio.h>

void decimal_to_binary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    int binary[32];
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    printf("Binary equivalent: ");
    decimal_to_binary(number);
    printf("\n");
    
    return 0;
}
