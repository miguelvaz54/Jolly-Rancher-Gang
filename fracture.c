#include <stdio.h>
#include <math.h>
//Author: Miguel Vaz
//Date: Fall 2024
//Class: COP 3223, Professor Parra
//Purpose: This code collects various coordinate pairs from the user and returns information regarding the two points to the user.

double askForUserInput() {
    //This Function asks the user for inputs

    double value;
    printf("Enter a Value: ");
    scanf("%lf", &value);

    
    return value;
}

double getCoordinates() {
    //This Functions calculates the distance between two points and returns it to the user
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    double distance;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distance;

}

double calculateDistance() {
   //This function prints the Distance
   double distance = getCoordinates();
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

double calculatePerimeter() {
    //This Function calculates the Perimeter of the city

    double distance = getCoordinates();
    double perimeter = M_PI * distance;
    
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    
    return 4.0; 
}

double calculateArea() {
    //This Function calculates the Area of the city

    double radius = getCoordinates() / 2;
    double area = pow(radius, 2) * M_PI;

    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 2.0;
}

double calculateWidth() {
    //This Function calculate the Width of the City

    double width = getCoordinates();

    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 1.0;
}

double calculateHeight() {
    //This Function calculate the Height of the City

    double height = getCoordinates();

    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 1.0;
}

int main(int argc, char **argv) {
    //The main function encapsulates and calls the other functions; returns 0
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}