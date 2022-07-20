#ifndef BLOB_H
#define BLOB_H

#include <string>
#include <fstream>

class Blob
{
	public:
	Blob(std::string fileName);
	~Blob();
	void printOutput();

	private:
	int m_numRows;
	int m_numCols;
	char** m_maze;
	int** m_visited;
	int m_startRow;
	int m_startCol;

 	void moveTo(int row, int col);
	void mark(int row, int col);
	bool isWall(int row, int col);
	bool isStreet(int row, int col);
	bool isOff(int row, int col);
	bool isSewer(int row, int col);
	bool isVisited(int row, int col);
};

#endif
