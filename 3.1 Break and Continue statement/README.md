## Break and Continue Statement:

**Break Statement:** Stops the entire process of the loop.

**Continue Statement:** Only stops the current iteration of the loop.

### Switch-Case Statement:

Use the switch statement to select one of many code `blocks` to be executed.
```c++
switch(expression) {
    case x:
        // code block
        break;
    case y:
        // code block
        break;
    default:
        // code block
}
```
## Operators:
-   **Unary Operators:**
    -   It is only a single operand, Increment `++` and Decrement `--`.   

-   **Binary Operators:**   It is require two operands to acts like, 

|No. |    Operator         |value |
|:---|:--------------------|:----:|
|1	 |Arithmetic operators |`+`, `-`, `*`, `/`, `%`|
|2	 |Relational Operators |`==`, `>=`, `<=`, `!=`|
|3	 |Logical Operators    |`&&` , `OR`|
|4	 |Assignment Operators |`=`, `+=`, `-=`, `*=`, `/=` | 
|5	 |Bitwise Operator     |`^ `, `~` |

-   **Ternary Operator:**
    -   The operator that require three operands to act.
    -   ```(a != b)? True : False;  ```

-   **Other Operators:**
    -   SizeOf Operator:
        -   The `sizeof` the operator is used to compute the size of the variable.   ex: `sizeof(int)`.
    -   Comma Operator `,`:
        -   Comma (`,`) acts as both operator and separator, and its lowest precedence.