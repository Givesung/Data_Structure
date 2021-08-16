#include "Student.h"
#include "Maze.h"

int main()
{
    Maze maze;
    maze.init(20,10);
    maze.load("maze.txt");
    maze.print();
    maze.searchExit();

	return 0;
}
