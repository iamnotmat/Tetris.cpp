#include <iostream>
using namespace std;

int main(){
int tetromin[5][5] = {
{0,0,0,0,0},
{0,0,1,0,0},
{0,1,2,0,0},
{0,0,1,0,0},
{0,0,0,0,0}
};


for (int i = 0; i < 5; i++)
{
   for (int j = 0; j < 5; j++)
   {
      cout << tetromin[i][j] << " ";
   }
    
   // Newline for new row
   cout << endl;
}




cout << "\n\n";

char (*tetro)[5] = new char[5][5];

for (int x=0; x<5; x++){
    for (int y=0; y<5; y++){
        tetro[y][x] = tetromin[4-x][y];
    }
}

for (int x=0; x<5; x++){
    for (int y=0; y<5; y++){
        tetromin[x][y] = tetro[x][y];
    }
}

for (int i = 0; i < 5; i++)
{
   for (int j = 0; j < 5; j++)
   {
      cout << tetromin[i][j] << " ";
   }
    
   // Newline for new row
   cout << endl;
}




cout << "\n\n";

for (int x=0; x<5; x++){
    for (int y=0; y<5; y++){
        tetro[y][x] = tetromin[4-x][y];
    }
}

for (int x=0; x<5; x++){
    for (int y=0; y<5; y++){
        tetromin[x][y] = tetro[x][y];
    }
}

for (int i = 0; i < 5; i++)
{
   for (int j = 0; j < 5; j++)
   {
      cout << tetromin[i][j] << " ";
   }
    
   // Newline for new row
   cout << endl;
}




cout << "\n\n";

for (int x=0; x<5; x++){
    for (int y=0; y<5; y++){
        tetro[y][x] = tetromin[4-x][y];
    }
}

for (int x=0; x<5; x++){
    for (int y=0; y<5; y++){
        tetromin[x][y] = tetro[x][y];
    }
}

for (int i = 0; i < 5; i++)
{
   for (int j = 0; j < 5; j++)
   {
      cout << tetromin[i][j] << " ";
   }
    
   // Newline for new row
   cout << endl;
}
}