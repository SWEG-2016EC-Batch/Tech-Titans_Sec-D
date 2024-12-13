# Frequency of Digits in a Given number
## Problem analysis
### Input
    1.Number
### Output
    1.Frequency of each digit in a given number
### Opreations
    1.Declare a variable to store input, digits and initalize the counters to 0 that counts the frequency of each digit
    2.Read input
    3.Calculate the digit as digit = number % 10, update the number as number = number / 10
    4.Incremenet the respective counter by one, if digit = 4 increment frequecy4 variable by one (freq4++)
    5.Repeat the process until number gets 0 
    6.Print the output
## Algoritm design
### Pseudocode
    1.Start
    2.Initialize counter to 0(freq(i) = 0 where i=1,2,3...9)
    3.Read number 
    4.if number is greater than 0 then,
        4.1 calculate digit as digit = number % 10
        4.2 update number as number = number / 10
        4.3 increment the respective counter (freq4++ if digit= 4)
    5.Check the number. If number is  greater than 0 
        5.1 goto step 4.1
        5.2 else goto step 6
    6.Print the frequency 
    7.End

### Flowchart
**Abbreviations** \
**+D-** Digit \
**+num-** number \
**+freq_i-** frequency of each digit

```mermaid

flowchart TD
    A([Start]) --> B[freq_i = 0, i = 0,1,2,...9 ]
    B --> C[/Read num/]
    C --> D[D = num % 10]
    D --> E[Update num = num / 10]
    E --> F[Increment freq_i++]
    F --> G{Is num > 0?}
    G -->|Yes| D
    G -->|No| I[/Print freq_i /]
    I --> J([End])

    
    