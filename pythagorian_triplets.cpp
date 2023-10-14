Pythagorian Triplets in array //

#include <bits/stdc++.h>
using namespace std;

int main ()
{

  int arr[] = { 3, 8, 4, 10, 6, 5, 12, 13, 27 };	
  int N = sizeof (arr) / sizeof (arr[0]);	
  int a, b, c;
  for (int i = 0; i < N - 2; i++)
    {
      for (int j = i + 1; j < N - 1; j++)
	  {
	    for (int k = i + 2; k < N; k++)
	    {
	      a = arr[i];
	      b = arr[j];
	      c = arr[k];
	      if (a * a + b * b == c * c)
		      cout << a << " " << b << " " << c << endl;
	    }
	  }
    }
  return 0;
}
