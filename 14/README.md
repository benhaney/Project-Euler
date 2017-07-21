## Problem 14
### Longest Collatz sequence

The following iterative sequence is defined for the set of positive integers:

```
n -> n/2    (n is even)
n -> 3n + 1 (n is odd)
```

Using the rule above and starting with 13, we generate the following sequence:
```
13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
```
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

## Solution Comments

14-table.js is a modified solution that stores collatz results in a table and fetches them if another collatz sequence runs into a stored value

All other solutions implement the same algorithm

| Solution       | Execution time |
|----------------|----------------|
| 14.c           | 2.507 s        |
| 14.c (-O3)     | 0.337 s        |
| 14.py (python) | 40.735 s       |
| 14.py (pypy)   | 1.306 s        |
| p14.java       | 1.110 s        |
| 14.js          | 1.849 s        |
| 14-table.js    | 0.586 s        |