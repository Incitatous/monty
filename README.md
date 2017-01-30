#Monty Interpreter Project

###Description
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

The Monty Interpreter handles the following commands:
- **push**
: inserts an element to the stack
- **pall**
: prints all the values on the stack, starting from the top of the stack
- **pint**
: prints the value at the top of the stack
- **pop**
: removes the top element of the stack
- **swap**
: swaps the top two elements of the stack
- **add**
: adds the top two elements of the stack
- **nop**
: skips - does not do anything
- **sub**
: subtracts the top element of the stack from the second top element of the stack
- **div**
: divides the second top element of the stack by the top element of the stack
- **mul**
: multiplies the second top element of the stack with the top element of the stack
- **mod**
: computes the rest of the division of the second top element of the stack by the top element of the stack


###How to use
Compile with gcc using the following command:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

To execute, enter the following command:
```
./monty [path]
```

e.g. To interprete `01.m` file in `bytecodes` directory, enter:
```
./monty bytecodes/01.m
```


###Examples

The following is how a Monty file should look like:

```
push 1
push 2
pall
```

The previous script will push 1, then 2 to the stack and will print them in reverse order - the last one pushed to the stack first and vice versa. The output will be:

```
2
1
```


###Authors
Monty 0.98 was created by [Kina Lee](https://github.com/kinalee) and [Ian](https://github.com/Incitatous).
