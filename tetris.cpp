#include <iostream>
using namespace std;

typedef char tetromin[5][5];

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

char *Rotate(char Tet[5][5])
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



