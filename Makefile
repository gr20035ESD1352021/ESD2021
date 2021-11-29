DP = estructuras/pila.c tests/test_pila.c
LIB = -lcunit -o

all: test runTest clean

test: $(DP)
	@gcc $(DP) $(LIB) test

runTest: test
	@./test

clean:
	@rm -f test