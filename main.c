
#include <stdio.h>
#include "sensor.h"

int main() {

    struct Sensor readings[SENSOR_COUNT];

    // Input sensor readings
    inputSensors(readings);

    // Display sensor details
    printf("\n===== SENSOR DETAILS =====\n");
    displaySensors(readings);

    // Display statistics
    printf("\n===== SENSOR STATISTICS =====\n");

    printf("Average Value = %.2f\n",
           calculateAverage(readings));

    printf("Minimum Value = %.2f\n",
           findMinimum(readings));

    printf("Maximum Value = %.2f\n",
           findMaximum(readings));

    return 0;
}
