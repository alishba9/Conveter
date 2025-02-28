#include <stdio.h>

char usr_char; // The first user input step (1) in the assignment
float usr_float, usr_output; // User float input and conversion output

void case1() {
    while (1) {
        printf("\nC for conversion from Celsius to Fahrenheit.\nF for conversion from Fahrenheit to Celsius\nQ to return to menu\n:");
        scanf(" %c", &usr_char);
        if (usr_char == 'Q' || usr_char == 'q') return;
        
        switch (usr_char) {
            case 'C':
                printf("\nEnter a float number: ");
                scanf("%f", &usr_float);
                usr_output = (usr_float * (9.0/0.5)) + 32;
                printf("\n%f degrees Celsius is %f Fahrenheit.\n", usr_float, usr_output);
                break;
            case 'F':
                printf("\nEnter a float number: ");
                scanf("%f", &usr_float);
                usr_output = ((usr_float - 32) * (0.5/0.9));
                printf("\n%f Fahrenheit is %f degrees Celsius.\n", usr_float, usr_output);
                break;
            default:
                printf("\nInvalid input, try again.\n");
        }
    }
}

void case2() {
    while (1) {
        printf("\nC for conversion from Centimeter to Inch.\nI for conversion from Inch to Centimeter\nQ to return to menu\n:");
        scanf(" %c", &usr_char);
        if (usr_char == 'Q' || usr_char == 'q') return;
        
        switch (usr_char) {
            case 'C':
                printf("\nEnter a float number: ");
                scanf("%f", &usr_float);
                usr_output = usr_float * (1.0/2.54);
                printf("\n%f centimeters is %f inches.\n", usr_float, usr_output);
                break;
            case 'I':
                printf("\nEnter a float number: ");
                scanf("%f", &usr_float);
                usr_output = usr_float * 2.54;
                printf("\n%f inches is %f centimeters.\n", usr_float, usr_output);
                break;
            default:
                printf("\nInvalid input, try again.\n");
        }
    }
}

void case3() {
    while (1) {
        printf("\nK for conversion from Kilogram to Pound.\nP for conversion from Pound to Kilogram\nQ to return to menu\n:");
        scanf(" %c", &usr_char);
        if (usr_char == 'Q' || usr_char == 'q') return;
        
        switch (usr_char) {
            case 'K':
                printf("\nEnter a float number: ");
                scanf("%f", &usr_float);
                usr_output = usr_float * 2.2046226218;
                printf("\n%f kilograms is %f pounds.\n", usr_float, usr_output);
                break;
            case 'P':
                printf("\nEnter a float number: ");
                scanf("%f", &usr_float);
                usr_output = usr_float * (1.0/2.2046226218);
                printf("\n%f pounds is %f kilograms.\n", usr_float, usr_output);
                break;
            default:
                printf("\nInvalid input, try again.\n");
        }
    }
}

void case4() {
    while (1) {
        printf("\nM for conversion from Meter to Feet.\nF for conversion from Feet to Meter\nQ to return to menu\n:");
        scanf(" %c", &usr_char);
        if (usr_char == 'Q' || usr_char == 'q') return;
        
        switch (usr_char) {
            case 'M':
                printf("\nEnter a float number: ");
                scanf("%f", &usr_float);
                usr_output = usr_float * 3.280839895;
                printf("\n%f meters is %f feet.\n", usr_float, usr_output);
                break;
            case 'F':
                printf("\nEnter a float number: ");
                scanf("%f", &usr_float);
                usr_output = usr_float * (1.0 / 3.280839895);
                printf("\n%f feet is %f meters.\n", usr_float, usr_output);
                break;
            default:
                printf("\nInvalid input, try again.\n");
        }
    }
}

int main() {
    char usr;
    
    while (1) {
        printf("\n1 for conversion between Celsius and Fahrenheit.\n");
        printf("2 for conversion between Centimeter and Inch.\n");
        printf("3 for conversion between Kilogram and Pound.\n");
        printf("4 for conversion between Meter and Feet.\n");
        printf("Q to quit.\n:");
        
        scanf(" %c", &usr);
        
        switch (usr) {
            case '1':
                case1();
                break;
            case '2':
                case2();
                break;
            case '3':
                case3();
                break;
            case '4':
                case4();
                break;
            case 'q':
            case 'Q':
                return 0;
            default:
                printf("\nInvalid choice, try again.\n");
        }
    }
}

