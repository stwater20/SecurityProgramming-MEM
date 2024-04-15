# Security Programming - Rule 08. Memory Management (MEM)

SEI CERT C Coding Standard

## Code Example
* MEM30-C. Do not access freed memory
* MEM31-C. Free dynamically allocated memory when no longer needed
* MEM33-C. Allocate and copy structures containing a flexible array member dynamically
* MEM34-C. Only free memory allocated dynamically

## Sides

Please refers [MEM_Slide_20240413](./MEM_Slide_20240413/).


## Risk Assessment Summary
| Rule   | Severity | Likelihood | Remediation Cost | Priority | Level |
|--------|----------|------------|------------------|----------|-------|
| MEM30-C| High     | Likely     | Medium           | `P18`    | `L1`  |
| MEM31-C| Medium   | Probable   | Medium           | `P8`     | `L2`  |
| MEM33-C| Low      | Unlikely   | Low              | `P3`     | `L3`  |
| MEM34-C| High     | Likely     | Medium           | `P18`    | `L1`  |

# Reference

[Memory Management (MEM)](https://wiki.sei.cmu.edu/confluence/pages/viewpage.action?pageId=87152142)