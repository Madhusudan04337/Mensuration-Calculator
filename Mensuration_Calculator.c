#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define PI 3.14159265358979323846


//Function declarations for circle
float area_circle(float r);
float circumference_circle(float r);

//Function declarations for rectangle
float area_rectangle(float length,float width);
float perimeter_rectangle(float length,float width);

//Function declarations for triangle
float area_triangle(float a,float b,float c);
float perimeter_triangle(float a,float b,float c);
bool is_valid_triangle(float a,float b,float c);

//Utility function for input validation
bool validate_positive(float value);
void clear_input_buffer();

int main(){
    int choice;
    float a, b, c;

    printf("\n===== MENSURATION CALCULATOR =====\n");

    do{
        printf("\nSelect a shape:\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("4. Exit\n");
        printf("\nEnter your choice (1-4): ");

        if(scanf("%d",&choice) !=1 ){
            printf("Invalid  input! Please enter a number.\n");
            clear_input_buffer();
            continue;
        }

        switch (choice){
        case 1: /* Circle */
            printf("\n------ CIRCLE ------\n");
            printf("Enter radius: ");
            if (scanf("%f",&a) != 1 || !validate_positive(a)){
                printf("Error: Radius must be a positive number!\n");
                clear_input_buffer();
                break;
            }

            printf("\nResults for Circle (radius = %.2f):\n",a);
            printf("Area: %.2f square units\n",area_circle(a));
            printf("Circumference: %.2f units\n",circumference_circle(a));
            for(int i = 0; i < 10; i++) printf("\n");
            break;
        
        case 2: /* Rectangle */
            printf("\n------ RECTANGLE ------\n");
            printf("Enter length: ");
            if (scanf("%f",&a) != 1 || !validate_positive(a)){
                printf("Error: length must be a positive number!\n");
                clear_input_buffer();
                break;
            }

            printf("Enter width: ");
            if (scanf("%f",&b) != 1 || !validate_positive(b)){
                printf("Error: width must be a positive number!\n");
                clear_input_buffer();
                break;
            }

            printf("\nResults for Rectangle (length = %.2f, width = %.2f):\n", a,b);
            printf("Area: %.2f square units\n", area_rectangle(a,b));
            printf("Perimeter: %.2f units\n",perimeter_rectangle(a,b));
            for(int i = 0; i < 10; i++) printf("\n");
            break;

        case 3: /* Triangle */
            printf("\n------ RECTANGLE ------\n");
            printf("Enter side a: ");
            if (scanf("%f",&a) != 1 || !validate_positive(a)){
                printf("Error: Side length must be a positive number!\n");
                clear_input_buffer();
                break;
            }

            printf("Enter side b: ");
            if (scanf("%f",&b) != 1 || !validate_positive(b)){
                printf("Error: Side length must be a positive number!\n");
                clear_input_buffer();
                break;
            }

            printf("Enter side c: ");
            if (scanf("%f",&c) != 1 || !validate_positive(c)){
                printf("Error: Side length must be a positive number!\n");
                clear_input_buffer();
                break;
            }

            if (!is_valid_triangle(a, b, c)){
                printf("Error: These sides cannot form a vaild triangle\n");
                printf("( The sum of any two sides must be greater than the third side )\n");
                break;
            }

            printf("\nResults for Triangle (sides = %.2f, %.2f, %.2f):\n", a, b, c);
            printf("Area: %.2f square units\n", area_triangle(a, b, c));
            printf("Perimeter: %.2f units\n",perimeter_triangle(a, b, c));
            for(int i = 0; i < 10; i++) printf("\n");
            break;

        case 4: //Exit
                printf("\nThank you for using the Mensuration Calculator!\n");
                break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
            clear_input_buffer();
        }
    } while (choice != 4);

    return 0;
}

//Function definations for circle
float area_circle(float r){
    return PI *r *r;
}

float circumference_circle(float r){
    return 2 *PI *r;
}

//Function definations for rectangle
float area_rectangle(float length,float width){
    return length * width;
}

float perimeter_rectangle(float length,float width){
    return 2 *(length + width);
}

//Function definations for triangle
float area_triangle(float a, float b, float c){
    // Using Heron's formula
    float s = (a + b + c) / 2; // semi - perimeter
    return  sqrt(s * (s-a) * (s-b) * (s-c));
}

float perimeter_triangle(float a, float b, float c){
    return a + b + c;
}

bool is_valid_triangle(float a, float b, float c){
    //validate : sum of any two sides must be greater than the third side
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Utility function implementations
bool validate_positive(float value){
    return value > 0;
}

void clear_input_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}