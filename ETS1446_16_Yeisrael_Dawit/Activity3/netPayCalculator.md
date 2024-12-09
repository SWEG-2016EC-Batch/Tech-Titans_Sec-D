## Salary Calculator Program

This document provides a problem analysis, pseudocode and flowchart for a program that calculates an employee’s salary, including bonus, gross salary, and net salary.

---
## Problem Analysis
1. **Input:**
    - Base salary of Employee
    - Weekly working hours of Employee
    - Bonus rate per hour of Employee
2. **Process**
    - Read employee working hours, bonus rate, and base salary
    - Calculate bonus payment using bonus = hours * bonusRate
    - Calculate gross salary using grossSalary = baseSalary + bonus
    - Calculate tax_deduction = grossSalary * tax
    - Calculatepension_deduction = grossSalary * pension
    - Calculate netPay = grossSalary - tax_desuction - pension_desuction
3. **output:**
    - Print Bonus payment
    - Print Gross salary
    - Print Net pay
---
### Pseudocode

1. **START**
2. **Input Basic Information:**
   - DISPLAY "Enter the basic salary:"
   - READ basicSalary
   - DISPLAY "Enter the number of worked hours:"
   - READ workedHours
   - DISPLAY "Enter the bonus rate:"
   - READ bonusRate

3. **Check for Overtime:**
   - IF workedHours > 40 THEN
     - DISPLAY "Enter the over-time bonus rate per hour:"
     - READ overtimeBonusRate
     - CALCULATE overtimePay = (workedHours - 40) * overtimeBonusRate
   - ELSE
     - SET overtimePay = 0

4. **Calculate Gross Pay:**
   - CALCULATE grossPay = basicSalary + (workedHours * bonusRate) + overtimePay

5. **Calculate Pension Deduction:**
   - SET pensionRate = 0.07
   - CALCULATE pension = grossPay * pensionRate

6. **Input Tax Rate:**
   - DISPLAY "Enter the tax rate (as a decimal):"
   - READ taxRate

7. **Calculate Tax Deduction:**
   - CALCULATE tax = grossPay * taxRate

8. **Calculate Net Pay:**
   - CALCULATE netPay = grossPay - pension - tax

9. **Output Results:**
   - DISPLAY "Gross Pay: " + grossPay
   - DISPLAY "Pension Deduction: " + pension
   - DISPLAY "Tax Deduction: " + tax
   - DISPLAY "Net Pay: " + netPay

10. **END**

---
---

## Flowchart

```mermaid
graph TD
  start([Start]) --> inputdata[/Input: basic salary, worked hours, and bonus rate/]
  inputdata --> checkworkhours{If worked hours > 40}
  checkworkhours -- No --> grosspay[Calculate gross pay: gross pay = bonusRate*/baseSalary + workedHours/]
  checkworkhours -- Yes --> overtime[Read overtime bonus rate per hour]
  overtime --> overtimepay[Calculate overtime pay: overtime pay = overtimeBonusRate*/workedHours - 40/]
  overtimepay --> grosspay
  grosspay --> pensiondeduction[Calculate pension deduction: grossSalary * 7%]
  pensiondeduction --> taxrate[/Read tax rate/]
  taxrate --> taxrdeduction[Calculate tax: grossSalary * taxRate]
  taxrdeduction --> netpay[Calculate net pay: grossSalary - pension - tax]
  netpay --> output[/Display gross pay, pension, tax, and net pay/]
  output --> End([End])

