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

    FILE* f = fopen(argv[], "rb");
    if (f == nullptr){std::cout << "Error\n";}
    else{std::cout << "File opened\n";}
    std::cout << "Informacje o pliku:\n";


    fread(&Plik.fType, sizeof(Plik.fType), 1, f);
    std::cout << "Typ: " << Plik.fType << "\n";
    fread(&Plik.fSize, sizeof(Plik.fSize), 1, f);
    std::cout << "Rozmiar: " << Plik.fSize << "\n";
    fread(&Plik.fReserved1, sizeof(Plik.fReserved1), 1, f);
    std::cout << "Rezerwacja 1: " << Plik.fReserved1 << "\n";
    fread(&Plik.fReserved2, sizeof(Plik.fReserved2), 1, f);
    std::cout << "Rezerwacja 2: " << Plik.fReserved2 << "\n";
    fread(&Plik.fOffBits, sizeof(Plik.fOffBits), 1, f);
    std::cout << "Pozycja danych: " << Plik.fOffBits << "\n";
    fseek(f, 14, SEEK_SET);
    fread(&zdjecie.Size, sizeof(zdjecie.Size), 1, f);
    std::cout << "Naglowek wielkosc: " << zdjecie.Size << "\n";
    fread(&zdjecie.Width, sizeof(zdjecie.Width), 1, f);
    std::cout << "Szerokosc: " << zdjecie.Width << "\n";
    fread(&zdjecie.Height, sizeof(zdjecie.Height), 1, f);
    std::cout << "Wysokosc: " << zdjecie.Height << "\n";
    fread(&zdjecie.Planes, sizeof(zdjecie.Planes), 1, f);
    std::cout << "Liczba platow: " << zdjecie.Planes << "\n";
    fread(&zdjecie.BitCount, sizeof(zdjecie.BitCount), 1, f);
    std::cout << "Bitow x piksel: " << zdjecie.BitCount << "\n";
    fread(&zdjecie.Compression, sizeof(zdjecie.Compression), 1, f);
    std::cout << "Kompresja: " << zdjecie.Compression << "\n";
    fread(&zdjecie.SizeImage, sizeof(zdjecie.SizeImage), 1, f);
    std::cout << "Rozmiar rys: " << zdjecie.SizeImage << "\n";
    fread(&zdjecie.XPelsPerMeter, sizeof(zdjecie.XPelsPerMeter), 1, f);
    std::cout << "Rozdzielczosc X: " << zdjecie.XPelsPerMeter << "\n";
    fread(&zdjecie.YPelsPerMeter, sizeof(zdjecie.YPelsPerMeter), 1, f);
    std::cout << "Rozdzielczosc Y: " << zdjecie.YPelsPerMeter << "\n";
    fread(&zdjecie.CUsed, sizeof(zdjecie.CUsed), 1, f);
    std::cout << "Liczba kolorow: " << zdjecie.CUsed << "\n";
    fread(&zdjecie.CImportant, sizeof(zdjecie.CImportant), 1, f);
    std::cout << "Kolory w palecie: " << zdjecie.CImportant << "\n";
    return 0;
}
