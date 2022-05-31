#include <iostream>
using namespace std;

wstring tetro[7];








int main()
{
// Create assets
tetro[0].append(L"..X.");
tetro[0].append(L"..X.");
tetro[0].append(L"..X.");
tetro[0].append(L"..X.");

tetro[1].append(L"....");
tetro[1].append(L"..X.");
tetro[1].append(L".XX.");
tetro[1].append(L"..X.");

tetro[2].append(L"..X.");
tetro[2].append(L".XX.");
tetro[2].append(L".X..");
tetro[2].append(L"....");

tetro[3].append(L".X..");
tetro[3].append(L".XX.");
tetro[3].append(L"..X.");
tetro[3].append(L"....");

tetro[4].append(L"....");
tetro[4].append(L".XX.");
tetro[4].append(L".XX.");
tetro[4].append(L"....");

tetro[5].append(L".XX.");
tetro[5].append(L"..X.");
tetro[5].append(L"..X.");
tetro[5].append(L"....");

tetro[6].append(L".XX.");
tetro[6].append(L".X..");
tetro[6].append(L".X..");
tetro[6].append(L"....");


}