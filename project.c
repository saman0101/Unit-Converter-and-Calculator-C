#include <stdio.h>
#include <string.h>

// Function prototypes for unit conversion
void lengthConversion();
void areaConversion();
void volumeConversion();
void massConversion();
void accelerationConversion();
void temperatureConversion();
void forceConversion();
void speedConversion();
void timeConversion();
void energyConversion();
void powerConversion();
void pressureConversion();

// Calculator function
void calculator() {
    int a, b;
    char oper;
    float result;

    printf("Enter your first integer: ");
    scanf("%d", &a);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &oper);
    printf("Enter your second integer: ");
    scanf("%d", &b);

    switch (oper) {
        case '+':
            result = a + b;
            printf("Answer: %f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Answer: %f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Answer: %f\n", result);
            break;
        case '/':
            if (b != 0) {
                result = (float)a / b;
                printf("Answer: %f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("You entered an invalid operator.\n");
    }
}

// Unit conversion functions
void lengthConversion() {
    float meters;
    printf("Enter length in meters: ");
    scanf("%f", &meters);
    printf("Length in kilometers: %f\n", meters / 1000);
    printf("Length in centimeters: %f\n", meters * 100);
    printf("Length in inches: %f\n", meters * 39.3701);
    printf("Length in feet: %f\n", meters * 3.28084);
}

void areaConversion() {
    float squareMeters;
    printf("Enter area in square meters: ");
    scanf("%f", &squareMeters);
    printf("Area in square kilometers: %f\n", squareMeters / 1e6);
    printf("Area in square centimeters: %f\n", squareMeters * 1e4);
    printf("Area in square feet: %f\n", squareMeters * 10.7639);
    printf("Area in acres: %f\n", squareMeters * 0.000247105);
}

void volumeConversion() {
    float liters;
    printf("Enter volume in liters: ");
    scanf("%f", &liters);
    printf("Volume in milliliters: %f\n", liters * 1000);
    printf("Volume in cubic meters: %f\n", liters / 1000);
    printf("Volume in gallons: %f\n", liters * 0.264172);
    printf("Volume in cubic inches: %f\n", liters * 61.0237);
}

void massConversion() {
    float kilograms;
    printf("Enter mass in kilograms: ");
    scanf("%f", &kilograms);
    printf("Mass in grams: %f\n", kilograms * 1000);
    printf("Mass in milligrams: %f\n", kilograms * 1e6);
    printf("Mass in pounds: %f\n", kilograms * 2.20462);
    printf("Mass in ounces: %f\n", kilograms * 35.274);
}

void accelerationConversion() {
    float metersPerSecondSquared;
    printf("Enter acceleration in meters per second squared: ");
    scanf("%f", &metersPerSecondSquared);
    printf("Acceleration in feet per second squared: %f\n", metersPerSecondSquared * 3.28084);
    printf("Acceleration in G-force: %f\n", metersPerSecondSquared / 9.80665);
}

void temperatureConversion() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Temperature in Fahrenheit: %f\n", (celsius * 9/5) + 32);
    printf("Temperature in Kelvin: %f\n", celsius + 273.15);
}

void forceConversion() {
    float newtons;
    printf("Enter force in Newtons: ");
    scanf("%f", &newtons);
    printf("Force in kilonewtons: %f\n", newtons / 1000);
    printf("Force in pounds-force: %f\n", newtons * 0.224809);
}

void speedConversion() {
    float metersPerSecond;
    printf("Enter speed in meters per second: ");
    scanf("%f", &metersPerSecond);
    printf("Speed in kilometers per hour: %f\n", metersPerSecond * 3.6);
    printf("Speed in miles per hour: %f\n", metersPerSecond * 2.23694);
    printf("Speed in feet per second: %f\n", metersPerSecond * 3.28084);
}

void timeConversion() {
    float seconds;
    printf("Enter time in seconds: ");
    scanf("%f", &seconds);
    printf("Time in minutes: %f\n", seconds / 60);
    printf("Time in hours: %f\n", seconds / 3600);
    printf("Time in days: %f\n", seconds / 86400);
}

void energyConversion() {
    float joules;
    printf("Enter energy in Joules: ");
    scanf("%f", &joules);
    printf("Energy in kilojoules: %f\n", joules / 1000);
    printf("Energy in calories: %f\n", joules / 4.184);
    printf("Energy in kilowatt-hours: %f\n", joules / 3.6e6);
}

void powerConversion() {
    float watts;
    printf("Enter power in Watts: ");
    scanf("%f", &watts);
    printf("Power in kilowatts: %f\n", watts / 1000);
    printf("Power in horsepower: %f\n", watts * 0.00134102);
}

void pressureConversion() {
    float pascals;
    printf("Enter pressure in Pascals: ");
    scanf("%f", &pascals);
    printf("Pressure in kilopascals: %f\n", pascals / 1000);
    printf("Pressure in atmospheres: %f\n", pascals / 101325);
    printf("Pressure in mmHg: %f\n", pascals * 0.00750062);
}

int main() {
    int choice;

    do {
        printf("\nMain Menu:\n");
        printf("1. Calculator\n");
        printf("2. Unit Conversion\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                calculator();
                break;
            case 2:
                printf("\nUnit Conversion Menu:\n");
                printf("1. Length/Distance\n");
                printf("2. Area\n");
                printf("3. Volume\n");
                printf("4. Mass/Weight\n");
                printf("5. Acceleration\n");
                printf("6. Temperature\n");
                printf("7. Force\n");
                printf("8. Speed\n");
                printf("9. Time\n");
                printf("10. Energy\n");
                printf("11. Power\n");
                printf("12. Pressure\n");
                printf("Enter your choice: ");
                int unitChoice;
                scanf("%d", &unitChoice);

                switch (unitChoice) {
                    case 1:
                        lengthConversion();
                        break;
                    case 2:
                        areaConversion();
                        break;
                    case 3:
                        volumeConversion();
                        break;
                    case 4:
                        massConversion();
                        break;
                    case 5:
                        accelerationConversion();
                        break;
                    case 6:
                        temperatureConversion();
                        break;
                    case 7:
                        forceConversion();
                        break;
                    case 8:
                        speedConversion();
                        break;
                    case 9:
                        timeConversion();
                        break;
                    case 10:
                        energyConversion();
                        break;
                    case 11:
                        powerConversion();
                        break;
                    case 12:
                        pressureConversion();
                        break;
                    default:
                        printf("Invalid choice.\n");
                }
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}
