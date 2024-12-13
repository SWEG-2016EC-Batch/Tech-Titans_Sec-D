## Pattern Generator

### Pseudocode

1. Program Start and Initialization:
 DISPLAY "--- Patterns Show ---"
 continueChoice = 'y' // Initialize to 'y' to enter the loop at least once.



2. Main Loop (Do-While Loop):

```
DO WHILE continueChoice is 'y' or 'Y'

```

3. Display Menu:

```
 DISPLAY "Menu:"
 DISPLAY "1. 5x5 Grid of Numbers"
 DISPLAY "2. 4x6 Grid of Alphabets (A-X)"
 DISPLAY "3. Left Half Pyramid of Numbers"
 DISPLAY "4. Right Half Pyramid of Numbers"
 DISPLAY "5. Half Pyramid of Uppercase Letters"
 DISPLAY "6. 5x5 Grid of Lowercase Letters (a-e)"
 DISPLAY "7. Hollow Rectangle"
 DISPLAY "8. Inverted Half Pyramid"
 DISPLAY "9. Hollow Inverted Half Pyramid"
 DISPLAY "10. Full Pyramid"
 DISPLAY "11. Inverted Full Pyramid"
 DISPLAY "12. Hollow Full Pyramid"
 DISPLAY "Enter your choice (1-12):"
 INPUT patternChoice

```

4. Input Validation:

```
 IF patternChoice is NOT within the range 1 to 12 THEN
  DISPLAY "Invalid choice. Please enter a number between 1 and 12."
 ELSE

```

5. Get Number of Rows:

```
  DISPLAY "Enter the number of rows:"
  INPUT numRows

```

6. Pattern Generation (Switch-Case):

```
  SWITCH patternChoice DO
   CASE 1: GENERATE_5x5_NUMBER_GRID(numRows)
   CASE 2: GENERATE_4x6_ALPHABET_GRID(numRows)
   CASE 3: GENERATE_LEFT_HALF_PYRAMID(numRows)
   CASE 4: GENERATE_RIGHT_HALF_PYRAMID(numRows)
   CASE 5: GENERATE_HALF_PYRAMID_LETTERS(numRows)
   CASE 6: GENERATE_5x5_LOWERCASE_GRID(numRows)
   CASE 7: GENERATE_HOLLOW_RECTANGLE(numRows)
   CASE 8: GENERATE_INVERTED_HALF_PYRAMID(numRows)
   CASE 9: GENERATE_HOLLOW_INVERTED_HALF_PYRAMID(numRows)
   CASE 10: GENERATE_FULL_PYRAMID(numRows)
   CASE 11: GENERATE_INVERTED_FULL_PYRAMID(numRows)
   CASE 12: GENERATE_HOLLOW_FULL_PYRAMID(numRows)
  ENDSWITCH

```

7. Ask to Continue:

```
 ENDIF //End of IF for patternChoice validation

 DISPLAY "Do you want to see other patterns? (y/n):"
 INPUT continueChoice

```

8. End of Loop:

```
ENDDO //End of DO WHILE loop

```

9. Closing Message:
DISPLAY "Thank you for exploring the patterns. Have a great day!"

10. END //Program ends
```

