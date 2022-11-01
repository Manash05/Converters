# Temperature converter using PYTHON

print("\t--TEMPERATURE CONVERTER--\n")

repeat = 1
while repeat == 1:          # Loop
    initial = int(input("Enter the unit of temperature you want to convert from the following:\n"
                        "1. Celsius.\n"
                        "2. Fahrenheit.\n"
                        "3. Kelvin.\n"
                        "4. Delisle.\n"
                        "5. Newton.\n"
                        "6. Rankine.\n"
                        "7. Réaumur.\n"
                        "8. Rømer.\n"
                        "Enter your choice: "))         # Taking user input of unit for the conversion

    final = int(input("\nEnter the unit of temperature into which you want to convert from the following:\n"
                      "1. Celsius.\n"
                      "2. Fahrenheit.\n"
                      "3. Kelvin.\n"
                      "4. Delisle.\n"
                      "5. Newton.\n"
                      "6. Rankine.\n"
                      "7. Réaumur.\n"
                      "8. Rømer.\n"
                      "Enter your choice: "))           # Taking user input of unit into which conversion will be done

    if initial == 1:
        celsius = float(input("\nEnter the temperature in CELSIUS: "))              # User input
        if final == 1:
            print(f"\n\t{celsius} celsius = {celsius} celsius")
        elif final == 2:
            fahrenheit = (celsius * 9 / 5) + 32         # Conversion formula
            print(f"\n\t{celsius} celsius = {fahrenheit} fahrenheit")               # Result print
        elif final == 3:
            kelvin = celsius + 273.15
            print(f"\n\t{celsius} celsius = {kelvin} kelvin")
        elif final == 4:
            delisle = (100 - celsius) * (3 / 2)
            print(f"\n\t{celsius} celsius = {delisle} delisle")
        elif final == 5:
            newton = celsius * 0.33000
            print(f"\n\t{celsius} celsius = {newton} newton")
        elif final == 6:
            rankine = (celsius * (9 / 5)) + 491.67
            print(f"\n\t{celsius} celsius = {rankine} rankine")
        elif final == 7:
            reaumur = celsius * 0.8
            print(f"\n\t{celsius} celsius = {reaumur} reaumur")
        elif final == 8:
            romer = celsius * 0.52500 + 7.50
            print(f"\n\t{celsius} celsius = {romer} romer")

    elif initial == 2:
        fahrenheit = float(input("\nEnter the temperature in FAHRENHEIT: "))        # User input
        if final == 1:
            celsius = (fahrenheit - 32) * (5 / 9)
            print(f"\n\t{fahrenheit} fahrenheit = {celsius} celsius")
        elif final == 2:
            print(f"\n\t{fahrenheit} fahrenheit = {fahrenheit} fahrenheit")
        elif final == 3:
            kelvin = (5 / 9) * (fahrenheit + 459.67)
            print(f"\n\t{fahrenheit} fahrenheit = {kelvin} kelvin")
        elif final == 4:
            delisle = (212 - fahrenheit) * (5 / 6)
            print(f"\n\t{fahrenheit} fahrenheit = {delisle} delisle")
        elif final == 5:
            newton = (fahrenheit - 32) * 0.18333
            print(f"\n\t{fahrenheit} fahrenheit = {newton} newton")
        elif final == 6:
            rankine = fahrenheit + 459.67
            print(f"\n\t{fahrenheit} fahrenheit = {rankine} rankine")
        elif final == 7:
            reaumur = (fahrenheit - 32) * (4 / 9)
            print(f"\n\t{fahrenheit} fahrenheit = {reaumur} reaumur")
        elif final == 8:
            romer = (fahrenheit - 32) * 0.29167 + 7.50
            print(f"\n\t{fahrenheit} fahrenheit = {romer} romer")

    elif initial == 3:
        kelvin = float(input("\nEnter the temperature in KELVIN: "))                # User input
        if final == 1:
            celsius = kelvin - 273.15
            print(f"\n\t{kelvin} kelvin = {celsius} celsius")
        elif final == 2:
            fahrenheit = (kelvin - 273.15) * (9 / 5) + 32
            print(f"\n\t{kelvin} kelvin = {fahrenheit} fahrenheit")
        elif final == 3:
            print(f"\n\t{kelvin} kelvin = {kelvin} kelvin")
        elif final == 4:
            delisle = (373.15 - kelvin) * (3 / 2)
            print(f"\n\t{kelvin} kelvin = {delisle} delisle")
        elif final == 5:
            newton = (kelvin - 273.15) * (33 / 100)
            print(f"\n\t{kelvin} kelvin = {newton} newton")
        elif final == 6:
            rankine = kelvin * 1.8
            print(f"\n\t{kelvin} kelvin = {rankine} rankine")
        elif final == 7:
            reaumur = (kelvin - 273.15) * (4 / 5)
            print(f"\n\t{kelvin} kelvin = {reaumur} reaumur")
        elif final == 8:
            romer = (kelvin - 273.15) * (21 / 40) + 7.5
            print(f"\n\t{kelvin} kelvin = {romer} romer")

    elif initial == 4:
        delisle = float(input("\nEnter the temperature in DELISLE: "))              # User input
        if final == 1:
            celsius = (delisle + 100) / 1.5
            print(f"\n\t{delisle} delisle = {celsius} celsius")
        elif final == 2:
            fahrenheit =  212 - (delisle * (6 / 5))
            print(f"\n\t{delisle} delisle = {fahrenheit} fahrenheit")
        elif final == 3:
            kelvin = 373.15 - (delisle * (2 / 3))
            print(f"\n\t{delisle} delisle = {kelvin} kelvin")
        elif final == 4:
            print(f"\n\t{delisle} delisle = {delisle} delisle")
        elif final == 5:
            newton = 33 - (delisle * (11 / 50))
            print(f"\n\t{delisle} delisle = {newton} newton")
        elif final == 6:
            rankine = 671.67 - (delisle * (6 / 5))
            print(f"\n\t{delisle} delisle = {rankine} rankine")
        elif final == 7:
            reaumur = 80 - (delisle * (8 / 15))
            print(f"\n\t{delisle} delisle = {reaumur} reaumur")
        elif final == 8:
            romer = 60 - (delisle * (7 / 20))
            print(f"\n\t{delisle} delisle = {romer} romer")

    elif initial == 5:
        newton = float(input("\nEnter the temperature in NEWTON: "))                # User input
        if final == 1:
            celsius = newton * (100 / 33)
            print(f"\n\t{newton} newton = {celsius} celsius")
        elif final == 2:
            fahrenheit = (newton * 5.4545) + 32.00
            print(f"\n\t{newton} newton = {fahrenheit} fahrenheit")
        elif final == 3:
            kelvin = (newton * (100 / 33)) + 273.15
            print(f"\n\t{newton} newton = {kelvin} kelvin")
        elif final == 4:
            delisle = (33 - newton) * (50 / 11)
            print(f"\n\t{newton} newton = {delisle} delisle")
        elif final == 5:
            print(f"\n\t{newton} newton = {newton} newton")
        elif final == 6:
            rankine = (newton * (60 / 11)) + 491.67
            print(f"\n\t{newton} newton = {rankine} rankine")
        elif final == 7:
            reaumur = newton * 2.4242
            print(f"\n\t{newton} newton = {reaumur} reaumur")
        elif final == 8:
            romer = (newton * (35 / 22)) + 7.5
            print(f"\n\t{newton} newton = {romer} romer")

    elif initial == 6:
        rankine = float(input("\nEnter the temperature in RANKINE: "))              # User input
        if final == 1:
            celsius = (rankine - 491.67) / 1.8
            print(f"\n\t{rankine} rankine = {celsius} celsius")
        elif final == 2:
            fahrenheit = rankine - 459.67
            print(f"\n\t{rankine} rankine = {fahrenheit} fahrenheit")
        elif final == 3:
            kelvin = rankine * (5 / 9)
            print(f"\n\t{rankine} rankine = {kelvin} kelvin")
        elif final == 4:
            delisle = (671.67 - rankine) * (5 / 6)
            print(f"\n\t{rankine} rankine = {delisle} delisle")
        elif final == 5:
            newton = (rankine - 491.67) * (11 / 60)
            print(f"\n\t{rankine} rankine = {newton} newton")
        elif final == 6:
            print(f"\n\t{rankine} rankine = {rankine} rankine")
        elif final == 7:
            reaumur = (rankine - 491.67) * 0.44444
            print(f"\n\t{rankine} rankine = {reaumur} reaumur")
        elif final == 8:
            romer = ((rankine - 491.67) * 0.29167) + 7.50
            print(f"\n\t{rankine} rankine = {romer} romer")

    elif initial == 7:
        reaumur = float(input("\nEnter the temperature in REAUMUR: "))              # User input
        if final == 1:
            celsius = reaumur * (5 / 4)
            print(f"\n\t{reaumur} reaumur = {celsius} celsius")
        elif final == 2:
            fahrenheit = (reaumur * 2.2500) + 32.00
            print(f"\n\t{reaumur} reaumur = {fahrenheit} fahrenheit")
        elif final == 3:
            kelvin = (reaumur * (5 / 4)) + 273.15
            print(f"\n\t{reaumur} reaumur = {kelvin} kelvin")
        elif final == 4:
            delisle = (80 - reaumur) * 1.875
            print(f"\n\t{reaumur} reaumur = {delisle} delisle")
        elif final == 5:
            newton = reaumur * 0.4125
            print(f"\n\t{reaumur} reaumur = {newton} newton")
        elif final == 6:
            rankine = (reaumur * 2.25) + 491.67
            print(f"\n\t{reaumur} reaumur = {rankine} rankine")
        elif final == 7:
            print(f"\n\t{reaumur} reaumur = {reaumur} reaumur")
        elif final == 8:
            romer = (reaumur * 0.65625) + 7.5
            print(f"\n\t{reaumur} reaumur = {romer} romer")

    elif initial == 8:
        romer = float(input("\nEnter the temperature in ROMER: "))                  # User input
        if final == 1:
            celsius = (romer - 7.5) * 1.90476190476
            print(f"\n\t{romer} romer = {celsius} celsius")
        elif final == 2:
            fahrenheit = ((romer - 7.5) * 3.42857142857) + 32
            print(f"\n\t{romer} romer = {fahrenheit} fahrenheit")
        elif final == 3:
            kelvin = ((romer - 7.5) * 1.90476190476) + 273.15
            print(f"\n\t{romer} romer = {kelvin} kelvin")
        elif final == 4:
            delisle = 60 - (romer * 0.35)
            print(f"\n\t{romer} romer = {delisle} delisle")
        elif final == 5:
            newton = (romer - 7.5) * 0.62857142857
            print(f"\n\t{romer} romer = {newton} newton")
        elif final == 6:
            rankine = ((romer - 7.5) * 3.42857142857) + 491.67
            print(f"\n\t{romer} romer = {rankine} rankine")
        elif final == 7:
            reaumur = (romer - 7.5) * 1.52380952381
            print(f"\n\t{romer} romer = {reaumur} reaumur")
        elif final == 8:
            print(f"\n\t{romer} romer = {romer} romer")

    repeat = int(input("\nEnter\n"
                       "'1' to continue\n"
                       "'2' to exit\n"))
    if repeat == 2:             # Loop breaks
        print("\n\t--THANK YOU--")
