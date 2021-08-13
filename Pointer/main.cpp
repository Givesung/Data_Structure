#include "Student.h"
#include "Maze.h"

int main()
{
    Maze maze;
    maze.init(20,10);
    maze.load("maze.txt");

	return 0;
}
