// demonstrates using a multidimensional array
// Kaila Anderson
// December 4,2022

#include <iostream>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::vector;

const int mazeLength = 6; 
const int mazeWidth = 6;

void outputMaze(bool[][mazeWidth], int mazeLength);

int main() {
	int mouseX = 0;
	int mouseY = 0;
	char choice;
	char move;

	bool maze[mazeLength][mazeWidth];
	maze[0][0] = true;

	cout << "(Y) to make new move, (Q) to quit: ";
	cin >> choice;

	while (choice == 'y' || choice != 'q') {
		cout << "what move would you like to make?(u/d/r/l)";
		cin >> move;

		switch (move) {
		case 'u':
			mouseY -= 1;
			maze[mouseX][mouseY] = true;
			outputMaze(maze, mazeLength);
			break;
		case 'd':
			mouseY += 1;
			maze[mouseX][mouseY] = true;
			outputMaze(maze, mazeLength);
			break;
		case 'r':
			mouseX += 1;
			maze[mouseX][mouseY] = true;
			outputMaze(maze, mazeLength);
			break;
		case 'l':
			mouseX -= 1;
			maze[mouseX][mouseY] = true;
			outputMaze(maze, mazeLength);
			break;
		}
		cout << "(Y) to make new move, (Q) to quit: ";
		cin >> choice;
	}

}

void outputMaze(bool maze[][mazeWidth], int mazeLength) {
	for (int j = 0; j < mazeWidth; ++j) {
		for (int i = 0; i < mazeLength; ++i) {
			if (maze[i][j] == true)
				cout << "* ";
			else
				cout << "  ";
		}
	cout << endl;
	}
}

