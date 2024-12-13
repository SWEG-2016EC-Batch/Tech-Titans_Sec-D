# Swapping The First and Last Digits
## Problem analysis
### Input 
    1.Number
### Output
    1. First and last digits after swapping 
### Opreations
    1.Declare a variable to store the input, first and last digits
    2.Read input
    3.Check the number. if the number is between 0 and 9 then,
        print one digit number
    4.if number is greater than or equals to 10 then,
        last digit = number %10
        fist digit = number
    5.if first digit is greater than or equals to 10 then,
        first first = first digit / 10 and repeat the division until the fist digit is less than 10
    6.Calculate 
        first digit = first digit + last_digit
        last digit = first digit - last_digit
        first digit = first digit - last_digit
    7.Print the first and last digits after swapping
## Algorithm design
### Pseudocode
    1.Start
    2.Read number
    3.Check number
        3.1 if the number is between 0 and 9 then
            print one digit number
            goto step 8
        3.2 else  
            last digit = number %10
            fist digit = number
    4.Calculate first digit as first digit= first digit / 10
    5.Check the first digit 
        5.1 if first digit is greater than or equal to 10, goto step 4
        5.2 else go to step 6
    6.Calculate 
        6.1 first digit = first digit + last digit
        6.1 last digit = first digit - last digit
        6.3 first digit = first digit - last digit
    7.Print first digit and last digit 
    8.End
### Flowchart
**Abreviations** \
**+LD-** last digit \
**+FD-** first digit \
**+num-** number

```mermaid
flowchart TD
    A([start]) --> B[/Read num/]
    B --> C{Is num >=0 or num < 9?}
    C -->|Yes| D[/Print "One digit number"/] --> E([End])
    C -->|No| F[LD = num % 10]
    F --> G[FD = number]
    G --> H{Is FD >= 10?}
    H -->|Yes| I[FD = FD / 10]
    I --> H
    H -->|No| J[FD = FD + LD]
    J --> K[LD = FD - LD]
    K --> L[FD = FD - LD]
    L --> M[/Print FD and LD/]
    M --> E([End])



