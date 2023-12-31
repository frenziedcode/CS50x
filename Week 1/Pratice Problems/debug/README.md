# Debug

## Learning Goals

Become familiar with C syntax
Learn what C compiler error messages mean
Get practice debugging

## Background

There are two kinds of errors that can occur when writing a program. The first errors you are likely to encounter are syntactical errors. In addition to syntactical errors, there can also be logical errors, which we’ll take a look at soon.

In computer science, syntax is important for a computer to understand what you are telling it to do. Each programming language has its own syntactical rules, which include the combination of both words and punctuation.

This lab starts with distribution code which has several syntactical errors. The idea is for you to try to compile (`make`) the program, learn to interpret the rather cryptic error messages output by the compiler, and debug the program.

## Getting Started

Log into `cs50.dev` using your GitHub account.
Click inside the terminal window and execute `cd`.
At the `$` prompt, type `mkdir debug`
Now execute `cd debug`
Then copy and paste `wget https://cdn.cs50.net/2022/fall/labs/1/debug.c` into your terminal to download this lab’s distribution code.
Now try compiling this program, by typing `make debug` and see what happens!
You most likely see an error that says: `debug.c:9:5: error: use of undeclared identifier 'name'`
This means there is an error that has something to do with an “undeclared identifier”, on line 9. Fix this bug, and then try to compile again. Keep in mind that debugging is an iterative process. You may need to fix an error, compile, then fix another error, compile again, multiple times!

## Thought Question

Why do you think C (as well as other programming languages) have such specific rules regarding syntax?

## How to Test Your Code

Your program should behave per the examples below.

`debug/ $ ./debug
What is your name? Carter
Where do you live? Cambridge
Hello, Carter, from Cambridge!`

`debug/ $ ./debug
What is your name? Margaret
Where do you live? New York
Hello, Margaret, from New York!`

You can check your code using check50, a program that CS50 will use to test your code when you submit, by typing in the following at the $ prompt. But be sure to test it yourself as well!

`check50 cs50/labs/2023/x/debug`

Green smilies mean your program has passed a test! Red frownies will indicate your program output something unexpected. Visit the URL that check50 outputs to see the input check50 handed to your program, what output it expected, and what output your program actually gave.

To evaluate that the style of your code (indentations and spacing) is correct, type in the following at the $ prompt.

`style50 debug.c`

## How to Submit

No need to submit! This is an optional practice problem.
