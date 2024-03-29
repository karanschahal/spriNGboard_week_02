#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int fib(int N)
{
  //////////////////////////////////////////
  // INSERT RECURSIVE IMPLEMENTATION HERE //
  //////////////////////////////////////////
  if (N == 0){
    return 0;
  }
  else if (N == 1){
    return 1;
  }
  else{
    return fib(N-1) + fib(N-2);
  }
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

