--- 
``mermaid
graph TD
    A([Start]) --> B[/Input: employee's name, weekly working hours, bonus rate per hour and base salary/]
    B --> C[Calculate bonus = hours * bonusRate]
    C --> D[Calculate grossSalary = baseSalary + bonus]
    D --> E[Calculate tax_deduction = grossSalary * tax]
    E --> F[Calculate pension_deduction = grossSalary * pension]
    F --> G[Calculate netSalary = grossSalary - tax_deduction - pension_deduction]
    G --> H[/Print employee Bonus Payment, Gross Salary and Net Salary/]
    H --> I[/Display closing message/]
    I --> K([End])
