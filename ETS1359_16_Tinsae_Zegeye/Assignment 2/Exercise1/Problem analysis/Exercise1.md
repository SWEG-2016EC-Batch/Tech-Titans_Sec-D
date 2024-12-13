# Salary calculator
## Problem analysis
### Inputs
    1.Base salary
    2.Worked hours
    3.Bonus rate
### Output
    1.Net salary
### Operations
    1.Declare a variable to store base salary,worked hours,bonus rate,net salary,gross salary,bonus,pension deduction,tax deduction,extra worked hours and tax rate
    2.Declare and initialize pension to 7%(0.07).
    3.Read inputs.
    4.Check the range of the base salary;
        if base salary is up to 200br(<200), then tax rate = 0
        if base salary is between 200br and 600br (200 - 600), then tax rate = 10%(0.1)
        if base salary is between 600br and 1200br (600 - 1200), then tax rate = 15%(0.15)
        if base salary is between 1200br and 2000br (1200 - 2000), then tax rate = 20%(0.20)
        if base salary is between 2000br and 3500br (2000 - 3500), then tax rate = 25%(0.25)
        if base salary is greater than 3500br ( >3500), then tax rate = 30%(0.3)
    5.Check the worked hours;
        if worked hours is greater then 40, then calculate the extra worked hours as extra worked = worked hours - 40 
    6.Calculate;
        bonus = extra worked hours * bonus rate
        gross salary = base salary + bonus
        pension deduction = base salary * pension
        tax deduction = gross salary * tax rate
        net salary = gross salary -pension deduction - tax deduction
    7.Print output.
## Algorithm design
### pesudocode
    1.Start
    2.Initialize pension to 7%(0.07)
    3.Read base salary, worked hours and bonus rate
    4.Check the range of the base salary;
        if base salary is up to 200br(<200), then tax rate = 0.
        if base salary is between 200br and 600br (200 - 600), then tax rate = 10%(0.1)
        if base salary is between 600br and 1200br (600 - 1200), then tax rate = 15%(0.15)
        if base salary is between 1200br and 2000br (1200 - 2000), then tax rate = 20%(0.20)
        if base salary is between 2000br and 3500br (2000 - 3500), then tax rate = 25%(0.25)
        if base salary is greater than 3500br ( >3500), then tax rate = 30%(0.3)
    5.Check the worked hours;
        if worked hours is greater then 40, then calculate the extra worked hours as extra worked hours = worked hours - 40
    6.Calculate;
        bonus = extra worked hours * bonus rate
        gross salary = base salary + bonus
        pension deduction = base salary * pension
        tax deduction = gross salary * tax rate
        net salary = gross salary -pension deduction - tax deduction
    7.Print the net salary 
    8.End.
 ### flowchart
 
 **Abbreviations:** \
    +**BS-** base salary \
    +**WH -** worked hours \
    +**EWH -** extra worked hours \
    +**PD -** pension deduction \
    +**TD -** tax deduction \
    +**GS-** gross salary 
    

```mermaid
flowchart TD
    
    A([Start]) --> B[/Initialize pension to 0.07/]
    B --> C[Read BS, WH and bonus rate]
     C --> D{Is BS < 200?}
    D --> |Yes| E[Tax rate = 0]
    D --> |No| F{Is BS  200 - 600?}
    F --> |Yes| G[Tax rate = 0.1]
    F --> |No| H{Is BS 600 - 1200?}
    H --> |Yes| I[Tax rate = 0.15]
    H --> |No| J{Is BS  1200 - 2000?}
    J --> |Yes| K[Tax rate = 0.2]
    J --> |No| L{Is BS  2000 - 3500?}
    L --> |Yes| M[Tax rate = 0.25]
    L --> |No| N{Is BS > 3500?}
    N --> |Yes| O[Tax rate = 0.3]
    E --> P{Is WH > 40?}
    G --> P
    I --> P
    K --> P
    M --> P
    O --> P
    P --> |Yes| Q[Calculate EWH = WH - 40]
    P --> |No| R[Bonus = 0]
     Q --> S[ bonus = EWH * bonus rate]
    R --> T[ GS = BS + bonus]
    S --> T
    T --> U[ PD = BS* pension]
    U --> V[ TD = GS * tax rate]
    V --> W[ net salary = GS - PD-TD]
    W --> X[/Print net salary/]
    X --> Y([End])


 