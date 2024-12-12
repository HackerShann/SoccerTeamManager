#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

const int MAX_PLAYERS = 11;

struct SoccerPlayer {
    string playerName;
    int playerNumber;
    int goalsScored;
};

void loadTeamInfo(SoccerPlayer team[]) {
    string fileName;
    cout << "Enter the filename to load team's information: ";
    cin >> fileName;

    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cout << "Unable to open file. Please check the filename and try again." << endl;
        return;
    }

    int i = 0;
    string playerName;
    int playerNumber, goalsScored;

    while (i < MAX_PLAYERS && inputFile >> playerName >> playerNumber >> goalsScored) {
        team[i].playerName = playerName;
        team[i].playerNumber = playerNumber;
        team[i].goalsScored = goalsScored;
        ++i;
    }

    inputFile.close();
    cout << "Team information loaded successfully!" << endl;
}

void displayRoster(SoccerPlayer team[]) {
    cout << "Team's Roster:" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Player Number\tPlayer Name\tGoals Scored" << endl;
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < MAX_PLAYERS; ++i) {
        cout << team[i].playerNumber << "\t\t" << team[i].playerName << "\t\t" << team[i].goalsScored << endl;
    }

    cout << "---------------------------------------------" << endl;
}

void displayPointsTable(SoccerPlayer team[]) {
    cout << "Player Number\tPlayer Name\tGoals Scored" << endl;
    for (int i = 0; i < MAX_PLAYERS; ++i) {
        cout << team[i].playerNumber << "\t\t" << team[i].playerName << "\t\t" << team[i].goalsScored << endl;
    }
}

void displayTotalGoals(SoccerPlayer team[]) {
    int totalGoals = 0;
    for (int i = 0; i < MAX_PLAYERS; ++i) {
        totalGoals += team[i].goalsScored;
    }

    cout << "Total goals scored by the team: " << totalGoals << endl;
}

void displayTeamStar(SoccerPlayer team[]) {
    int maxPoints = 0;
    cout << "Team star(s) with the most points: " << endl;
    for (int i = 0; i < MAX_PLAYERS; ++i) {
        if (team[i].goalsScored > maxPoints) {
            maxPoints = team[i].goalsScored;
        }
    }

    for (int i = 0; i < MAX_PLAYERS; ++i) {
        if (team[i].goalsScored == maxPoints) {
            cout << team[i].playerName << " - " << team[i].goalsScored << " goals" << endl;
        }
    }
}

int main() {
    SoccerPlayer team[MAX_PLAYERS];
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Load team's information from a file" << endl;
        cout << "2. Display team's roster" << endl;
        cout << "3. Show table with player's number, name, and points scored" << endl;
        cout << "4. Display team's total goals" << endl;
        cout << "5. Display team's star(s)" << endl;
        cout << "6. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            loadTeamInfo(team);
            break;
        case 2:
            displayRoster(team);
            break;
        case 3:
            displayPointsTable(team);
            break;
        case 4:
            displayTotalGoals(team);
            break;
        case 5:
            displayTeamStar(team);
            break;
        case 6:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
            break;
        }
    } while (choice != 6);

    return 0;
}
