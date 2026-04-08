The logic for writing patterns is as follows: 

1. Determine the number of lines to be printed for outer loop
    - Initialize a number `n`  that tracks total number of lines. 
    - Start outer loop with `i =0`, increase one at a time, run until `i=n-1` or `i<=n`.
    - The body of outer loop ends with an `endl` to indicate we move to next line.

2. Determine number of characters in each line to be printed for inner loop
    - Write number of characters as a function of `n` and `i` i.e if we have  4 lines and 3 characters in each line, then loop runs until `n-i`.
    - Start inner loop with `j=0`, increase one at a time, run until above number. 

3. The body of inner loop shows exactly what gets printed
