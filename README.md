monty

## Compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty
```

# The monty lenguage

- Monty 0.98 is a scripting lenguage that is firts compiled into Monty byte codes "just like Python". It relies on a unique stack, with specific instructions to manipule it. the goal of this project is to create an interpreter for Monty ByteCodes files.

## Monty byte code files 

Files containing Monty byte codes usually have the _.m_ extension. most of the industry uses this standard but it is not required by the specification of the lenguage.
There is not more than one instrution per line. There can be any number of spaces before or after the opcode and its argument.

```
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
```

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

```
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```

### Made by Marlon Diaz.

![This is a image](https://myoctocat.com/assets/images/base-octocat.svg)
