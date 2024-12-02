
# Power Calculator

   ## Problem analysis
    
   **Inputs:** 
1. Number(base).
2. Exponent.

**Outputs:**
1. Power.

 **0perations:**
1. Declare a variable to store basa , exponent and the power.
2. Read the inputs.
3. Calculate the power as **power = base^exponent.**
4. Print the power.

---  
   ## Algorithm design
   **Pseudocode**
1. Start
2. Input x
3. Input y
4. IF x is negative AND y is not an integer then
    OUTPUT "Error: Cannot raise a negative number to a non-integer power."
  ELSE
    result = x raised to the power of y
    OUTPUT result
 
5. END


# Power Calculation Flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read x  and y/]
    InputData --> Calculate[ power = x^y ]
    Calculate --> OutputData[/Print power/]
    OutputData --> End([End])
