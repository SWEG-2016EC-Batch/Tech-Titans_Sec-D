# BMI Calculator Documentation

This document provide the BMI Calculator program problem analysis, pseudocode and a flowchart.

---
## Problem Analysis

1. **Input:**
    - Number of persons whose BMI needs calculation.
    - Weight and height for each person
2. **Process:**
    - Read the number of persons
    - For each person, read weight and height
    - Calculate BMI using BMI = weight / (height * height)
    - Classification (Normal, Overweight, Underweight)
2. **Output:**
    - BMI value
    - Determine BMI category and display results.
---
## Pseudocode 

1. **Start**
2. **Input Number of Users**
    - Ask the user how many people's BMI they would like to calculate.
3. **For Each User (Loop for numUsers times)**

    3.1 **Input Weight and Height:**
    - Ask the user to enter their weight (in kg) for user i.
    - Ask the user to enter their height (in meters) for user i.

    3.2 **Calculate BMI:**
    - Use the formula: BMI = weight / (height * height)
    
    3.3 **Determine BMI Category:**
    - Underweight: BMI < 18.5
    - Normal weight: 18.5 ≤ BMI ≤ 24.9
    - Overweight: BMI > 24.9
    3.4 **Display Results:**
    - Display the calculated BMI and the corresponding category for user i.
4. **Display closing message** 
5. **End**
---

## 2. Flowchart


```mermaid
graph TD
   
    start([Start]) --> inputdata[/Read the number of people as usernum/]
    inputdata --> initializecounter[Declare and initialize counter i=1]
    initializecounter --> takeuserdata[/Read weight and height/]
    takeuserdata --> claculateBMI[Calculate BMI = weight / height * height]
    claculateBMI --> ClassifyBMI{Is BMI between 18.5 and 24.9?}
    ClassifyBMI -->|Yes| NormalBMI[/Print BMI and "Normal"/]
    ClassifyBMI -->|No| Checkoverweight{Is BMI greater than 25}
    Checkoverweight -->|Yes| OverweightBMI[/Print BMI and "Overweight"/]
    Checkoverweight -->|No| UnderweightBMI[/Print BMI and "Underwight"/]
    NormalBMI --> IncrementCounter[Increment counter i++]
    OverweightBMI --> IncrementCounter[Increment counter i++]
    UnderweightBMI --> IncrementCounter
    IncrementCounter --> Checkcounter{whether i <= numuser}
    Checkcounter -->|Yes| takeuserdata[/Read weight and height/]
    Checkcounter -->|No| closing_Message
    closing_Message --> End([End])

    
