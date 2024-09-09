#include <stdio.h>
#include <math.h>

double askForUserInput() {
    //This Function asks the user for inputs

    double value;
    printf("Enter a Value: ");
    scanf("%lf", &value);

    return value;
}

double calculateDistance() {
    //This Functions calculates the distance between two points and returns it to the user
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();
    double diffx = 27.0;
    //double rooty = pow(y2 - y1, 2);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    double distance;
    distance = sqrt(diffx);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}


int main(int argc, char **argv) {
    //The main function encapsulates and calls the other functions; returns 0
    calculateDistance();
    //calculatePerimeter();
    //calculateArea():
    //calculateWidth();
    //calculateHeight();

    return 0;
}