# Product of Even Digits
## Problem analysis
### Input 
    1.Number
### Output
    1.Product of even digits
### Opreations
    1.Declare a variable to store the input, reminder and initialize the product to 1(product = 1)
    2.Read input
    3.if number is greater than 0 then,
        Calculate reminder as reminder = number % 10
    4.Check the reminder 
        if reminder is divisible by 2 then, calculate the product as product = product * reminder
    5.Update the number as number = number / 10
    6.Repeat the process until the number gets 0 
    7.Print the output
## Algorithm Design
### Pseudocode
    1.Start
    2.Initialize product to one (product = 1)
    3.Read number
    4.if number is greater than 0 then,
        4.1 Calculate reminder as reminder = number % 10
    5.Check the reminder. if reminder % 2 = 0
        5.1 calculate the product as product = product * reminder
            goto step 6
        5.2 else goto step 6
    6.Update the number as number = number / 10 
    7. Check the number 
        7.1 if number is greater than 0, goto step 4.1
        7.2 else go to step 8
    8.Print product
    9.End 
### Flowchart

**Abreviations** \
**+num-** number \
**+pro-** product \
**+R-** reminder

```mermaid
flowchart TD
    A([Start])--> B[Initialize pro = 1]
    B --> C[/Read num/]
    C --> D{Is num > 0?}
    D -->|Yes| E[Calculate R = num % 10]
    E --> F{Is R % 2 = 0?}
    F -->|Yes| G[pro = pro* R]
    G --> H[Update num = num / 10]
    F -->|No| H
    H --> D
    D -->|No| I[\print pro\]
    I --> K([End])

