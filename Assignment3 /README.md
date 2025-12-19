Assignment 3 – Task 1

1. Difference Between a Normal Variable and a Pointer

   -A normal variable stores an actual value in memory.
   -A pointer stores the memory address of another variable.
   -A variable directly holds data.
   -A pointer indirectly accesses data by referencing its address.
   -A variable stores a value and accesses memory directly.
   -A pointer stores a memory address and accesses memory indirectly through dereferencing.

2. Variable Declaration and Definition vs Pointer Declaration and Definition

   Variable declaration & definition: int x = 5;
   Pointer declaration & definition:  int *p;
                                      p = &x;
   & gets the address of a variable
   * accesses the value stored at an address

3. Dereferencing a Pointer

   Dereferencing means accessing or modifying the value stored at the memory address held by a pointer.eg
                    int x = 10;
                    int *p = &x; //This changes the value of x to 20

4. When Pointers Preferred Over Variables

   i.) When functions need to modify original data.
  ii.) When Large data structures are passed efficiently.

  Example 1: Swapping values
  Example 2: Dynamic memory allocation

5. Limitations and Risks of Using Pointers

   i.) Can cause segmentation faults
  ii.) Risk of accessing invalid memory
 iii.) More difficult to debug
  iv.) Improper use may lead to memory leaks

6. Call by Value vs Call by Reference

   i.) Call by Value- A copy of the variable’s value is passed to the function, so the original value is not changed.

           void addOne(int x) {
           x = x + 1;
           }
           int num = 5;
           addOne(num);
           // num is still 5
   
   ii.) Call by Reference-The address of the variable is passed to the function, allowing the original value to be modified.

           void addOne(int *x) {
           *x = *x + 1;
           }
           int num = 5;
           addOne(&num);
           // num is now 6

  7. Practical Scenarios for Call by Value and Call by Reference

      a. When Call by Value Is Preferred
          -When performing calculations that only need the value (e.g., computing an average or square of a number)
          -When working with small variables like integers or floats
         Example use case:
         Passing a student’s marks to calculate a grade without changing the original marks.

      b. When Call by Reference Is Preferred
         -Swapping values between variables
         -Updating variables inside a function
         Example use case:
         Passing a variable to a function that updates a bank account balance.
 
