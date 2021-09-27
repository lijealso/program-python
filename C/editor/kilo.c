#include <unistd.h>

int main(){
	char c;
	while (read(STDIN_FILENO, &c, 1) == 1); // lê 1 byte do standard input para a variável c
return 0;
}
