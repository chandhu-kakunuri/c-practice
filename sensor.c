
#include <stdio.h>
#include "sensor.h"

// Get sensor details
void inputSensors(struct Sensor readings[]) {

    for (int i = 0; i < SENSOR_COUNT; i++) {

        printf("\nEnter details for Sensor %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &readings[i].id);

        printf("Enter Value: ");
        scanf("%f", &readings[i].value);

        printf("Enter Timestamp: ");
        scanf("%ld", &readings[i].timestamp);

        printf("Enter Status (1=ON, 0=OFF): ");
        scanf("%d", &readings[i].status);
    }
}

// Display sensor details
void displaySensors(struct Sensor readings[]) {

    for (int i = 0; i < SENSOR_COUNT; i++) {

        printf("\nID: %d", readings[i].id);
        printf("\nValue: %.2f", readings[i].value);
        printf("\nTimestamp: %ld", readings[i].timestamp);

        printf("\nStatus: %s\n",
               readings[i].status ? "ON" : "OFF");
    }
}

// Calculate average
float calculateAverage(struct Sensor readings[]) {

    float sum = 0;

    for (int i = 0; i < SENSOR_COUNT; i++) {
        sum += readings[i].value;
    }

    return sum / SENSOR_COUNT;
}

// Find minimum
float findMinimum(struct Sensor readings[]) {

    float min = readings[0].value;

    for (int i = 1; i < SENSOR_COUNT; i++) {

        if (readings[i].value < min) {
            min = readings[i].value;
        }
    }

    return min;
}

// Find maximum
float findMaximum(struct Sensor readings[]) {

    float max = readings[0].value;

    for (int i = 1; i < SENSOR_COUNT; i++) {

        if (readings[i].value > max) {
            max = readings[i].value;
        }
    }

    return max;
}
