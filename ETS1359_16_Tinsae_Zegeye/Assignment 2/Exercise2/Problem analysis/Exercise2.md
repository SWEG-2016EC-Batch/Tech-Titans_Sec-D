# Total mark and Grade calculator
## Problem analysis
### Input
    1.Test(15)
    2.Quiz(5)
    3.Project(20)
    4.Assignment(10)
    5.Final exam(50)
### Output
    1.Total mark(100)
    2.Corresponding grade
### Operations
    1.Declare a variable to store mark of test, quiz, assignment, project, final exam and total mark
    2.Read inputs
    3.Calculate the total mark as total mark = test + qiuz + assignment +project + final exam
    4.Check the value of total mark 
        if total mark is greater than or equals to 90 then, grade = A+
        if total mark is greater than or equals to 80 then, grade = A
        if total mark is greater than or equals to 75 then, grade = B+
        if total mark is greater than or equals to 60 then, grade = B
        if total mark is greater than or equals to 55 then, grade = C+
        if total mark is greater than or equals to 45 then, grade = C
        if total mark is greater than or equals to 30 then, grade = D
        if total mark is less than 30 then, grade = F
    5.Print the output.
## Algorithm design
### Pseudocode
    1.Start
    2.Read the test, quiz, assignment, project and final exam marks
    3.Calculate the total mark as total mark = test + qiuz + assignment +project + final exam
    4.Check the value of the total mark;
        if total mark is greater than or equals to 90 then, grade = A+
        if total mark is greater than or equals to 80 then, grade = A
        if total mark is greater than or equals to 75 then, grade = B+
        if total mark is greater than or equals to 60 then, grade = B
        if total mark is greater than or equals to 55 then, grade = C+
        if total mark is greater than or equals to 45 then, grade = C
        if total mark is greater than or equals to 30 then, grade = D
        if total mark is less than 30 then, grade = F
    5.Print the total mark and the corresponding grade
    6.End.
### Flowchart

**Abbreviations:** \
+**TM-** total mark \
+**T-** test \
+**Q-** quiz \
+**A-** assignment \
+**P-** project \
+**FE-** final exaam

```mermaid
flowchart TD
    
    A([Start]) --> B[/Read T,Q,P,A and FE/]
    B --> C[ TM = T + Q + P + A + FE]
    C --> D{Is TM >= 90?}
    D --> |Yes| E[grade = A+]
    D --> |No| F{Is TM >= 80?}
    F --> |Yes| G[grade = A]
    F --> |No| H{Is TM >= 75?}
    H --> |Yes| I[grade = B+]
    H --> |No| J{Is TM >= 60?}
    J --> |Yes| K[grade = B]
    J --> |No| L{Is TM >= 55?}
    L --> |Yes| M[grade = C+]
    L --> |No| N{Is TM >= 45?}
    N --> |Yes| O[grade = C]
    N --> |No| P{Is TM >= 30?}
    P-->|Yes| Q[grade = D]
    P -->|No| R[grade = F]
    E -->S[/print TM and grade/]
    G --> S
    I --> S
    K --> S
    M --> S
    O --> S
    R --> S
    S --> T([End])

