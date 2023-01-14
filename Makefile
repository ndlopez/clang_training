MAIN = main_fibo
HEADER_DEFINITIONS = fibo
CC = g++ -std=c++11
COMPILE = -c
EXE = $(MAIN)
OPTIMIZE = -0s
SHELL = /bin/bash
ARGS = 20
all: link
@echo "Executing ..."
@echo ">>>> O U T P U T <<<<"
@$(SHELL) -c './$(EXE) $(ARGS)'
link: compile
@echo -n "Linking ..."
@$(SHELL) -c '$(CC) -o $(EXE) *.o'
compile: $(MAIN).cpp $(HEADER_DEFINITIONS).cpp $(HEADER_DEFINITIONS).h
@echo -n "Compiling ..."
@$(SHELL) -c '$(CC) $(OPTIMIZE) $(COMPILE) $^'
clean:
@echo "Cleaning ..."
@$(SHELL) -c 'rm -f *~ *.o $(EXE)'
