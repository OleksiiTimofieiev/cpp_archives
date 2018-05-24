#include <ncurses.h>

int		main(void)
{
	// 1.
	
	// initscr(); // create stdstr;
	// raw();
	// printw("Hello world");
	// getch(); // ayatem pause;
	// endwin(); //fre the memory on the init screen;

	// 2.
	// initscr(); // create stdstr;
	// raw();
	// int derp = 4;
	// printw("This is bog standart output %d", derp);
	// addch('a');
	// move(12,13); // mpve the cursor (y, x);

 // 	mvprintw(15, 20, "Movement"); // column ,row;
 // 	mvaddch(12,50,'0');
 // 	getch();
 // 	endwin(); //fre the memory on the init screen;

 	// 3.
	// initscr(); // create stdstr;
	// raw();
	// attron(A_STANDOUT | A_UNDERLINE); // add the attributes;
	// mvprintw(12,40,"asaadf");
	// attroff(A_STANDOUT | A_UNDERLINE);
 // 	getch();
 // 	endwin(); //fre the memory on the init screen; 	

	// 4.
	initscr(); // create stdstr;
	raw();
	attron(A_STANDOUT | A_UNDERLINE); // add the attributes;
	mvprintw(12,40,"asaadf");
	attroff(A_STANDOUT | A_UNDERLINE);
 	getch();
 	endwin(); //fre the memory on the init screen; 	
	return (0);
}