#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if (argc < 2) {
		printf("Usage: ./a.out <name>\n");
		exit(0);
	}
	printf("Hello %s!\n", argv[1]);
	return (0);
}
