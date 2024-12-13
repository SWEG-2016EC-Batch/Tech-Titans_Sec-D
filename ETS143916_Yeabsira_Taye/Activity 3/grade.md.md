
## Grade Calculator

---
## Problem Analysis
--- 
### Input
1. Quiz score (out of 5%)
2. Project score (out of 20%)
3. Test score (out of 15%)
4. Assignment score (out of 10%)
5. Final exam score (out of 50%)

### Operation
1. **Calculate the total mark**:
      totalMark = test + quiz + project + assignment + final

2. **Give the letter-grade for each score**:
   - If  totalMark >= 90: grade is "A+"
   - Else if totalMark >= 80: grade is "A"
   - Else if totalMark >= 75: grade is "B+"
   - Else if totalMark >= 60: grade is "B"
   - Else if totalMark >= 55: grade is "C+"
   - Else if totalMark >= 45: grade is "C"
   - Else if totalMark >= 30: grade is "D"
   - Else: grade is "F"

### Output
1. Total mark
2. Grade letter
---
### Pseudocode
---
1. **START**
2. **Read the results (Inputs) from each category :**
3. **Calculate Total Mark:**
    totalMark = test + quiz + project + assignment + final

4. **Assign letter-Grade:**
   - IF totalMark >= 90 THEN
   \
     Print "You got A+, Excellent!"

   - ELSE IF totalMark >= 80 THEN
 \
     Print "You got A. Very Good!"
     
   - ELSE IF totalMark >= 75 THEN
   \
     Print "You got B+. Good"
     
   - ELSE IF totalMark >= 60 THEN
   \
     Print "You got B."
   - ELSE IF totalMark >= 55 THEN
   \
     Print "You got C+."
   - ELSE IF totalMark >= 45 THEN
   \
     Print "You got C."
   - ELSE IF totalMark >= 30 THEN
   \
     Print "You got D."
   - ELSE
   \
     Print "You got F."

5. **End Program:**
---

## Flowchart
---

```mermaid
graph TD
  start([Start]) --> input[/Input: Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%/]
  input --> totalmark[Calculate total mark: test + quiz + project + assignment + final]
  totalmark --> Aplus{Is total mark >= 90?}
  Aplus -- Yes --> Aplusvalid[/Print: "You got A+. Excellent!"/]
  Aplus -- No --> A{Is total mark >= 80?}
  A -- Yes --> Avalid[/Print: "You got A. Very Good!"/]
  A -- No --> Bplus{Is total mark >= 75?}
  Bplus -- Yes --> Bplusvalid[/Print: "You got B+. Good!"/]
  Bplus -- No --> B{Is total mark >= 60?}
  B -- Yes --> Bvalid[/Print: "You got B."/]
  B -- No --> Cplus{Is total mark >= 55?}
  Cplus -- Yes --> Cplusvalid[/Print: "You got C+."/]
  Cplus -- No --> C{Is total mark >= 45?}
  C -- Yes --> Cvalid[/Print: "You got C."/]
  C -- No --> D{Is total mark >= 30?}
  D -- Yes --> Dvalid[/Print: "You got D."/]
  D -- No --> Fvalid[/Print: "You got F."/]
  Aplusvalid --> End([End])
  Avalid --> End
  Bplusvalid --> End
  Bvalid --> End
  Cplusvalid --> End
  Cvalid --> End
  Dvalid --> End
  Fvalid --> End
