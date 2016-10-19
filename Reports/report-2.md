Sprawozdanie 2

# Boulder Dash

## Projekt klas

```
Game
| - player : Player
| - objects : Vector<GameObject>
| - state : State
| - startLoop() : void
| + Start() : void

Player
| - x : int
| - y : int
| - lastX : int
| - last Y : int
| - updated : bool
| - cachePosition() : void
| + getX() : int
| + getY() : int
| + moveRight() : void
| + moveDown() : void
| + moveUp() : void
| + moveLeft() : void
| + render() : void

State
| - diamonds : int
| - time : int // jeszcze nie zaimplementowane
| + updateDiamonds() : void
| + updateTime() : void // jeszcze nie zaimplementowane

GameObject
| # x : int
| # y : int
| + render() : virtual void
| + action(State) : virtual void
| + getX() : int
| + getY() : int

Diamond : GameObject
| + Diamond (int, int)
| + render() : void
| + action() : void

... pozostałe obiekty aktywne (kamienie, duchy, etc.)
będące klasami pochodnymi klasy GameObject nie zostały jeszcze zaimplementowane

```

## Opis funkcji

- `Game::start()` : funkcja uruchamiająca grę.
  W przyszłości zostanie podzielona na rózne dopowiedzialności, obecnie tworzy mapę startową, odpowiada za alokacje pamięci na potrzeby obiektów `GameObject`, `Player` i `State` oraz uruchamia główną pętle `Game::startLoop()`.

- `Game::startLoop` : funkcja uruchamiająca główną pętle, przechwytywane są w niej kliknięcia klawiszy oraz porównywane są koordynaty gracza i obiektów aktywnych,
  jeśli się pokrywają wywoływana jest jakaś akcja zmieniająca stan gry.

- `Player::render()` : odpowiada za umieszczenie w odpowiednim miejscu na mapie ikony gracza (@). Wykonuje swoje zadanie tylko wtedy gdy obiekt gracza został zaktualizowany.

- `GameObject::action()`: funkcja wywolująca określoną akcję (nadpisana w kazdym z obiektów aktywnych)