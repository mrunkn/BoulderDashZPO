Sprawozdanie 1

# Boulder Dash

## Wstęp

Boulder Dash gra komputerowa w której celem jest zdobycie odpowiedniej liczby diamentów i odnalezienie wyjścia. Pierwsza wersja została wydana w 1984 i przeznaczona była m.in. na platformy Apple II, MSX oraz domowe komputery ZX Spectrum, Commodore 64 czy Atari 400/800, a później także na: NES, Acorn Electron, PC oraz Amstrad CPC.

## Opis funkcjonalny

- ruch i akcje wykonywane przez gracza (poruszanie, zbieranie przedmiotów, przesuwanie obiektow)
- zmiana położenia kamieni
- akcja wywołana po zniszczeniu motyla (zmiana obiektów w diamenty)
- akcja wywołana po zniszczeniu ducha (wybuch)
- zmiana poziomu lawy
- akcja po uruchomieniu "magicznego sznurka" (zamiana lawy w diamenty lub kamienie)
- "oczyszczenie" planszy z trawy
- akcja wykonywana przez duffiego
- akcja po dotknięciu czaszki (nieruchoma czaszka, która po dotknięciu, zabija bohatera)
- akcja bomby
- aktualizacja czasu
- aktualizacja liczby zdobytych punktów
- aktualizacja liczby diamentow
- odkrycie wyjścia
- wyswietlenie informacji o otwartym wyjściu

## Specjalizacja funkcji

1. Ruch i akcje wykonywane przez gracza: gracz moze poruszać się w prawo, lewo, góre i dół oraz wywoływać akcję na obiektach (np. przesuwanie kamieni, zbieranie diamentów)
2. Akcja wywołana po zniszczeniu motyla: zniszczenie motyla za pomocą kamienia powoduje pojawienie się dodatkowych diamentów (9).
3. Akcja wywołana po zniszczeniu ducha: zniszczenie ducha wywołuje wybuch który niszczy obiekty w zasięgu 6 pól.
4. Zmiana poziomu lawy: lawa rośnie wraz z upływem czasu jeśli uda się ja zablokować zamienia się w diamenty.
5. "Oczyszczenie" planszy z trawy: przejście gracza "oczyszcza teren z trawy".
6. Akcja bomby: zebranie bomby aktywuje wybuch który potrafi niszczyc mury.
7. Aktualizacja czasu: w górnej części ekranu wyświetlany jest zegar odliczający pozostały czas na przejście poziomu.
8. Aktualizacja liczby diamentów: w górnej części ekranu wyświetlany jest licznik diamentów który aktualizowany każdorazowo po zebraniu diamentu.
9. Odkrycie wyjścia: uzyskanie odpowiedniej liczby diamentów (zależnej od poziomu) powoduje otwarcie wyjścia konczącego poziom.


## Projekt interfejsu

```
----------------------------------------------------------
|Diamenty: 002       WYJŚCIE OTWARTE            Czas: 100|
|####################################DD##################|
|##   ##### #######D###################D##D#####D########|
|###  @    O  ######################DD###################|
|################O##################DD###################|
|###########O########################D###################|
|#################  ? #########################!#########|
|############################O###########################|
|######D#########D#######################################|
|##############D#####   #######!################!########|
|################### M  #################################|
|#######################################################E|
----------------------------------------------------------

@ - gracz
O - kamień
M - motyl
! - bomba
? - duch
# (zielony) - trawa
# (brązowy) - mur
E - wyjście
```