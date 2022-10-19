// Temperature unit converter using C

#include <stdio.h>

int main()
{
    int choice, repeat;
    float celsius, fahrenheit;

    printf("\n\t--TEMPERATURE CONVERTER--\n");
    
    repeat = 1;       // Loop

    while (repeat == 1){

        printf("\nEnter '1' for the temperature conversion from CELSIUS to FAHRENHEIT.\n"
                "Enter '2' for the temperature conversion from FAHRENHEIT to CELSIUS.\n"
                "Enter your choice: ");
        scanf("%d", &choice);     
           
        if (choice == 1){

            // Input temperature in celsius 
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &celsius);

            // Celsius to fahrenheit conversion formula 
            fahrenheit = (celsius * 9 / 5) + 32;

            printf("\n%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
        }

        else if (choice == 2){

            // Input temperature in fahrenheit
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);

            // Fahrenheit to celsius conversion formula 
            celsius = (fahrenheit - 32) * 5 / 9;
            
            // Decimal precision - upto two decimal points
            printf("\n%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);       
        }

        else {
            printf("Wrong Input.\n");
        }

        printf("\nEnter '1' to continue.\n"
                "Enter '2' to exit.\n"
                "Enter your choice: ");
        scanf("%d", &repeat);
    }

    if (repeat == 2){
        printf("\n\t--THANK YOU--\n\n");
    }
    else {
        printf("Wrong Input.\n");
    }

    return 0;
}
