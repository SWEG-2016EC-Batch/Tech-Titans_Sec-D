# Cheking if The number is Palindrome
## Problem analysis
### Input
    1.Number
### Output 
    1.Palindrome or not
### Opreations
    1.Declare a variable to store the input, reminder, the original number and initialize  reverse to 0(reverse = 0)
    2.Read input
    3.Check the number
        if the number is greater than 0 then, divide the number by 10 and store the reminder on a reminder variable
        Calculate the reverse as reverse = reverse * 10 + reminder
        update the number as number = number/10
    4.Repeat this program until number is equal to 0
    5.Check if the original number is equals to reverse one 
        if original number = reverse, print palindrome otherwise not.
## Algorithm design
### Pseudocode
    1.Start
    2.initialize reverse to 0
    3.Read number
    4.Store the number on other variable temp
    5.if number is greater than 0 then,  
        5.1 Calculate reminder = number % 10
        5.2 Calculate reverse as reverse = reverse * 10 + reminder
        5.3 Update number as number = number/10
    6.Check number. 
        6.1 if number is greater than 0 then, goto step 5.1
        6.2 else goto step 7
    7.Check if temp equals to reverse 
        7.1 if temp = reverse then, print palindrome
        7.2 else not palindrome
    8.End
### Flowchart
**Abbreviations** \
**+R-** Reminder \
**+r-** reverse \
**+num-** number \
**+temp-** variable to store original number

```mermaid

flowchart TD
    A([Start])--> B[initialize r=0]
    B --> C[/Read num/]
    C --> D[Store num in temp]
    D --> E{Is num > 0?}
    E -->|Yes| F[R = num% 10]
    F --> G[ r = r * 10 + R]
    G --> H[Update num = num / 10]
    H --> E
    E --> |No| I{Is temp = r?}
    I --> |Yes| J[/Print "palindrome"/]
    I --> |No| K[/Print "not palilndrome"/]
    K --> L([End])
    J --> L
    