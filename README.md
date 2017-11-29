# ece160-hw06
## Due Tuesday, December 12th at 11:59 PM

This assignment is an extension of [hw05](https://github.com/cooper-ece160/ece160-hw05) with two major additions: 
  * A derived `MastersStudent` class that inherits from `Student` and adds an additional graduation year and a separate vector for post-undergrad grades.
  * A `StudentDatabase` class that contains a map for storing and looking up `Student` objects.

Given the provided `Student.h`, `MastersStudent.h`, `StudentDatabase.h` and `main.cpp`, fill in the empty `.cpp` files for each of the three provided headers that implements the methods declared in each header. You may use your exact `Student.cpp` from [hw05](https://github.com/cooper-ece160/ece160-hw05) if you wish. 


Your project MUST build with the provided `Makefile`, though you may modify the `Makefile` to use
`g++` instead of `clang++` if you don't have clang available locally. 

You should be able to build your project simply by typing `make` at the command line from within the project directory.

When you run `./hw06`, it should produce the exact output in `example_output.txt`.

When I test your program, I will use a different `main.cpp`, so make sure your implementations are generally applicable!

