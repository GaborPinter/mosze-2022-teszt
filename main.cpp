#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    // hi�nyzik az al�h�z�s karakter
    std::cout << '1-100 ertekek duplazasa'      // kett� aposztr�f k�z� kell �rni a sz�veget, hi�nyzik a pontos vessz�
    for (int i = 0;)       // nincs befejezve a for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)     // i<N_ELEMENTS
    {
        std::cout << "Ertek:"   // hi�nyzik a v�ltoz� �s a pontos vessz� is
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;      // nincs kezd��rt�k megadva
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
