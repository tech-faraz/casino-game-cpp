# 🎰 Casino Number Guessing Game (C++)

## 📌 Description

This is a console-based Casino Number Guessing Game developed in C++.
The player can buy coins, place bets, and guess numbers to win rewards.

The game includes multiple difficulty levels and a coin system to simulate a real casino experience.

---

## 🎮 Features

* 🎯 Number guessing game
* 💰 Coin system (earn & spend coins)
* 🛒 Buy coins using packs or currency
* 🎚️ Multiple difficulty levels:

  * Easy (1–3)
  * Medium (1–5)
  * Hard (1–10)
* 🎲 Random number generation
* 🎉 Win/Loss animations (ASCII art)

---

## 🕹️ How to Play

1. Run the program
2. Choose an option from menu:

   * Play Game
   * Buy Coins
   * View Rules
3. Select difficulty level
4. Enter your bet amount
5. Guess the correct number
6. Win coins if your guess is correct 🎉

---

## ⚙️ Game Rules

### 🔴 Hard Level

* Guess number between **1–10**
* Minimum bet: **1000 coins**
* Winning reward = **bet × (guess + 10)**

### 🟡 Medium Level

* Guess number between **1–5**
* Minimum bet: **500 coins**
* Winning reward = **bet × (guess + 5)**

### 🟢 Easy Level

* Guess number between **1–3**
* Minimum bet: **> 0 coins**
* Winning reward = **bet × 5**

---

## ▶️ How to Run

### 🔹 Using g++

```bash
g++ casino_game.cpp -o game
./game
```

### 🔹 Using IDE

* Open in Dev C++, CodeBlocks, or VS Code
* Compile and run

---

## 🛠️ Technologies Used

* C++
* Standard Library (`iostream`, `cstdlib`, `ctime`)

---

## 📂 Project Structure

* `casino_game.cpp` → Main source code

---

## 🚀 Future Improvements

* Add player profile system
* Save progress using file handling
* Improve UI design
* Add more casino games

---

## 👨‍💻 Author

Faraz Hussain

---

⭐ *Keep learning and building projects!*
