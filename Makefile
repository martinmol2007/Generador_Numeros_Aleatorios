run: program
	./program

program: main.cc
	g++ main.cc -o program
	
.PHONY: run