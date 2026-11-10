
#include <stdio.h>

struct Sensor {
    int id;
    float value;
    long timestamp;
    int status;
};

int main() {

    struct Sensor readings[10];

    float sum = 0, avg;
    float min, max;

    // Read 10 sensor readings
    for (int i = 0; i < 10; i++) {

        printf("\nEnter details for Sensor %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &readings[i].id);

        printf("Enter Value: ");
        scanf("%f", &readings[i].value);

        printf("Enter Timestamp: ");
        scanf("%ld", &readings[i].timestamp);

        printf("Enter Status (1=ON, 0=OFF): ");
        scanf("%d", &readings[i].status);

        sum += readings[i].value;
    }

    // Initialize minimum and maximum
    min = readings[0].value;
    max = readings[0].value;

    // Find minimum and maximum
    for (int i = 0; i < 10; i++) {

        if (readings[i].value < min) {
            min = readings[i].value;
        }

        if (readings[i].value > max) {
            max = readings[i].value;
        }
    }

    // Calculate average
    avg = sum / 10;

    // Print all sensor readings
    printf("\n----- SENSOR DETAILS -----\n");

    for (int i = 0; i < 10; i++) {

        printf("\nID: %d", readings[i].id);
        printf("\nValue: %.2f", readings[i].value);
        printf("\nTimestamp: %ld", readings[i].timestamp);
        printf("\nStatus: %s\n",
               readings[i].status ? "ON" : "OFF");
    }

    // Print results
    printf("\n----- SENSOR STATISTICS -----\n");

    printf("Average Value = %.2f\n", avg);
    printf("Minimum Value = %.2f\n", min);
    printf("Maximum Value = %.2f\n", max);

    return 0;
}
