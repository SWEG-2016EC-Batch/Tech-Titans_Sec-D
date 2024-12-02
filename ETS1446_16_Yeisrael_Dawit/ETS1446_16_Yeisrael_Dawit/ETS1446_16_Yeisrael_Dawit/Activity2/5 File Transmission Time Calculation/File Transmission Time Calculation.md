## File Transmission Time Calculation

This document provises the a problem analysis, pseudocode and flowchart for a programm which calculates file transmission rate.

---
## Problem Analysis
1. **Input:**
    - File size (bytes)
2. **Output:**
    - print Time in days, hours, minutes, and seconds
2. **Process:**
    - Read file size
    - Calculate total time in seconds using timeInSeconds = fileSize / transmissionRate
    - Convert time to days, hours, minutes, and seconds


---
## Pseudocode
1. **START**
2. **Declaer and Intialize transmission Rate**
    - transmissionRate = 960 // Characters per second
3. **Input File Size**
    - Ask the user to enter the file size in bytes.
4. **Calculate Total Transmission Time in Seconds**
    - Total seconds = filesize / transmissionRate
5. **Convert Seconds to Days, Hours, Minutes, and Seconds**
    - days = totalSeconds / (24 * 3600)
    - hours = (totalSeconds % (24 * 3600)) / 3600
    - minutes = (totalSeconds % 3600) / 60
    - seconds = totalSeconds % 60
6. **Display the Results**
    - Display the file size.
    - Display the transmission rate.
    - Display the transmission time in days, hours, minutes, and seconds.
7. **END**
---
## Flowchart
```mermaid
graph TD
    A([Start]) --> transmissionrate[Declear and initialize transmission rate = 960]
    transmissionrate --> Inputdata[/Input file size in bytes/]
    Inputdata --> calculateTotalseconds[Total seconds = file size / transmissionRate]
    calculateTotalseconds --> ConvertSecondstoDays[days = totalSeconds / 86400]
    ConvertSecondstoDays --> ConvertSecondstoHours[hours = totalSeconds  / 3600]
    ConvertSecondstoHours --> ConvertSecondstoMinutes[minutes = totalSeconds / 60 ]
    ConvertSecondstoMinutes --> outputdata[/Print transmission time in days, hours, minutes and seconds/]
    outputdata --> End([End])

    
