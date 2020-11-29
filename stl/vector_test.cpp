#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vi = { 1, 1, 2, 3, 5, 8 };
  for ( const auto& e : vi )
    cout << e << endl;
  return 0;
}
