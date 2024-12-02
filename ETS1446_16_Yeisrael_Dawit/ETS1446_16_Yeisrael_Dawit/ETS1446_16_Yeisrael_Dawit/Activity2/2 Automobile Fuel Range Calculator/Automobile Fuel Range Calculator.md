# Automobile Fuel Range Calculator

Automobile Fuel Range Calculator problem analysis, pseudocode and flowchart.
---
## Problem Analysis

1. **Input:**
    - Fuel tank capacity (gallons)
    - Miles per gallon (mpg)
2. **Process:**
    - Read fuel tank capacity and miles per gallon
    - Calculate range using range(total miles) = gallons * mpg
3. **Output:**
    - Distance the automobile can travel on a full tank, measured in miles.



---
## Pseudocode

1. **START**
2. **Input tank capacity and miles per gallon**
    - Ask the user to enter the tank capacity in gallons.
    - Ask the user to enter the miles per gallon.
3. **CALCULATE the total miles the**
    - total miles = tankCapacity * milesPerGallon
4. **Display the result**
    - Show the calculated total miles.
5. **Display Friendly ending message**
    - Display "Drive safely and enjoy your journey!"
6. **END**

---

## Flowchart

```mermaid
graph TD
    start([Start]) --> InputData[/Input: tank capacity and miles per gallon/]
    InputData --> CalculateRange[total miles = tankCapacity * milesPerGallon]
    CalculateRange --> outputdata[/print total_miles/]
    outputdata --> DisplayFriendlyMessage[/Display closing message/]
    DisplayFriendlyMessage --> End([End])
    

