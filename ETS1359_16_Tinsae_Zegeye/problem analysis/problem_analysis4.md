# salary calculator
## problem analysis

### inputs:
        1.name
        2.base salary
        3.weekly working hour
        4.bonus rate perhour.

### outputs:
        1.net salary
        2.bonus payment 
        3.gross salaray.

### oprations:
        1.declare variables to store name, weekly working hour, pension deduction, tax deduction, bonus payment, gross salary, net salary, bonus rate perhour, base salary and inialize pension = 0.05 and tax = 0.15
        2.read the inputs
        3.calculate 
             bonus_payment = weekly working hour * bonus_rate perhour
            gross_salary = base salary + bonus payment
            pension_deduction = gross salary * pension
            tax_deduction = gross salary * tax
            net_salary = gross salary -(pension deduction + tax deduction)
        4.print net salary, bonus payment and gross salary. 

## algorithm design
###  pesudocode
        1.start the program
        2.read  name, base salary,weekly working hour and bonus rate per hour
        3.calculate 
           bonus payment = weekly working hour * bonus rate perhour
            gross_salary = base salary + bonus payment
            pension_deduction = gross salary * pension
            tax_deduction = gross salary * tax
            net_salary = gross salary -(pension deduction + tax deduction)
        4.print net salary, bonus payment and gross salary 
        5.end the program.
        
### flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/input name, base salary, weekly working hours and bonus rate per hour/]
    InputData --> CalculateBonus[bonus payment = weekly working hour * bonus rate per hour]
    CalculateBonus --> CalculateGross[gross salary = base salary + bonus payment]
    CalculateGross --> CalculatePension[pension deduction = gross salary * pension]
    CalculatePension --> CalculateTax[tax deduction = gross salary * tax]
    CalculateTax --> CalculateNet[net salary = gross salary - pension deduction - tax deduction]
    CalculateNet --> OutputData[/Print net salary, bonus payment and gross salary/]
    OutputData --> End([End])


