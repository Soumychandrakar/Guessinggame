# Guessinggame
# Number Guessing Game in C++

A simple single-player number guessing game built using C++, using basic programming concepts.

## Features

* Random number generation between 1 and 100
* Real-time automated feedback ("Too high!" or "Too low!")
* Score tracking (tracks your total number of attempts)
* Input processing loop
* Runs directly on the terminal

## How to Run

Make sure a C++ compiler (like GCC / g++) is installed on your machine.

Clone the repository:

```bash
git clone https://github.com/Soumychandrakar/Guessinggame
```

Go into the project folder:

```bash
cd number-guessing-game
```

Compile the game:

```bash
g++ main.cpp -o guessing_game
```

Run the game:

* **On Windows:**
  ```cmd
  guessing_game.exe
  ```
* **On macOS / Linux:**
  ```bash
  ./guessing_game
  ```

## How to Play

The game will automatically pick a secret number between 1 and 100.

Players input their guess into the terminal window.

For example:

```text
Enter your guess: 50
Too low! Try a higher number.

Enter your guess: 75
Too high! Try a lower number.
```

The game ends when you guess the correct number, and your total score (attempts) will be displayed!

## Concepts Used

This project helped me practice:

* Variables and data types
* Conditional statements (`if`, `else if`, `else`)
* Loops (`do-while` loop)
* Standard input and output stream (`cin`, `cout`)
* Using standard libraries (`<cstdlib>`, `<ctime>`)
* Random seed generation (`srand`, `rand`)

## Future Improvements

* Add standard difficulty levels (Easy, Medium, Hard)
* Add a limited number of lives to increase difficulty
* Create a scoreboard system that saves high scores to a local file
* Build a graphical user interface (GUI)

