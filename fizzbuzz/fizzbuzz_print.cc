#include <iostream>

using namespace std;

////////////////////////////////
// ADD FIZZBUZZ FUNCTION HERE //
////////////////////////////////
void fizzbuzz(int n){
  if ((n%3 == 0) && (n%5 == 0)){
    cout << "fizzbuzz" << endl;
  }
  else if (n%3 == 0){
    cout << "fizz" << endl;
  }
  else if (n%5 == 0){
    cout << "buzz" << endl;
  }
  else{
    cout << n << endl;
  }
}
int main ()
{
  for (int n=1; n<=50; ++n)
  {
    /////////////////////////////////////////////
    // ADD CODE TO CALL FIZZBUZZ FUNCTION HERE //
    /////////////////////////////////////////////
    fizzbuzz(n);
  }
}

