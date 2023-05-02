calculator: calculator.o stack.o
        gcc calculator.o stack.o -o calculator
calculator.o: calculator.c stack.h
        gcc -c calculator.c
stack.o: stack.c stack.h
        gcc -c stack.c
