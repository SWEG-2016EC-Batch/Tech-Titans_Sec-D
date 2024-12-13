## Problem Analysis

### Inputs
1. basic_salary
2. worked_hours
3. bonus_rate

### Processes
1. Determine overtime hours worked (if any) and calculate the bonus.
2. Compute gross_salary as the sum of basic_salary and bonus.
3. Deduct 7% of the basic salary as pension.
4. Calculate tax based on the gross_salary using predefined tax rates.
5. Compute net_salary as gross_salary minus pension and tax.

### Outputs
1. gross_salary
2. pension
3. tax
4. net_salary

---

## Pseudocode

START
1. Input basic_salary
2. Input worked_hours
3. IF worked_hours > 40 THEN
      Input bonus_rate
      Calculate extra_hours = worked_hours - 40
   Else
      extra_hours = 0
   END IF
4. Calculate bonus = extra_hours * bonus_rate
5. Calculate gross_salary = basic_salary + bonus
6. Calculate pension = basic_salary * 0.07
7. Determine tax_rate based on gross_salary:
   - IF gross_salary <= 200 THEN tax_rate = 0
   - Else if gross_salary <= 600 , tax_rate = 0.1
   - Else if gross_salary <= 1200 , tax_rate = 0.15
   - Else if gross_salary <= 2000 , tax_rate = 0.2
   - Else if gross_salary <= 3500 , tax_rate = 0.25
   - Else tax_rate = 0.3
8. Calculate tax = gross_salary * tax_rate
9. Calculate net_salary = gross_salary - pension - tax
10. Output gross_salary, pension, tax, and net_salary

