#include <iostream>

using namespace std;

struct PlikNaglowek {
    short Type;
    int Size;
    short Reserved1;
    short Reserved2;
    int OffBits;
} File;

struct ZdjecieNaglowek {
    int Size;
    int Width;
    int Height;
    short Planes;
    short BitCount;
    int Compression;
    int SizeImage;
    int XPelsPerMeter;
    int YPelsPerMeter;
    int ClrUsed;
    int ClrImportant;
} Picture;

struct KoloryRGB {
    char R;
    char G;
    char B;
} Rgb;
int main()
{
       //Otwieranie pliku
    FILE* f = fopen(argv[], "rb");
    if (f == nullptr){std::cout << "Error\n";}
    else{std::cout << "File opened\n";}
    return 0;
}
