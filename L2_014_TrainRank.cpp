#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int rear[1000];
  int max, x, n, count = 0;
  cin >> n;
  cin >> rear[0];
  count++;
  max = rear[0];
  for (int i = 0; i < n - 1; i++)
  {
    cin >> x;
    if (x > max)
    {
      count++;
      rear[count - 1] = x;
    }
    else
    {
      int count2 = 0;
      while (count2 < count)
      {
        if (rear[count2] > max)
          max = rear[count2];
        if (x > rear[count2])
        {
          count2++;
          if (count2 == count)
          {
            count++;
            rear[count - 1] = x;
            break;
          }
        }
        else
        {

          rear[count2] = x;
          break;
        }
      }
    }
  }
  cout << count;

  return 0;
}