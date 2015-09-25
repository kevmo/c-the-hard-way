# Env variables
CFLAGS=-Wall -g

all: ex1

clean:
	rm -f ex1 ex3
	rm -rf *.dSYM

# You can make however many commands you want.
trill:
	echo "BOOM"

# target ex1
ex1:
	echo "You're workin on ex1, son"

# Identify phony targets
.PHONY: all clean trill