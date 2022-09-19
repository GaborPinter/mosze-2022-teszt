#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    // hiányzik az aláhúzás karakter
    std::cout << '1-100 ertekek duplazasa'      // kettõ aposztróf közé kell írni a szöveget, hiányzik a pontos vesszõ
    for (int i = 0;)       // nincs befejezve a for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)     // i<N_ELEMENTS
    {
        std::cout << "Ertek:"   // hiányzik a változó és a pontos vesszõ is
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;      // nincs kezdõérték megadva
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
