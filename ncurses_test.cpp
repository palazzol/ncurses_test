#include <ncurses.h>

int main() {
    curses_trace(TRACE_TPUTS | TRACE_DATABASE | TRACE_MOVE | TRACE_CHARPUT);
    initscr();
    cbreak();
    noecho();
    int height, width;
    getmaxyx(stdscr, height, width);
    const char* msg = "Hello, World!";
    int len = 13; // length of "Hello, World!"
    int row = height / 2;
    int col = (width - len) / 2;
    clear();
    mvprintw(row, col, msg);
    refresh();
    getch();
    endwin();
    return 0;
}
