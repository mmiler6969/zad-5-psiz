#include <iostream>

using namespace std;
    //Struktura kolor�w
    struct kolor
    {
    char R;
    char G;
    char B;
    } kolor;

    //Struktura naglowek
    struct naglowek
    {
    int Size;
    int Width;
    int Height;
    short Planes;
    short BitCount;
    int Compression;
    int SizeImage;
    int XPelsPerMeter;
    int YPelsPerMeter;
    int CUsed;
    int CImportant;
    } zdjecie;

    //Struktura naglowek plik
    struct NaglowekPlik
    {
    short fType;
    int fSize;
    short fReserved1;
    short fReserved2;
    int fOffBits;
    } Plik;
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
