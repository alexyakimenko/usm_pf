#include <iostream>

using namespace std;

void print_2d(int *arr, int m, int n)
{
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cout << *(arr + j + i*n) << " ";
      }
      cout << endl;
    }
}

void multiply(int* vec, int* matrix, int* result, int m, int n) {
  int sum;

  for(int i=0; i < n; i++) {
    sum = 0;
    for(int j=0; j < m; j++) {
      sum += *(vec + j) * *(matrix + i + j*m);
    }
    *(result + i) = sum;
  }
}

void input_2d(int *arr, int m, int n) {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> *(arr + j + i*n);
      }
    }
}
 
int main()
{
  int m, n;
  cout << "Set size m, n: \n";
  cin >> m >> n;

  int vec[m];
  cout << "Define vector: \n";
  input_2d((int*) vec, m, 1);

  int matrix[m][n];
  cout << "Define matrix: \n";
  input_2d((int*) matrix, m, n);

  int result[m];

  multiply((int*) vec, (int*) matrix, (int*) result, m, n);

  print_2d((int*) result, m, 1);
  return 0;
}
