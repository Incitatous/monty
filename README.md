#Monty Interpreter Project

###Description
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

The Monty Interpreter handles the following commands:
- .B push
: inserts an element to the stack
- .B pall
: prints all the values on the stack, starting from the top of the stack
- .B pint
: prints the value at the top of the stack
- .B pop
: removes the top element of the stack
- .B swap
: swaps the top two elements of the stack
- .B add
: adds the top two elements of the stack
- .B nop
: skips - does not do anything
- .B sub
: subtracts the top element of the stack from the second top element of the stack
- .B div
: divides the second top element of the stack by the top element of the stack
- .B mul
: multiplies the second top element of the stack with the top element of the stack
- .B mod
: computes the rest of the division of the second top element of the stack by the top element of the stack


###How to use
Compile with gcc using the following command:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
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
- push is a command that pushes to the stack.

```
$ push 1
$ push 2
```
The previous script will push 1, then 2 to the stack.

- pall, will print them in reverse order - the last one pushed to the stack first and vice versa.

```
$ pall
2
1
```


###Authors
Monty 0.98 was created by [Kina Lee](https://github.com/kinalee) and [Ian Cugniere](https://github.com/Incitatous).
