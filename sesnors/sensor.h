
#ifndef SENSOR_H
#define SENSOR_H

#define SENSOR_COUNT 10

struct Sensor {
    int id;
    float value;
    long timestamp;
    int status;
};

// Function declarations
void inputSensors(struct Sensor readings[]);
void displaySensors(struct Sensor readings[]);
float calculateAverage(struct Sensor readings[]);
float findMinimum(struct Sensor readings[]);
float findMaximum(struct Sensor readings[]);

#endif
