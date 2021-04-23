preprocessor:
	gcc -E mprog.c -o mprog.i #This is the preprocessor output(.i file).
	gcc -E hello.c -o hello.i
	xdg-open mprog.i


compilation:
	gcc -S mprog.c            #This is the compilation output(.s file).
	gcc -S hello.c
	xdg-open mprog.s


assembly:
	gcc -c mprog.c -o mprog.o   #This is the assembly to object code output of the prog-add.c code file(.o file).
	gcc -c hello.c -o hello.o
	xdg-open mprog.o

finalOutput:
	gcc hello.c -o hello
	gcc mprog.c
	./a.out