## Power Calculator Program

This document provides a pseudocode and flowchart for a program that calculates the result of raising a base to an exponent.

---
## Problem Analysis 

1. **Input:**
    - Base value (x)
    - Exponent value (y)
2. **Process:**
    - Read base and exponent values
    - Calculate result using result = pow(x, y)
3. **Output:**
    - Print the result of x^y

---

## Pseudocode

1. **START**
2. **Input base and exponent**
   - Ask the user to enter the base value (x)
   - Ask the user to enter the exponent value (y)
3. **Calculate the result** 
   - result = base^exponent
4. **Display the result**
   - Display "The result of base raised to the power of exponent is: result"
5. **Display the prompt message**
   - Display "Thanks for using the Power Calculator. Have a great time!"
6. **END**

---

## Flowchart

```mermaid
graph TD
    A([Start]) --> B[/Input base/]
    B --> C[/Input exponent/]
    C --> D[Calculate result = base^exponent]
    D --> E[/Display result/]
    E --> F[/Display closing message/]
    F --> G([End])
