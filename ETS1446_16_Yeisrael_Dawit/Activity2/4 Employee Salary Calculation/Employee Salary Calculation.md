## Salary Calculator Program

This document provides a problem analysis, pseudocode and flowchart for a program that calculates an employee’s salary, including bonus, gross salary, and net salary.

---
## Problem Analysis
1. **Input:**
    - Employee name
    - Weekly working hours
    - Bonus rate per hour
    - Base salary
2. **Process**
    - Read employee name, working hours, bonus rate, and base salary
    - Calculate bonus payment using bonus = hours * bonusRate
    - Calculate gross salary using grossSalary = baseSalary + bonus
    - Calculate tax_deduction = grossSalary * tax
    - Calculatepension_deduction = grossSalary * pension
    - Calculate netSalary = grossSalary - tax_desuction - pension_desuction
3. **output:**
    - Print Bonus payment
    - Print Gross salary
    - Print Net salary
---

## Pseudocode

1. **START**
2. **Input Name, working hours, bonus rate, and base salary**
    - DISPLAY "Enter employee's name:"
    - DISPLAY "Enter weekly working hours:"
    - DISPLAY "Enter bonus rate per hour:"
    - DISPLAY "Enter base salary:"
3. **CALCULATE Bonus**
    - bonus = hours * bonusRate
4. **CALCULATE grossSalary**
    - grossSalary = baseSalary + bonus
5. **calculate tax deductin**
    - tax_deduction = grossSalary * tax
6. **calculate pension deduction**
    - pension_deduction = grossSalary * pension
5. **CALCULATE netSalary**
    - netSalary = grossSalary - tax_desuction - pension_desuction
6. **DISPLAY the results**
    - DISPLAY "Bonus Payment: bonus"
    - DISPLAY "Gross Salary: grossSalary"
    - DISPLAY "Net Salary: netSalary"
7. **DISPLAY closing message**
    - "Thank you for using the Salary Calculator. Have a wonderful day!"
9. **END**

---

## Flowchart

```mermaid
graph TD
    A([Start]) --> B[/Input: employee's name, weekly working hours, bonus rate per hour and base salary/]
    B --> C[Calculate bonus = hours * bonusRate]
    C --> D[Calculate grossSalary = baseSalary + bonus]
    D --> E[Calculate tax_deduction = grossSalary * tax]
    E --> F[Calculatepension_deduction = grossSalary * pension]
    F --> G[Calculate netSalary = grossSalary - tax_desuction - pension_desuction]
    G --> H[/print employee Bonus Payment, Gross Salar and Net Salary/]
    H --> I[/Display closing message/]
    I --> K([End])

    
