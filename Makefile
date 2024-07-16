build: ./*.c
	gcc -g -std=c99 -Wall -Wconversion -Wno-sign-conversion -Werror \
		-o ./pruebas.out ./*.c

valgrind: build
	valgrind --leak-check=full --track-origins=yes --show-reachable=yes \
		./pruebas.out
