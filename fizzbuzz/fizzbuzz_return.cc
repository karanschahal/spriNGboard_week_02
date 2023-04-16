#include <iostream>
#include <string>

using namespace std;

////////////////////////////////
// ADD FIZZBUZZ FUNCTION HERE //
////////////////////////////////

string fizzbuzz(int n){
  string x;
  if ((n%3 == 0) && (n%5 == 0)){
    x = "fizzbuzz";
  }
  else if (n%3 == 0){
    x = "fizz";
  }
  else if (n%5 == 0){
    x = "buzz";
  }
  else{
    x = to_string(n);
  }
  return x;
}

int main ()
{
  for (int n=1; n<=50; ++n)
  {
    ////////////////////////////////////////
    // ADD CODE TO CALL FIZZBUZZ FUNCTION //
    // AND PRINT THE RETURNED VALUE HERE  //
    ////////////////////////////////////////
    cout << fizzbuzz(n) << endl;
  }
}

