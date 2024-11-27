#include <ncurses.h>
#include <stdio.h>

int main() {
	// Initialize ncurses
	if (initscr() == NULL) {
		wprintw(stderr,"fatal error: could not initialize ncurses");
	} 
	else {
		initscr();
	}
	int max_x, max_y;
	getmaxyx(stdscr, max_y, max_x);
	if (max_x <= 80 || max_y <= 25) {
		wprintw(stderr, "Term size too small (80x25 needed, %ix%i)", max_x, max_y);
	}
}




