#include <ncurses.h>
#include <stdio.h>

int main() {
    initscr();
    raw();
    keypad(stdscr, TRUE);

    double nota1, nota2;

    curs_set(1); 
    mvprintw(1,3, "===== Nota Méida =====");
    mvprintw(3,0, "Para um funcionamento adequado da ferramenta utilize apenas algarismos. \nNúmeros não inteiros devem ser inseridos com .");

    mvprintw(6, 0, "Digite a primeira nota do aluno: ");
    scanw("%lf", &nota1);
    
    mvprintw(8, 0, "Digite a segundo nota do aluno: ");
    scanw("%lf", &nota2);
    
    curs_set(0);
    double media = (nota1 + nota2) / 2.0;

    clear();
    mvprintw(1,3, "===== Nota Méida =====");
    mvprintw(3, 0, "A média entre as notas do aluno é: %.2lf pontos", media);

    refresh();
    mvprintw(5, 0, "Pressione qualquer tecla para sair.");
    getch();

    endwin();

    return 0;
}
