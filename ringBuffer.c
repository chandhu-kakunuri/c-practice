
#include <stdio.h>

#define SIZE 8

int main() {

    int buffer[SIZE];
    int next = 0;
    int count = 0;
    int reading;

    for (int i = 1; i <= 12; i++) {

        printf("Enter reading %d: ", i);
        scanf("%d", &reading);

        buffer[next] = reading;

        next = (next + 1) % SIZE;

        if (count < SIZE) {
            count++;
        }
    }

    printf("\nLast 8 Readings:\n");

    int start = (next - count + SIZE) % SIZE;

    for (int i = 0; i < count; i++) {

        int index = (start + i) % SIZE;

        printf("%d ", buffer[index]);
    }

    printf("\n");

    return 0;
}
