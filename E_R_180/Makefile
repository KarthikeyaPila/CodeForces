# Makefile

# List of problem files
PROBLEMS := 1 2 3 4 5 6

# Default target: build and run all
all: $(PROBLEMS:%=run_%)

# Rule to build and run each problem
run_%: problem_%.c
	@gcc problem_$*.c -o bin_$* && ./bin_$*

# Optional cleanup target
clean:
	@rm -f bin_*

