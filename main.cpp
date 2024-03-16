#include <iostream>

class Menu  {

    //interakcja z użytkownikiem
    //wybór komend tak, jak w projekcie z zeszłego semu z javy feedback manager (aplikacja konsolowa)
    //jeden wielki switch, wpisz numer komendy, funkcja sprawdzająca, czy użytkownik wpisał int, jak nie, to prosząca o ponowne wpisanie
    //można zajebać i przerobić kod z tamtego projektu, jak da radę

    /* 1. Przeprowadzenie testów
     * 2. Sprawdzanie poprawności algorytmów:
     *      a) wygeneruj tablicę i wypłnij liczbami losowymi (funkcja random), program powinien zapytać o rozmiar tablicy
     *      b) odczytaj tablicę z pliku -> TXTFileWorker
     * 3. Wyświetlenie ostatnio utworzonej tablicy
     * 4. Uruchomienie wybranego algorytmu na ostatnio wczytanej tablicy i wyświetlenie po sortowaniu */

};

class Algorithms  {

    //implementacje algorytmów
    //jeden algorytm należy zaimplementować z użycim templates (szablonów), aby był wykonywany i na int i na float,
    // proponuję tak zaimplementować insertion sort, bo jest łatwy

    void insertionSort(int n, int tab[])   { }; //*
    void quickSort(int n, int tab[])    { };
    void shellAlgorithm(int n, int tab[])    { };
    void heapSort(int n, int tab[])    { };

    void checkTable(int n, int tab[])  {
        //funkcja sprawdzająca, czy algorytmy działają poprawnie, a więc sprawdzająca czy tablica jest posortowana rosnąco
        //for(int i = 1; i < n; i++)
        //if(tab[i-1] <= tab[i])
    }

};

class TXTFileWorker {

    /* 1. Program ma zapytać o nazwę pliku, z którego ma pobrać dane
    2. W pierwszej linijce w programie jest wielkość tablicy, potem w każdej kolejnej linijce jest jedna liczba z tej tablicy np.
    3
    56
    76
    32
    to tab[3] = [56, 76, 32]
    4. Program ma wyświetlić tablicę przed sortowaniem i po sortowaniu */

};

class Test  {

    /* 1. Badanie czasów sortowania tablic w funkcji ich rozmiaru
     *
     * a) dla 7 rozmiarów tablic dobranych rosnąco i tak, aby wyniki pomiarów były w ms i więcej
     *      np. 10 000, 20 000, 30 000 ... 70 000
     *      po 100 pomiarów dla za każdym razem nowo wygenerowanej losowej tablicy
     *      zmierzyć czasy sortowania dla poszczególnych algorytmów, pomijając czas generacji danych
     *      dane powinny być generowane losowo
     *      wyniki należy uśrednić i na ich podstawie zrobić wykresy np. w pythonie
     *
     * trzeba to będzie rozdzielić wszystko sensowanie na funkcje, żeby nie duplikować kodu
     *
     *
     *
     * 2. Przypadki szczególne
     * To samo, co na górze, ale dla tablic:
     * a) posortowanych rosnąco
     * b) posortowanych malejąco
     * c) tablic posortowanych częściowo
     *  - 33% posortowania
     *  - 66% posortowania
*/
};

int main() {
    return 0;
}
