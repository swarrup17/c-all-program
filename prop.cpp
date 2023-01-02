#include <iostream>
#include <string>

using namespace std;

const int MAX_OVERS = 150;  // Maximum number of overs in a Test match
const int MAX_WICKETS = 10;  // Maximum number of wickets in a cricket match

// Enum to represent the different formats of cricket
enum Format {
  ODI,
  T20,
  TEST
};

// Structure to represent a single player in the score sheet
struct Player {
  string name;  // Name of the player
  int runs;  // Number of runs scored by the player
  int balls;  // Number of balls faced by the player
  int fours;  // Number of fours scored by the player
  int sixes;  // Number of sixes scored by the player
};

// Structure to represent the score sheet of a cricket match
struct ScoreSheet {
  Format format;  // Format of the match (ODI, T20, or Test)
  string team_name;  // Name of the team
  int overs;  // Number of overs played
  int wickets;  // Number of wickets fallen
  int runs;  // Number of runs scored
  int extras;  // Number of extras conceded
  Player players[MAX_WICKETS];  // Array of players in the team
};

int main() {
  ScoreSheet score_sheet;  // Create a score sheet object

  // Input the format of the match
  cout << "Enter the format of the match (0 for ODI, 1 for T20, 2 for Test): ";
  int format;
  cin >> format;
  score_sheet.format = static_cast<Format>(format);

  // Input the team name
  cout << "Enter the name of the team: ";
  cin.ignore();  // Ignore the newline character from the previous input
  getline(cin, score_sheet.team_name);

  // Input the number of overs played
  cout << "Enter the number of overs played: ";
  cin >> score_sheet.overs;

  // Input the number of wickets fallen
  cout << "Enter the number of wickets fallen: ";
  cin >> score_sheet.wickets;

  // Input the number of runs scored
  cout << "Enter the number of runs scored: ";
  cin >> score_sheet.runs;

  // Input the number of extras conceded
  cout << "Enter the number of extras conceded: ";
  cin >> score_sheet.extras;

  // Input the details of the players
  for (int i = 0; i < score_sheet.wickets; i++) {
    cout << "Enter the name of player " << i + 1 << ": ";
    cin >> score_sheet.players[i].name;

    cout << "Enter the runs scored by player " << i + 1 << ": ";
    cin >> score_sheet.players[i].runs;

    cout << "Enter the balls faced by player " << i + 1 << ": ";
    cin >> score_sheet.players[i].balls;

    cout << "Enter the number of four scored by player " << i + 1 << ": ";
    cin >> score_sheet.players[i].fours;

    cout << "Enter the number of sixes scored by player " << i + 1 << ": ";
    cin >> score_sheet.players[i].sixes;
  }

  // Output the score sheet
  cout << endl << "Score sheet:" << endl;
  cout << "Team: " << score_sheet.team_name << endl;
  cout << "Overs: " << score_sheet.overs << endl;
  cout << "Wickets: " << score_sheet.wickets<<endl;
  return 0;
}
h
