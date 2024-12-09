## Salary Calculator Program
This document provides a problem analysis, pseudocode and flowchart for a program that calculates a claculate a student total mark and print the crrosponding grade latter.

---
## Problem Analysis

### Input
1. **Test score** (out of 15%)
2. **Quiz score** (out of 5%)
3. **Project score** (out of 20%)
4. **Assignment score** (out of 10%)
5. **Final exam score** (out of 50%)

### Process
1. **Read the input scores**:
   - Prompt the user to enter the test score.
   - Prompt the user to enter the quiz score.
   - Prompt the user to enter the project score.
   - Prompt the user to enter the assignment score.
   - Prompt the user to enter the final exam score.

2. **Calculate the total mark**:
   - Sum the scores from all components:
     - `totalMark = test + quiz + project + assignment + final`

3. **Determine the grade based on the total mark**:
   - If `totalMark >= 90`: grade is "A+"
   - Else if `totalMark >= 80`: grade is "A"
   - Else if `totalMark >= 75`: grade is "B+"
   - Else if `totalMark >= 60`: grade is "B"
   - Else if `totalMark >= 55`: grade is "C+"
   - Else if `totalMark >= 45`: grade is "C"
   - Else if `totalMark >= 30`: grade is "D"
   - Else: grade is "F"

### Output
1. **Total mark**
2. **Grade letter**
---
### Pseudocode

1. **START**
2. **Read Input Scores:**
   - DISPLAY "Enter your test result out of 15%:"
   - READ test
   - DISPLAY "Enter your quiz result out of 5%:"
   - READ quiz
   - DISPLAY "Enter your Project result out of 20%:"
   - READ project
   - DISPLAY "Enter your Assignment result out of 10%:"
   - READ assignment
   - DISPLAY "Enter your final exam result out of 50%:"
   - READ final

3. **Calculate Total Mark:**
   - totalMark = test + quiz + project + assignment + final

4. **Determine Grade:**
   - IF totalMark >= 90 THEN
     - DISPLAY "You got A+, Good job!"
   - ELSE IF totalMark >= 80 THEN
     - DISPLAY "You got A. Nice!"
   - ELSE IF totalMark >= 75 THEN
     - DISPLAY "You got B+. Good"
   - ELSE IF totalMark >= 60 THEN
     - DISPLAY "You got B."
   - ELSE IF totalMark >= 55 THEN
     - DISPLAY "You got C+."
   - ELSE IF totalMark >= 45 THEN
     - DISPLAY "You got C."
   - ELSE IF totalMark >= 30 THEN
     - DISPLAY "You got D."
   - ELSE
     - DISPLAY "You got F."

5. **End Program:**
---

## Flowchart

```mermaid
graph TD
  start([Start]) --> input[/Input: Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%/]
  input --> totalmark[Calculate total mark: test + quiz + project + assignment + final]
  totalmark --> Aplus{Is total mark >= 90?}
  Aplus -- Yes --> Aplusvalid[/Display: "You got A+. Good job!"/]
  Aplus -- No --> A{Is total mark >= 80?}
  A -- Yes --> Avalid[/Display: "You got A. Nice!"/]
  A -- No --> Bplus{Is total mark >= 75?}
  Bplus -- Yes --> Bplusvalid[/Display: "You got B+. Good!"/]
  Bplus -- No --> B{Is total mark >= 60?}
  B -- Yes --> Bvalid[/Display: "You got B."/]
  B -- No --> Cplus{Is total mark >= 55?}
  Cplus -- Yes --> Cplusvalid[/Display: "You got C+."/]
  Cplus -- No --> C{Is total mark >= 45?}
  C -- Yes --> Cvalid[/Display: "You got C."/]
  C -- No --> D{Is total mark >= 30?}
  D -- Yes --> Dvalid[/Display: "You got D."/]
  D -- No --> Fvalid[/Display: "You got F."/]
  Aplusvalid --> End([End])
  Avalid --> End
  Bplusvalid --> End
  Bvalid --> End
  Cplusvalid --> End
  Cvalid --> End
  Dvalid --> End
  Fvalid --> End
