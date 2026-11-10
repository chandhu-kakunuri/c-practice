
#include <stdio.h>

int main() {
    int num, n, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &n);

    // 1. Count set bits
    temp = num;

    while (temp > 0) {
        count += temp & 1;
        temp = temp >> 1;
    }

    printf("Set bits count = %d\n", count);

    // 2. Set nth bit
    printf("After setting bit = %d\n",
           num | (1 << n));

    // 3. Clear nth bit
    printf("After clearing bit = %d\n",
           num & ~(1 << n));

    // 4. Toggle nth bit
    printf("After toggling bit = %d\n",
           num ^ (1 << n));

    // 5. Check nth bit
    if ((num >> n) & 1)
        printf("Bit %d is SET\n", n);
    else
        printf("Bit %d is CLEAR\n", n);

    return 0;
}
