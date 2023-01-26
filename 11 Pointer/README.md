## 9 - Pointer (Important Topic):

**"Pointers are variables that store the address of other variables."** <br>
Getting started with the Pointers.Every variable is stored in the memory and each memory location has its own memory address. It enables us to pass variables by reference.

**`&` Operator:** It gives the address of the variable.

**`*` Operator:** It gives the value stored at the address, i.e dereferences the value stored at the address
```
Example:
void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}
```