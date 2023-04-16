#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int fib(int N)
{
  if (N <= 1){
    return N;
  }

  int x = 0;
  int y = 1;
  int result;

  for (int i = 2; i <= N; ++i){
    result = x + y;
    x = y;
    y = result;
  }

  return result;
}

int main ()
{
  for (int N=0; N<45; ++N)
  {

    auto start = chrono::high_resolution_clock::now();

    int f = fib(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "F(N)=" << setw(10) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}

