## Flowchart
```mermaid
flowchart TD
    A[Start] --> B{Input Number};
    B --> C[Display Menu];
    C --> D{Get User Choice};
    D -- a --> E[Reverse Number];
    D -- b --> F[Count Digits];
    D -- c --> G[Product of Even Digits];
    D -- d --> H[First & Last Digits & Sum];
    D -- e --> I[Swap First & Last Digits];
    D -- f --> J[Check Palindrome];
    D -- g --> K[Digit Frequencies];
    D -- h --> L[Check Strong Number];
    D -- i --> M[Check Perfect Number];
    D -- j --> N[Exit];
    E --> O[Output Reversed Number];
    F --> P[Output Digit Count];
    G --> Q[Output Product];
    H --> R[Output First, Last, Sum];
    I --> S[Output Swapped Number];
    J --> T[Output Palindrome Result];
    K --> U[Output Frequency Table];
    L --> V[Output Strong Number Result];
    M --> W[Output Perfect Number Result];
    O --> C;
    P --> C;
    Q --> C;
    R --> C;
    S --> C;
    T --> C;
    U --> C;
    V --> C;
    W --> C;
    N --> Z[Stop];

