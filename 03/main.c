#include <ncurses.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    initscr(); 
    raw();
    cbreak();
    keypad(stdscr, TRUE);

    mvprintw(1,3, "===== Códigos de Caracteres =====");

    mvprintw(3,0, "Para um melhor funcionamento da ferramenta insira apenas uma letra por uso");
    mvprintw(5,0, "Digite um caractere: ");
    refresh(); 

    int caractere = getch();

    if (caractere != ERR) {
        clear();
        mvprintw(1,3, "===== Códigos de Caracteres =====");
        mvprintw(3,0, "Caractere digitado: %c\n", caractere);
        mvprintw(4,0, "Código ASCII: %d\n", caractere);
        mvprintw(5,0, "Código ASCII em hexadecimal: 0x%X\n", caractere);
        refresh(); 
    } else{
        clear();
        mvprintw(3,0, "O caractere inserido é inválido.");
    }

    refresh();
    mvprintw(7,0, "Pressione qualquer tecla para sair.");
    getch(); 

    endwin(); 

    return 0;
}
