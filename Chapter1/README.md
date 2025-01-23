# Chapter 1
Compilers Principles, techniques and tools. Notes and study time.
### Exercise 1.1.1
What is the difference between a compiler and a interpreter?
A compiler is a program that can read a program in one language *the source language*  and translate it into an equivalent program in another language *the target language*. An interpreter execute directly the operations specified in the source program on inputs supplied by the user.

### Exercise 1.1.2
What are the advantages of (a) a compiler over an interpreter (b) an interpreter over a compiler:

- The compiler over an interpreter report any errors in the source program during the translation process and is faster than an interpreter.
- An interpreter give better diagnostics than a compiler, because it executes the source program statement by statement. 

### Exercise 1.1.3
What advantages are there to a language-processing system in which the compiler produces assembly language rather than machine language?

- The assembly language produced by the compiler will be easier to produce as output and easier to debug because the final process is an assembler program.

### Exercise 1.1.4
A compiler that translates a high level language into another high-level language is called a source-to-source translator. What advantages are there to using C as a target language for a compiler?

- Using C as a target language for a compiler is as the same level of a compiler, you will get a fast translation and produce fast output.