// requires /std:c++latest
#include <ranges>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

int main()
{
	std::vector<int> vec = { 12,13,3,6,8,23,2,9 };
	//*******ZADANIE 1**********
	// Posortuj powy�szy wektor a nast�pnie go wy�wietl korzystaj�c z zakres�w.


	//*******ZADANIE 2**********
	//U�ywaj�c zakres�w, z podanych element�w wektora, 
	//wy�wietl liczby nieparzyste podniesione do trzeciej pot�gi w odwrotenej kolejno�ci.
	std::cout << "\n\n";

	//*******ZADANIE 3**********
	//Przy pomocy zakres�w, odrzu� dwa pierwsze elementy wektora , a nast�pnie wy�wietl parzyste liczby pocz�wszy wi�ksze od 7.
	std::cout << "\n\n";

	//*******ZADANIE 4**********
	//Wygeneruj liczby od 0 do 100 i wy�wietl pi�� ostatnich liczb podzielnych przez 7
	std::cout << "\n\n";


	//*******ZADANIE 5**********
	//Wygeneruj liczby od 24 do 67. Wy�wietl 4 pierwsze liczby liczby podniesione do kwadratu.
	std::cout << "\n\n";


}
// ustawi� the lastest version
//cpp 20 nie wystarczy