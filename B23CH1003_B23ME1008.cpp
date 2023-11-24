#include <stdio.h>
#include <math.h>

struct Circle {
    float radius;
};

struct Square {
    float side;
};

struct Rectangle {
    float length;
    float width;
};

struct Triangle {
    float base;
    float height;
};

struct Parallelogram {
    float base;
    float height;
};

struct Cuboid {
    float length;
    float base;
    float height;
};

struct Cube {
    float length;
    float height;
    float base;
};

int main() {
    int choice;

    do {
        printf("\n#Geometry Area Calculator#\n");
        printf("1. Square\n");
        printf("2. Circle\n");
        printf("3. Rectangle\n");
        printf("4. Triangle\n");
        printf("5. Parallelogram\n");
        printf("6. Cuboid\n");
        printf("7. cube\n");
        printf("8. Exit\n");
        printf("Your wish to enter any choice: ");
        scanf("%d", &choice);
        

        switch (choice) {
            case 1: // for Square
                {
                    struct Square square;
                    printf("Enter the side length of the square: ");
                    scanf("%f", &square.side);
                    printf("Area of the square: %.2f\n", square.side * square.side);
                    break;
                }
                
            case 2: // for Circle
                {
                    struct Circle circle;
                    printf("Enter the radius of the circle: ");
                    scanf("%f", &circle.radius);
                    printf("Area of the circle: %.2f\n", 3.14 * circle.radius * circle.radius);
                    break;
                }
                

            

            case 3: //for  Rectangle
                {
                    struct Rectangle rectangle;
                    printf("Enter the length of the rectangle: ");
                    scanf("%f", &rectangle.length);
                    printf("Enter the width of the rectangle: ");
                    scanf("%f", &rectangle.width);
                    printf("Area of the rectangle: %.2f\n", rectangle.length * rectangle.width);
                    break;
                }

            case 4: // for Triangle
                {
                    struct Triangle triangle;
                    printf("Enter the base length of the triangle: ");
                    scanf("%f", &triangle.base);
                    printf("Enter the height of the triangle: ");
                    scanf("%f", &triangle.height);
                    printf("Area of the triangle: %.2f\n", 0.5 * triangle.base * triangle.height);
                    break;
                }

            case 5: // for  Parallelogram
                {
                    struct Parallelogram parallelogram;
                    printf("Enter the base length of the parallelogram: ");
                    scanf("%f", &parallelogram.base);
                    printf("Enter the height of the parallelogram: ");
                    scanf("%f", &parallelogram.height);
                    printf("Area of the parallelogram: %.2f\n", parallelogram.base * parallelogram.height);
                    break;
                }

            case 6: // for Cuboid
                {
                    struct Cuboid cuboid;
                    printf("Enter the length of the cuboid: ");
                    scanf("%f", &cuboid.length);
                    printf("Enter the base of the cuboid: ");
                    scanf("%f", &cuboid.base);
                    printf("Enter the height of the cuboid: ");
                    scanf("%f", &cuboid.height);
                    float aCuboid;
                    aCuboid = ((cuboid.length*cuboid.base)+(cuboid.base*cuboid.height)+(cuboid.height*cuboid.length));
                    printf("Area of the cuboid: %.2f\n", 2*aCuboid);
                    break;
                }

            case 7: // for Cube
                {
                    struct Cube cube;
                    printf("Enter the length of the of the cube: ");
                    scanf("%f", &cube.length);
                    
                    printf("Area of the cube: %.2f\n", 6 * cube.length * cube.length);
                    break;
                }

            case 8: // Exit
                printf("Thank you, program is terminated!\n");
                break;

            default:
                printf("Invalid choice!. Please enter a valid choice.\n");
        }
    } while (choice != 8);

    return 0;
}