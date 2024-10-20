#include <bits/stdc++.h>
#define PI 3.14159265359
#define rad PI / 180.0
using namespace std;
class Robot {
private:
  float matrix[4][3];
  int speed_motor[4];

public:
  Robot() {
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 3; j++) {
        matrix[i][j] = 0;
      }
      speed_motor[i] = 0;
    }
  }

  void setMatrix() {
    matrix[0][0] = cosf(45.0 * rad); matrix[0][1] = sinf(45.0 * rad); matrix[0][2] = 1;
    matrix[1][0] = cosf(135.0 * rad); matrix[1][1] = sinf(135.0 * rad); matrix[1][2] = 1;
    matrix[2][0] = cosf(225.0 * rad); matrix[2][1] = sinf(225.0 * rad); matrix[2][2] = 1;
    matrix[3][0] = cosf(315.0 * rad); matrix[3][1] = sinf(315.0 * rad); matrix[3][2] = 1;
  }

  void calculateSpeed(int speed_vector[3]) {
    for (int i = 0; i < 4; i++) {
      speed_motor[i] = 0;
      for (int j = 0; j < 3; j++) {
        speed_motor[i] += matrix[i][j] * speed_vector[j];
      }
    }
  }

  void saveToFile(const string& filename) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
      for (int i = 0; i < 4; i++) {
        outFile << "Speed motor " << i << " : " << speed_motor[i] << endl;
      }
      outFile.close();
    } else {
      cout << "Unable to open file for writing." << endl;
    }
  }

  void loadFromFile(const string& filename) {
    ifstream inFile(filename);
    if (inFile.is_open()) {
      for (int i = 0; i < 4; i++) {
        inFile >> speed_motor[i];
      }
      inFile.close();
    } else {
      cout << "Unable to open file for reading." << endl;
    }
  }

  void displaySpeeds() {
    for (int i = 0; i < 4; i++) {
      cout << "Speed motor " << i << " : " << speed_motor[i] << endl;
    }
  }
};

int main() {
  Robot robot;
  robot.setMatrix();

  int input[3];
  cout << "Speed X: ";
  cin >> input[0];
  cout << "Speed Y: ";
  cin >> input[1];
  cout << "Speed Z: ";
  cin >> input[2];
  robot.calculateSpeed(input);
  robot.saveToFile("output.txt");
  robot.loadFromFile("output.txt");
  cout << "Speeds loaded from file:" << endl;
  robot.displaySpeeds();
  return 0;
}
