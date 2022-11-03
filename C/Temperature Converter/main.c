// Temperature converter using C

#include <stdio.h>

int main()
{
    int initial, final, repeat;
    float celsius, fahrenheit, kelvin, delisle, newton, rankine, reaumur, romer;

    printf("\n\t--TEMPERATURE CONVERTER--\n");
    
    repeat = 1;     
    // Loop
    while (repeat == 1){       

        printf("\nEnter the unit of temperature you want to convert from the following:\n"
                        "1. Celsius.\n"
                        "2. Fahrenheit.\n"
                        "3. Kelvin.\n"
                        "4. Delisle.\n"
                        "5. Newton.\n"
                        "6. Rankine.\n"
                        "7. Réaumur.\n"
                        "8. Rømer.\n"
                        "Enter your choice: ");
        scanf("%d", &initial);

        printf("\nEnter the unit of temperature into which you want to convert from the following:\n"
                      "1. Celsius.\n"
                      "2. Fahrenheit.\n"
                      "3. Kelvin.\n"
                      "4. Delisle.\n"
                      "5. Newton.\n"
                      "6. Rankine.\n"
                      "7. Réaumur.\n"
                      "8. Rømer.\n"
                      "Enter your choice: ");
        scanf("%d", &final);

        if (initial == 1){
            printf("\nEnter the temperature in CELSIUS: ");
            scanf("%f", &celsius);                     // User input
            
            if (final == 1){
                printf("\n\t%f celsius = %f celsius\n", celsius, celsius);
            }
            else if (final == 2){
                fahrenheit = (celsius * 1.8) + 32;     // Conversion formula 
                printf("\n\t%f celsius = %f fahrenheit\n", celsius, fahrenheit);
            }
            else if (final == 3){
                kelvin = celsius + 273.15; 
                printf("\n\t%f celsius = %f kelvin\n", celsius, kelvin);
            }
            else if (final == 4){
                delisle = (100 - celsius) * 1.5; 
                printf("\n\t%f celsius = %f delisle\n", celsius, delisle);
            }
            else if (final == 5){
                newton = celsius * 0.33;
                printf("\n\t%f celsius = %f newton\n", celsius, newton);
            }
            else if ( final == 6){
                rankine = (celsius * 1.8) + 491.67; 
                printf("\n\t%f celsius = %f rankine\n", celsius, rankine);
            }
            else if (final == 7){
                reaumur = celsius * 0.8;
                printf("\n\t%f celsius = %f reaumur\n", celsius, reaumur);
            }
            else if (final == 8){
                romer = (celsius * 0.525) + 7.5; 
                printf("\n\t%f celsius = %f romer\n", celsius, romer);
            }
        
        else if (initial == 2){
            printf("\nEnter the temperature in FAHRENHEIT: ");
            scanf("%f", &fahrenheit);
            
            if (final == 1){
                celsius = (fahrenheit - 32) * 0.55555555555;
                printf("\n\t%f fahrenheit = %f celsius\n", fahrenheit, celsius);
            }
            else if (final == 2){
                printf("\n\t%f fahrenheit = %f fahrenheit\n", fahrenheit, fahrenheit);
            }
            else if (final == 3){
                kelvin = ((fahrenheit - 32) * 0.55555555555) + 273.15;
                printf("\n\t%f fahrenheit = %f kelvin\n", fahrenheit, kelvin);
            }
            else if (final == 4){
                delisle = (212 - fahrenheit) * 0.83333333333;
                printf("\n\t%f fahrenheit = %f delisle\n", fahrenheit, delisle);
            }
            else if (final == 5){
                newton = (fahrenheit - 32) * 0.18333333333;
                printf("\n\t%f fahrenheit = %f newton\n", fahrenheit, newton);
            }
            else if (final == 6){
                rankine = fahrenheit + 459.67;
                printf("\n\t%f fahrenheit = %f rankine\n", fahrenheit, rankine);
            }
            else if (final == 7){
                reaumur = (fahrenheit - 32) * 0.44444444444;
                printf("\n\t%f fahrenheit = %f reaumur\n", fahrenheit, reaumur);
            }
            else if (final == 8){
                romer = ((fahrenheit - 32) * 0.29166666666) + 7.5; 
                printf("\n\t%f fahrenheit = %f romer\n", fahrenheit, romer);
            }

        else if (initial == 3){
            printf("\nEnter the temperature in KELVIN: ");
            scanf("%f", &kelvin);

            if (final == 1){
                celsius = kelvin - 273.15;
                printf("\n\t%f kelvin = %f celsius\n", kelvin, celsius);
            }
            else if (final == 2){
                fahrenheit = ((kelvin - 273.15) * 1.8) + 32;
                printf("\n\t%f kelvin = %f fahrenheit\n", kelvin, fahrenheit);
            }
            else if (final == 3){
                printf("\n\t%f kelvin = %f kelvin\n", kelvin, kelvin);
            }
            else if (final == 4){
                delisle = (373.15 - kelvin) * 1.5;
                printf("\n\t%f kelvin = %f delisle\n", kelvin, delisle);                
            }
            else if (final == 5){
                newton = (kelvin - 273.15) * 0.33;
                printf("\n\t%f kelvin = %f newton\n", kelvin, newton);
            }
            else if (final == 6){
                rankine = kelvin * 1.8;
                printf("\n\t%f kelvin = %f rankine\n", kelvin, rankine);
            }
            else if (final == 7){
                reaumur = (kelvin - 273.15) * 0.8;
                printf("\n\t%f kelvin = %f reaumur\n", kelvin, reaumur);
            }
            else if (final == 8){
                romer = ((kelvin - 273.15) * 0.525) + 7.5;
                printf("\n\t%f kelvin = %f romer\n", kelvin, romer);
            }
        

        else if (initial == 4){
            printf("\nEnter the temperature in DELISLE: ");
            scanf("%f", &delisle);
            
            if (final == 1){
                celsius = 100 - (delisle * 0.66666666666);
                printf("\n\t%f delisle = %f celsius\n", delisle, celsius);
            }
            else if (final == 2){
                fahrenheit = 212 - (delisle * 1.2);
                printf("\n\t%f delisle = %f fahrenheit\n", delisle, fahrenheit);
            }
            else if (final == 3){
                kelvin = (373.15 - delisle) * 1.5;
                printf("\n\t%f delisle = %f kelvin\n", delisle, kelvin);
            }
            else if (final == 4){
                printf("\n\t%f delisle = %f delisle\n", delisle, delisle);
            }
            else if (final == 5){
                newton = 33 - (delisle * 0.22);
                printf("\n\t%f delisle = %f newton\n", delisle, newton);
            }
            else if (final == 6){
                rankine = 671.67 - (delisle * 1.2);
                printf("\n\t%f delisle = %f rankine\n", delisle, rankine);
            }
            else if (final == 7){
                reaumur = 80 - (delisle * 0.53333333333);
                printf("\n\t%f delisle = %f reaumur\n", delisle, reaumur);
            }
            else if (final == 8){
                romer = 60 - (delisle * 0.35);
                printf("\n\t%f delisle = %f romer\n", delisle, romer);
            }

        else if (initial == 5){
            printf("\nEnter the temperature in NEWTON: ");
            scanf("%f", &newton);

            if (final == 1){
                celsius = newton * 3.0303030303;
                printf("\n\t%f newton = %f celsius\n", newton, celsius);
            }
            else if (final == 2){
                fahrenheit = (newton * 5.45454545455) + 32;
                printf("\n\t%f newton = % fahrenheit\n", newton, fahrenheit); 
            }
            else if (final == 3){
                kelvin = (newton * 3.0303030303) + 273.15;
                printf("\n\t%f newton = %f kelvin\n", newton, kelvin);
            }
            else if (final == 4){
                delisle = (33 - newton) * 4.54545454545;
                printf("\n\t%f newton = %f delisle\n", newton, delisle);
            }
            else if (final == 5){
                printf("\n\t%f newton = %f newton\n", newton, newton);
            }
            else if (final == 6){
                rankine = (newton * 5.45454545455) + 491.67;
                printf("\n\t%f newton = %f rankine\n", newton, rankine);
            }
            else if (final == 7){
                reaumur = newton * 2.42424242424;
                printf("\n\t%f newton = %f reaumur\n", newton, reaumur);
            }
            else if (final == 8){
                romer = (newton * 1.59090909091) + 7.5;
                printf("\n\t%f newton = %f romer\n", newton, romer);
            }

        else if (initial == 6){
            printf("\nEnter the temperature in RANKINE: ");
            scanf("%f", &rankine);

            if (final == 1){
                celsius = (rankine - 491.67) * 0.55555555555;
                printf("\n\t%f rankine = %f celsius\n", rankine, celsius);
            }
            else if (final == 2){
                fahrenheit = rankine - 459.67;
                printf("\n\t%f rankine = %f fahrenheit\n", rankine, fahrenheit);
            }
            else if (final == 3){
                kelvin = rankine * 0.55555555555;
                printf("\n\t%f rankine = %f kelvin\n", rankine, kelvin);
            }
            else if (final == 4){
                delisle = (671.67 - rankine) * 0.83333333333;
                printf("\n\t%f rankine = %f delisle\n", rankine, delisle);
            }
            else if (final == 5){
                newton = (rankine - 491.67) * 0.18333333333;
                printf("\n\t%f rankine = %f newton\n", rankine, newton);
            }
            else if (final == 6){
                printf("\n\t%f rankine = %f rankine\n", rankine, rankine);
            }
            else if (final == 7){
                reaumur = (rankine - 491.67) * 0.44444444444;
                printf("\n\t%f rankine = %f reaumur\n", rankine, reaumur);
            }
            else if (final == 8){
                romer = ((rankine - 491.67) * 0.29166666666) + 7.5;
                printf("\n\t%f rankine = %f romer\n", rankine, romer);
            }

        else if (initial == 7){
            printf("\nEnter the temperature in REAUMUR: ");
            scanf("%f", &reaumur);

            if (final == 1){
                celsius = reaumur * 1.25;
                printf("\n\t%f reaumur = %f celsius\n", reaumur, celsius);
            }
            else if (final == 2){
                fahrenheit = (reaumur * 2.25) + 32;
                printf("\n\t%f reaumur = %f fahrenheit\n", reaumur, fahrenheit); 
            }
            else if (final == 3){
                kelvin = (reaumur * 1.25) + 273.15;
                printf("\n\t%f reaumur = %f kelvin\n", reaumur, kelvin);
            }
            else if (final == 4){
                delisle = (80 - reaumur) * 1.875;
                printf("\n\t%f reaumur = %f delisle\n", reaumur, delisle);
            }
            else if (final == 5){
                newton = reaumur * 0.4125;
                printf("\n\t%f reaumur = %f newton\n", reaumur, newton);
            }
            else if (final == 6){
                rankine = (reaumur * 2.25) + 491.67;
                printf("\n\t%f reaumur = %f rankine\n", reaumur, rankine);
            }
            else if (final == 7){
                printf("\n\t%f reaumur = %f reaumur\n", reaumur, reaumur);
            }
            else if (final == 8){
                romer = (reaumur * 0.65625) + 7.5;
                printf("\n\t%f reaumur = %f romer\n", reaumur, romer);
            }

        else if (initial == 8){
            printf("\nEnter the temperature in ROMER: ");
            scanf("%f", &romer);

            if (final == 1){
                celsius = (romer - 7.5) * 1.90476190476;
                printf("\n\t%f romer = %f celsius\n", romer, celsius);
            }
            else if (final == 2){
                fahrenheit = ((romer - 7.5) * 3.42857142857) + 32;
                printf("\n\t%f romer = %f fahrenheit\n", romer, fahrenheit);                
            }
            else if (final == 3){
                kelvin = ((romer - 7.5) * 1.90476190476) + 273.15;
                printf("\n\t%f romer = %f kelvin\n", romer, kelvin);
            }
            else if (final == 4){
                delisle = 60 - (romer * 0.35);
                printf("\n\t%f romer = %f delisle\n", romer, delisle);
            }
            else if (final == 5){
                newton = (romer - 7.5) * 0.62857142857;
                printf("\n\t%f romer = %f newton\n", romer, newton);
            }
            else if (final == 6){
                rankine = ((romer - 7.5) * 3.42857142857) + 491.67;
                printf("\n\t%f romer = %f rankine\n", romer, rankine);
            }
            else if (final == 7){
                reaumur = (romer - 7.5) * 1.52380952381;
                printf("\n\t%f romer = %f reaumur\n", romer, reaumur);
            }
            else if (final == 8){
                printf("\n\t%f romer = %f romer\n", romer, romer);
            }
            
        }
        }
        }
        }
        }
        }
        }
        }

        printf("\nEnter\n"
        "'1' to continue\n"
        "'2' to exit:\n");
        scanf("%d", &repeat);          // Loop ends

        if (repeat == 2){
            printf("\n\t--THANK YOU--\n");
        }

    }
    return 0;
}
