#include <ncurses.h>
#include <unistd.h>

#define DELAY 100000

int main(int argc, char *argv[]) {
 int x = 0, y = 0;
 int max_y = 0, max_x = 0;
 int next_x = 0;
 int direction = 1;

 int shot_y;
 int shot_x;

 initscr(); // Initialize the window
	noecho(); // Don't echo any keypresses// 
 curs_set(FALSE); // do not show the cursor;

 // Global var `stdscr` is created by the call to `initscr()`

 	shot_y = 5;
 	shot_x = 5;

 int monstr_y = 5;
 int monstr_x = 40;
 int j = 1;



int shot_distance = 0;


int monstr_moves = 1;

char monstr[4] = {'*', '*', '*', '\0'};
char monstr1[4] = {'*', '*', '*', '\0'};


 while(1) 
 {
	 getmaxyx(stdscr, max_y, max_x);
	 clear(); // cleats all objects on the screen;

	 mvprintw(y, x, "o");
	 mvprintw(shot_y, shot_x, "-");
	 // if (j == 0)
	 // {
	 	// one time;
	 	// mvprintw(shot_y, shot_x, " ");
// 
	 // }
	 if (shot_distance == 20)
	 	mvprintw(shot_y, shot_x, " ");

	 if (monstr_y == shot_y && monstr_x == shot_x - 1)
	 {
	 	mvprintw(monstr_y, monstr_x, "killed");
	 	mvprintw(monstr_y, monstr_x, "      ");
	 	j = 0;
	 	// usleep(60000);

	 // usleep(DELAY);
	}
	else
	{
	 	mvprintw(10,10, "%d", monstr_x);
	 	mvprintw(11,10, "%d", shot_x);

		mvprintw(monstr_y, monstr_x, "%s", monstr);
		mvprintw(monstr_y + 1, monstr_x, "%s", monstr1);
		monstr_x--;

		// monstr_x--;
	}

	 refresh();

	 usleep(DELAY);

	 next_x = x + direction;

	 if (next_x >= max_x || next_x < 0)
	  {
	 direction*= -1;
	 } 
	 else
	 {
	 x+= direction;
	  }
		if (j && shot_distance < 20)
		{
			shot_x += 1; // start coordinates of the shot;
			shot_distance++;
		}
		// else
		// {
		// 	shot_x = -1;
		// 	shot_y = -1;
		// }
		// else
			// shot_x = -1;


 }

 // if (shot_distance < 10)
 // {
 	// shot_y += 1;



	// shot_distance += 1; 	
 // }

 endwin();
}