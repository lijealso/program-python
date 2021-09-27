#include <unistd.h>

int main(){
	char c;
	while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q'); // lê 1 byte do standard input para a variável c, quando lê a letra q, sai do programa
return 0;
}
