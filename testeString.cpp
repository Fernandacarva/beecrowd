#include <unistd.h>
#include <termios.h>

char lerSN() {
  struct termios term;
  tcgetattr(0, &term); // Obter configurações atuais do terminal

  // Desativar modo canônico e echo
  term.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(0, TCSANOW, &term);

  char ch;

  while (true) {
    // Verificar se há uma tecla pressionada
    if (kbhit()) {
      ch = getch(); // Ler um caractere do buffer

      if (ch == 'S' || ch == 's') { // Verificar se é 'S' ou 's'
        return 'S';
      } else if (ch == 'N' || ch == 'n') { // Verificar se é 'N' ou 'n'
        return 'N';
      }
    }
  }

  // Restaurar configurações do terminal
  term.c_lflag |= (ICANON | ECHO);
  tcsetattr(0, TCSANOW, &term);

  return 0; // Retornar 0 se nenhum caractere válido for pressionado
}
