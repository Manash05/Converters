
print("\t--TEMPERATURE CONVERTER--")

repeat = 1
while (repeat == 1):
    choice = int(input("\nEnter '1' for the temperature conversion from CELSIUS to FAHRENHEIT\n"
                        "Enter '2' for the temperature conversion from FAHRENHEIT to CELSIUS\n"
                        "Enter you choice: "))
    
    if (choice == 1):
        celsius= float(input("Enter the temperature in Celsius: "))
        fahrenheit = (celsius * 9 / 5) + 32
        print(celsius, "Celsius =", fahrenheit, "Fahrenheit")
        
    elif (choice == 2):
        fahrenheit= float(input("Enter the temperature in Fahrenheit: "))
        celsius = (fahrenheit - 32) * 5 / 9
        print(fahrenheit, "Fahrenheit =", celsius, "Celsius")
        
    else:
        print ("Wrong Input.")
        
    repeat = int(input("\nEnter '1' to continue.\n"
                         "Enter '2' to exit.\n"
                         "Enter your choice: "))
   
if (repeat == 2):
    print("\n\t--Thank You--\n")
    
else:
    print ("Wrong Input.")
