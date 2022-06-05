#include <iostream>
#include <thread>
#include <vector>
using namespace std;

#include <stdio.h>
#include <Windows.h>

typedef char tetromin[5][5];
int ScreenWidth = 80;			
int ScreenHeight = 30;			
int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char *pField = nullptr;


void tetrominiDec()
{
// Tetromini
tetromin Tet1 = {
{0,0,0,0,0},
{0,0,0,1,0},
{0,0,2,1,0},
{0,0,1,0,0},
{0,0,0,0,0}
};
tetromin Tet2 = {
{0,0,0,0,0},
{0,0,1,0,0},
{0,1,2,0,0},
{0,0,1,0,0},
{0,0,0,0,0}
};
tetromin Tet3 = {
{0,0,0,0,0},
{0,1,0,0,0},
{0,1,2,0,0},
{0,0,1,0,0},
{0,0,0,0,0}
};
tetromin Tet4 = {
{0,0,0,0,0},
{0,0,1,0,0},
{0,0,2,0,0},
{0,0,1,0,0},
{0,0,1,0,0}
};
tetromin Tet5 = {
{0,0,0,0,0},
{0,0,1,0,0},
{0,0,2,0,0},
{0,0,1,1,0},
{0,0,0,0,0}
};
tetromin Tet6 = {
{0,0,0,0,0},
{0,0,1,0,0},
{0,0,2,0,0},
{0,1,1,0,0},
{0,0,0,0,0}
};
tetromin Tet7 = {
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,2,1,0},
{0,0,1,1,0},
{0,0,0,0,0}
};
}

char *Rotate(tetromin Tet)
{
char (*tetro)[5] = new char[5][5];

for (int x=0; x<5; x++){
    for (int y=0; y<5; y++){
        tetro[y][x] = Tet[4-x][y];
    }
}

for (int x=0; x<5; x++){
    for (int y=0; y<5; y++){
        Tet[x][y] = tetro[x][y];
    }
}

return reinterpret_cast<char *>(Tet);
}


int main(){

wchar_t *screen = new wchar_t[nScreenWidth*nScreenHeight];
	for (int i = 0; i < nScreenWidth*nScreenHeight; i++) screen[i] = L' ';
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwBytesWritten = 0;

pField = new unsigned char[nFieldWidth*nFieldHeight]; // Create play field buffer
	for (int x = 0; x < nFieldWidth; x++) // Board Boundary
		for (int y = 0; y < nFieldHeight; y++)
			pField[y*nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;
        
bool bKey[4];
int nCurrentPiece = 0;
int nCurrentRotation = 0;
int nCurrentX = nFieldWidth / 2;
int nCurrentY = 0;
int nSpeed = 20;
int nSpeedCount = 0;
bool bForceDown = false;
bool bRotateHold = true;
int nPieceCount = 0;
int nScore = 0;
vector<int> vLines;
bool bGameOver = false;


for (int x = 0; x < nFieldWidth; x++)
			for (int y = 0; y < nFieldHeight; y++)
				screen[(y + 2)*nScreenWidth + (x + 2)] = L" ABCDEFG=#"[pField[y*nFieldWidth + x]];
}


