#include <iostream>
#include <limits>
#include <fstream>
#include <cctype>

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

    public:
        std::string path2File;
        int size{};
        void getPath()    {

            std::string path;
            std::cout << "Podaj sciezke do pliku: " << std::endl;
            std::cin >> path;
            validatePath(path);
            path2File = path;

        }

        void validatePath(std::string path) {

            char answer;
            std::cout << "Czy podana sciezka jest poprawna (t/n)? -> : " + path << std::endl;
            std::cin >> answer;

            if (toupper(answer) == 'N') {
                getPath();
            } else if (toupper(answer) != 'T') {
                std::cout << std::endl;
                validatePath(path);
            }

        }

        int* getTab()   {

            std::ifstream file(path2File);

            if (!file.is_open()) {
                std::cerr << "Nie udalo sie otworzyc pliku " << path2File << std::endl;
                return nullptr;
            }

            if (!(file >> size)) {
                std::cerr << "Nie udalo sie odczytac rozmiaru tablicy z pliku " << path2File << std::endl;
                file.close();
                return nullptr;
            }

            int* array = new int[size];

            for (int i = 0; i < size; ++i) {
                if (!(file >> array[i])) {
                    std::cerr << "Blad wczytywania danych z pliku " << path2File << std::endl;
                    file.close();
                    delete[] array;
                    return nullptr;
                }
            }

            file.close();
            return array;
        }

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

public:
    int* tab{};
    size_t tab_size{};
    Algorithms alg;
    TXTFileWorker txt;

    Menu(Algorithms algorithms, TXTFileWorker TXTFileWorker)  {
        alg = algorithms;
        txt = TXTFileWorker;
    }

    void menuDisplay() {

        std::cout << "1. Testuj " << std::endl;
        std::cout << "2. Wczytaj tablice " << std::endl;
        std::cout << "3. Wyswietl ostatnio wczytana tablice" << std::endl;
        std::cout << "4. Sortuj " << std::endl;
        std::cout << "5. Sprawdz algorytm " << std::endl;
        std::cout << "6. Zakoncz " << std::endl;
        getUserInput();
    }

    void getUserInput() {

        int input = 0;
        std::cout << "Wybierz numer operacji do wykonania: ";

        while (!(std::cin >> input) || input < 0 || input > 6) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Bledne dane. Sprobuj ponownie: ";
        }

        switch (input) {
                case 1 :
                    break;
                case 2 :    txt.getPath(); tab = txt.getTab(); tab_size = txt.size; displayTab(); menuDisplay();
                    break;
                case 3 : displayTab();
                    break;
                case 4 :
                    break;
                case 5 :
                    break;
                case 6 :
                    break;
            }
    }

    void displayTab()   {

        if(tab != nullptr) {
            for (int i = 0; i < tab_size; ++i) {
                std::cout << tab[i] << " ";
            }
            std::cout << std::endl;
        }   else {
            std::cout << "Brak tablicy do wyswietlenia. " << std::endl;
        }
    }

};

int main() {

    Algorithms alg;
    TXTFileWorker txt;
    Menu menu(alg, txt);
    menu.menuDisplay();

    return 0;
}
