# Soccer Team Manager

A simple C++ application for managing a soccer team’s data. This program allows users to load player information from a file, display the team's roster, view player statistics, calculate total goals, and identify the team's top performers.

## Features

- Load player information from a file.
- Display the full roster with player numbers, names, and goals scored.
- Show a table of player statistics.
- Calculate and display the total goals scored by the team.
- Identify the team’s star player(s) based on goals scored.

## Getting Started

### Prerequisites

To run this program, you need:

- A C++ compiler (e.g., g++, Visual Studio, or Xcode).
- A properly formatted text file containing the team’s information.

### Input File Format

The input file should contain the following information for each player, separated by spaces:

```
<playerName> <playerNumber> <goalsScored>
```

Example:

```
Alice 7 10
Bob 10 15
Charlie 4 8
Diana 11 6
Edward 22 4
```

## How to Use

1. **Run the program** and follow the menu prompts.

2. **Menu Options:**
   - **1:** Load the team's information from a file.
   - **2:** Display the team's roster.
   - **3:** Show a table with player numbers, names, and goals scored.
   - **4:** Display the total goals scored by the team.
   - **5:** Display the team’s star player(s) with the most goals.
   - **6:** Exit the program.

3. Enter the correct file name when prompted to load data.

## Example Usage

1. Place the player data file (e.g., `team.txt`) in the same directory as the program.
2. Run the program and load the file by selecting option `1` and entering `team.txt`.
3. Use the other menu options to explore the team's data.

## File Structure

```plaintext
soccer_team_manager/
├── soccer_team_manager.cpp  # Source code
├── team.txt                 # Example input file
```

## Limitations

- The program is limited to managing a maximum of 11 players.
- The input file must be correctly formatted.
- The program does not support editing player data after loading.

  
