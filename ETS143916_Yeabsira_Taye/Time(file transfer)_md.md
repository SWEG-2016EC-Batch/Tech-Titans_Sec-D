# File Transfer Time Calculator
## Problem analysis
    
**Inputs:** 

1. File size in bytes
      
**Outputs:**

1. Time taken to transfer file in days, hours, minutes and seconds.
      
**Operations:**
1. Declare a variable to store file size in bytes, time taken in days, hours, minutes and seconds and intialize the transmission power to 960(rate = 960 bytes/second)
2. Read the inputs
3. Calculate the time taken in seconds as 
\
**time taken = file size / rate**
4. Convert the seconds into days, hours and minutes as
\
                    **days = time taken/86400**
                    \
                    **hours = time taken/3600**
                    \
                    **minutes = time taken/ 60**
5. Print the time taken.
   
---  
   ## Algorithm design
   **Pseudocode**

 1. Start the program
 2. Read file size in bytes 
 3. Decalre and initialize the rate (rate = 960)
 4. Calculate the time taken in second as 
/
**time taken = file size / rate**
 5. Convert the time taken in second to days, hours and minutes as
\
                    **days = time taken/86400**
                    \
                    **hours = time taken/3600**
                    \
                    **minutes = time taken/ 60**   
6. print the time taken in days, hours, minutes and seconds
7. end the program.    

# File Transfer Time Calculation Flowchart

```mermaid
flowchart TD
    Start([Start]) --> InputData[/Read file size in bytes/]
    InputData --> InitializeRate[Declare and initialize rate = 960]
    InitializeRate --> CalculateTime[ time taken = file size / rate]
    CalculateTime --> CalculateDays[ days = time taken / 86400]
    CalculateDays --> CalculateHours[ hours = time taken / 3600]
    CalculateHours --> CalculateMinutes[ minutes = time taken / 60]
    CalculateMinutes --> OutputData[/Print time taken in days, hours, minutes and seconds/]
    OutputData --> End([End])
