#include <iostream>
#include <limits>
#include <cmath>

// Function prototypes
void showMenu();
void handleChoice(int choice);
double getValidatedNumber();
void add();
void subtract();
void multiply();
void divide();
void calculateCube();
void calculateSphere();
void calculateCylinder();
void calculateRectangleArea();
void calculateCylinderSurfaceArea();

int main() {
    int choice;

    do {
        showMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear(); // clear input buffer to restore cin to a usable state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore last input
            choice = 0; // default choice for invalid input
        }

        handleChoice(choice);

    } while (choice != 10); // 10 to exit

    return 0;
}

void showMenu() {
    std::cout << "\n\tDigital Calculator\n";
    std::cout << "\nMENU\n\n";
    std::cout << "1. Add\n";
    std::cout << "2. Subtract\n";
    std::cout << "3. Multiply\n";
    std::cout << "4. Divide\n";
    std::cout << "5. Calculate Cube Volume\n";
    std::cout << "6. Calculate Sphere Volume\n";
    std::cout << "7. Calculate Cylinder Volume\n";
    std::cout << "8. Calculate Cylinder Surface Area\n";
    std::cout << "9. Calculate Rectangle Area\n";
    std::cout << "10.Exit\n\n";
}

void handleChoice(int choice) {
    switch (choice) {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            calculateCube();
            break;
        case 6:
            calculateSphere();
            break;
        case 7:
            calculateCylinder();
            break;
        case 8:
            calculateCylinderSurfaceArea();
            break;
        case 9:
            calculateRectangleArea();
            break;
        case 10:
            std::cout << "\nExiting...\n\n";
            break;
        default:
            std::cout << "\nInvalid choice. Please try again.\n\n";
            break;
    }
}

double getValidatedNumber() {
    double number;
    while (true) {
        std::cin >> number;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nInvalid input. Please enter a numerical value: ";
        } else {
            return number;
        }
    }
}

void add() {
    double num1, num2;
    std::cout << "\nEnter first number: ";
    num1 = getValidatedNumber();
    std::cout << "Enter second number: ";
    num2 = getValidatedNumber();
    std::cout << "\nResult: " << num1 + num2 << "\n\n";
}

void subtract() {
    double num1, num2;
    std::cout << "\nEnter first number: ";
    num1 = getValidatedNumber();
    std::cout << "Enter second number: ";
    num2 = getValidatedNumber();
    std::cout << "\nResult: " << num1 - num2 << "\n\n";
}

void multiply() {
    double num1, num2;
    std::cout << "\nEnter first number: ";
    num1 = getValidatedNumber();
    std::cout << "Enter second number: ";
    num2 = getValidatedNumber();
    std::cout << "\nResult: " << num1 * num2 << "\n\n";
}

void divide() {
    double num1, num2;
    std::cout << "\nEnter first number: ";
    num1 = getValidatedNumber();
    std::cout << "Enter second number: ";
    num2 = getValidatedNumber();
    if (num2 != 0) {
        std::cout << "\nResult: " << num1 / num2 << "\n\n";
    } else {
        std::cout << "\nError: Division by zero is not allowed.\n\n";
    }
}

void calculateCube() {
    double side;
    std::cout << "\nEnter the side length of the cube: ";
    side = getValidatedNumber();
    std::cout << "\nVolume of the cube: " << pow(side, 3) << "\n\n";
}

void calculateSphere() {
    double radius;
    std::cout << "\nEnter the radius of the sphere: ";
    radius = getValidatedNumber();
    std::cout << "\nVolume of the sphere: " << (4.0 / 3.0) * M_PI * pow(radius, 3) << "\n\n";
}

void calculateCylinder() {
    double radius, height;
    std::cout << "\nEnter the radius of the cylinder: ";
    radius = getValidatedNumber();
    std::cout << "Enter the height of the cylinder: ";
    height = getValidatedNumber();
    std::cout << "\nVolume of the cylinder: " << M_PI * pow(radius, 2) * height << "\n\n";
}

void calculateRectangleArea() {
    double length, width;
    std::cout << "\nEnter the length of the rectangle: ";
    length = getValidatedNumber();
    std::cout << "Enter the width of the rectangle: ";
    width = getValidatedNumber();
    std::cout << "\nArea of the rectangle: " << length * width << "\n\n";
}

void calculateCylinderSurfaceArea() {
    double radius, height;
    std::cout << "\nEnter the radius of the cylinder: ";
    radius = getValidatedNumber();
    std::cout << "Enter the height of the cylinder: ";
    height = getValidatedNumber();
    
    // Calculate surface area of cylinder
    double surfaceArea = 2 * M_PI * radius * (radius + height);
    std::cout << "\nSurface Area of the cylinder: " << surfaceArea << "\n\n";
}
