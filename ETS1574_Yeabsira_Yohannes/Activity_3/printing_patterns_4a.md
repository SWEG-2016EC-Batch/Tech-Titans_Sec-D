# Problem Analysis
-create a program that displays a menu for the user to select one of three patterns or exit the program. Based on the user's choice, the program will print one of the following patterns

## Inputs
- The user will input an integer value corresponding to the menu choice (1, 2, 3, or 4)

## operation
- **Pattern 1:** 
  - A grid of fixed numbers from 1 to 5. This pattern prints 1 2 3 4 5 in each of the 5 rows.
- **Pattern 2:** 
  - A sequence of alphabet characters starting from 'A'. This pattern prints 6 characters per row for 4 rows. The characters continue from 'A' to 'Z' and beyond if necessary.
- **Pattern 3:** 
  - A sequence of increasing numbers. This pattern prints numbers in increasing order with each row. The first row prints 1, the second row prints 1 2, the third row prints 1 2 3, and so on
## Outputs
- The program will print the selected pattern or print an "Invalid choice" message if the input is not one of the options (1-4).

# Pseudo Code

- Read the User Input: The program reads the user's choice and performs the corresponding action:
   - Print the first pattern (grid of numbers).
   - Print the second pattern (sequence of characters).
   - Print the third pattern (increasing sequence of numbers).
   - Exit the program if the user chooses option 4.

## Pattern 1: Numbers from 1 to 5 in 5 rows
- a fixed grid of numbers 1 2 3 4 5 is printed, repeated for 5 rows.

## Pattern 2: Letters A to F in 4 rows
- alphabet characters from A to Z are printed in a sequence, with 6 characters per row for 4 rows

## Pattern 3: Numbers in an incremental triangle
- numbers are printed incrementally, where the first row contains 1, the second contains 1 2, the third contains 1 2 3, etc.


## End program
-Exit the Program
