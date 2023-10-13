#include <iostream>

using namespace std;

int main() {
  int target;
  cin >> target;

  int arraySize;
  cin >> arraySize;

  int array[arraySize];
  for (int i = 0; i < arraySize; i++) {
    cin >> array[i];
  }

  for (int i = 0; i < arraySize; i++) {
    for (int j = i + 1; j < arraySize; j++) {
      if (array[i] + array[j] == target) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }

  cout << "No two numbers add up to the target." << endl;

  return 0;
}
