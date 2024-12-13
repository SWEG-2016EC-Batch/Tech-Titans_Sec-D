## Playing with numbers
---
This file provides the pseudocode for the program of number gaming that allows users to perform various mathematical operations on an input number.

---
### Pseudocode
--- 
1. **Start**
2. **Declare Variables**:
    - `num` (integer)
    - `choice` (integer)
    - `retry` (character)

3. **Print Title**: 
    - "---Welcome to Gaming with numbers---"

4. **Loop (Do While `retry` is 'y' or 'Y')**:
    - Prompt User: "Enter an integer to play with: "
    - Read `num`
    - If `num` is not an integer:
        - Print "Invalid Input, please insert only positive integer number."
    - Else:
        - Print Menu:
            - "Enter 1 to Print the reverse of the number."
            - "Enter 2 to Count the number of digits in the number."
            - "Enter 3 to Find the product of even digits in the number."
            - "Enter 4 to Print the first and last digit and their sum."
            - "Enter 5 to Swap the first and last digit of the number."
            - "Enter 6 to Check if the number is a palindrome."
            - "Enter 7 to Find the frequency of each digit in the number."
            - "Enter 8 to Check if the number is a Strong number."
            - "Enter 9 to Check if the number is a Perfect number."
        - Prompt User: "Enter your choice: "
        - Read `choice`
        - If `choice` is not valid (not in range 1-9):
            - Print "Please insert the correct choice number from the menu."
        - Else:
            - Switch Case on `choice`:
                - **Case 1**: Reverse the number
                    - Initialize `reverse` to 0
                    - Initialize `original` to `num`
                    - While `original` is not 0:
                        - Set `digit` to `original` % 10
                        - Set `reverse` to `reverse` * 10 + `digit`
                        - Set `original` to `original` / 10
                    - Print "The reversed integer is: ", `reverse`
                - **Case 2**: Count the number of digits
                    - Initialize `original` to `num`
                    - Initialize `count` to 0
                    - If `original` is 0:
                        - Set `count` to 1
                    - Else:
                        - While `original` is not 0:
                            - Set `original` to `original` / 10
                            - Increment `count`
                    - Print "Number of digits in your integer: ", `count`
                - **Case 3**: Find the product of even digits
                    - Initialize `product` to 1
                    - Initialize `original` to `num`
                    - While `original` is not 0:
                        - Set `digit` to `original` % 10
                        - If `digit` is even:
                            - Set `product` to `product` * `digit`
                        - Set `original` to `original` / 10
                    - Print "The product of all even numbers in your integer is: ", `product`
                - **Case 4**: Print the first and last digit and their sum
                    - Set `lastdigit` to `num` % 10
                    - Initialize `firtdigit` to `num`
                    - While `firtdigit` >= 10:
                        - Set `firtdigit` to `firtdigit` / 10
                    - Print "First digit of your number: ", `firtdigit`
                    - Print "Last digit of your number: ", `lastdigit`
                    - Print "Sum of the last and the first digit: ", `firtdigit` + `lastdigit`
                - **Case 5**: Swap the first and last digit
                    - Initialize `original` to `num`
                    - Initialize `count` to 0
                    - If `original` is 0:
                        - Set `count` to 1
                    - Else:
                        - While `original` is not 0:
                            - Set `original` to `original` / 10
                            - Increment `count`
                    - Set `lastdigit` to `num` % 10
                    - Initialize `firtdigit` to `num`
                    - While `firtdigit` >= 10:
                        - Set `firtdigit` to `firtdigit` / 10
                    - Set `swapped` to `lastdigit` * 10^(count - 1) + `num` % 10^(count - 1)
                    - Set `swapped` to `swapped` - `lastdigit`
                    - Set `swapped` to `swapped` + `firtdigit`
                    - Print "Swapped number: ", `swapped`
                - **Case 6**: Check if the number is a palindrome
                    - Initialize `reverse` to 0
                    - Initialize `original` to `num`
                    - While `original` is not 0:
                        - Set `digit` to `original` % 10
                        - Set `reverse` to `reverse` * 10 + `digit`
                        - Set `original` to `original` / 10
                    - If `num` is equal to `reverse`:
                        - Print "Is palindrome"
                    - Else:
                        - Print "Is not palindrome"
                - **Case 7**: Find the frequency of each digit
                    - Initialize `original` to `num`
                    - Print "Digit      frequency"
                    - For `digit` from 0 to 10:
                        - Initialize `count` to 0
                        - Set `original` to `num`
                        - While `original` is not 0:
                            - If `original` % 10 is equal to `digit`:
                                - Increment `count`
                            - Set `original` to `original` / 10
                        - If `count` > 0:
                            - Print `digit`, "           ", `count`
                - **Case 8**: Check if the number is a Strong number
                    - Initialize `sum` to 0
                    - Initialize `original` to `num`
                    - While `original` is not 0:
                        - Set `digit` to `original` % 10
                        - Initialize `factorial` to 1
                        - For `i` from 1 to `digit`:
                            - Set `factorial` to `factorial` * `i`
                        - Set `sum` to `sum` + `factorial`
                        - Set `original` to `original` / 10
                    - If `sum` is equal to `num`:
                        - Print `num`, " Is strong"
                    - Else:
                        - Print `num`, " Is not strong"
                - **Case 9**: Check if the number is a Perfect number
                    - Initialize `sum` to 0
                    - For `i` from 1 to `num` / 2:
                        - If `num` % `i` is 0:
                            - Set `sum` to `sum` + `i`
                    - If `sum` is equal to `num`:
                        - Print `num`, " Is Perfect"
                    - Else:
                        - Print `num`, " Is Not perfect"
            - End Switch
            - Print "Thank you for playing 'Gaming with Numbers'."
            - Prompt User: "Do you want to continue?(y/n): "
            - Read `retry`
            - If `retry` is 'y' or 'Y':
                - Go to Step 3 (Menu)
    - End If
5. **End Loop**

6. **Print Closing Message**:
    - "Thank you for playing 'Gaming with Numbers'. Have a great day!"

7. **End**
