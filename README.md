# Scrabble
Program in C that determines the winner of a short Scrabble-like game.

<img width="681" alt="scrabble" src="https://github.com/cmartinezal/scrabble/assets/84383847/3d5a3b0d-aff8-4968-a243-f18b96960030">

## Problem to solve

In the game of Scrabble, players create words to score points, and the number of points is the sum of the point values of each letter in the word.

<img width="927" alt="Screenshot 2024-01-10 at 18 00 55" src="https://github.com/cmartinezal/scrabble/assets/84383847/704b3664-bd60-4450-a8a7-403765ed7b97">

<br />
<br />

For example, if we wanted to score the word “CODE”, we would note that the ‘C’ is worth 3 points, the ‘O’ is worth 1 point, the ‘D’ is worth 2 points, and the ‘E’ is worth 1 point. Summing these, we get that “CODE” is worth 7 points.
<br />
<br />
In a file called scrabble.c in a folder called scrabble, implement a program in C that determines the winner of a short Scrabble-like game. Your program should prompt for input twice: once for “Player 1” to input their word and once for “Player 2” to input their word. Then, depending on which player scores the most points, your program should either print “Player 1 wins!”, “Player 2 wins!”, or “Tie!” (in the event the two players score equal points).

## Examples
Your program should behave per the examples below.

```sh
$ ./scrabble
Player 1: Question?
Player 2: Question!
Tie!
$ ./scrabble
Player 1: red
Player 2: wheelbarrow
Player 2 wins!
$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!
$ ./scrabble
Player 1: Scrabble
Player 2: wiNNeR
Player 1 wins!
```

## Getting Started

Let's start to use this project.

## Prerequisites

A compiler for C must be installed

## Installation

To execute the project open the terminal and go to the project folder. Then compile the code with a C compiler and execute the file generated:

```sh
make scrabble
./scrabble
```




