run: program
	./program.exe

program: main.cc
	g++ main.cc -o program.exe
	
.PHONY: run