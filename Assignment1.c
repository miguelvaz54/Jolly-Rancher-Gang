#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
    //The main function encapsulates and calls the other functions; returns 0
    calculateDistance();
    //calculatePerimeter();
    //calculateArea():
    //calculateWidth();
    //calculateHeight();

    return 0;
}

double calculateDistance() {
    //This Functions calculates the distance between two points and returns it to the user
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}



double askForUserInput() {
    //This Function asks the user for inputs

    double value;
    printf("Enter a Value: ");
    scanf("%lf", value);

    return value;
}