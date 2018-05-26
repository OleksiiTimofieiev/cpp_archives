#include <ncurses.h>

int		main(void)
{
	// 1.
	
	// initscr(); // create stdstr (init screen);
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
	initscr(); // create stdstr, create screen, allocate memory;

	refresh() // refreshes the screen to match what is in memory;

	raw();
	
	attron(A_STANDOUT | A_UNDERLINE); // add the attributes;
	mvprintw(12,40,"asaadf");
	attroff(A_STANDOUT | A_UNDERLINE);
 	int c = getch(); // whaits till we press a key, returns int value of that key;

 	endwin(); //fre the memory on the init screen; 	


 	// cursor is used to place a necessary object;
 	// think it a layers;
 	// mpves the cursor to a specified location;
 	int x, y;
 	x = y = 10;
 	move(y,x);
 	printw("smth"); will print at y,x;
 	mvprintw(y,x, something);
 	clear();

 	//clears the screen;
 	clear();

 	WINDOW * newwin(height, width, start_y, start_x); // window pointer -> create a window;
 	refresh();

 	box(win, 0, 0); // set a default box;

 	// customize box;
 	char c = 'g'
 	box(win, (int) c, 103); // border of g

 	int left, right, ... , brc;
 	left = right = 103;
 	wborder(wun, left, right, top, bottom, tlc, trc, blc, brc);

 	mwprintw(win, "this is my box"); // print the war at a specific place;
 	wrefresh(); // refresh only a window specified;

 	cbreak(); // cnrl + c ->exit prog; // has as default;
 	// mask the user input;
 	raw(); // show the input;
 	noecho(); // will not show the user input;






	return (0);
}