This program provides a simple unit conversion system that allows users to convert between different units of measurement. The user is presented with a menu of options and can choose to convert between Celsius and Fahrenheit, Centimeters and Inches, Kilograms and Pounds, or Meters and Feet. The program continues running until the user chooses to quit by entering 'Q' or 'q'.

**Features**

- Converts between Celsius and Fahrenheit.

- Converts between Centimeters and Inches.

- Converts between Kilograms and Pounds.

- Converts between Meters and Feet.

- Loops back to the main menu after completing a conversion.

- Quits when the user inputs 'Q' or 'q'.

**Compilation and Execution**

**Compilation:**

To compile the program, use the following command:

gcc -o converter converter.c

Execution:

Run the compiled program using:

./converter

How to Use

The program starts by displaying a menu with options:

Press '1' for temperature conversion (Celsius to Fahrenheit and vice versa).

Press '2' for length conversion (Centimeters to Inches and vice versa).

Press '3' for weight conversion (Kilograms to Pounds and vice versa).

Press '4' for distance conversion (Meters to Feet and vice versa).

Press 'q' or 'Q' to quit the program.

After selecting an option, the user will be prompted to enter a character indicating the conversion direction (e.g., 'C' for Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius).

The user then enters a float number for conversion.

The result of the conversion is displayed.

The program returns to the main menu after each conversion, allowing the user to select another conversion type.

The program exits when 'Q' or 'q' is entered.

