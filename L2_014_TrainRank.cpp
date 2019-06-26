// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//   int rear[1000];
//   int max, x, n, count = 0;
//   cin >> n;
//   cin >> rear[0];
//   count++;
//   max = rear[0];
//   for (int i = 0; i < n - 1; i++)
//   {
//     cin >> x;

//     int count2 = 0;
//     while (count2 < count)
//     {
//       if (rear[count2] > max)
//         max = rear[count2];
//       if (x > rear[count2])
//       {
//         count2++;
//         if (count2 == count)
//         {
//           count++;
//           rear[count - 1] = x;
//           break;
//         }
//       }
//       else
//       {

//         rear[count2] = x;
//         break;
//       }
//     }
//     sort(rear, rear + count2);
//   }

//   cout << count;

//   return 0;
// }

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
  set<int> s;
  int n, num;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    if (s.upper_bound(num) != s.end()) //set会按照从小到大排序
    {                                  //num只要大于的不是最后一个元素，就可以插到老队伍里
      //upper_bound求出第一个大于num的下标
      //lower_bound求出第一个大于或等于num的下标
      s.erase(s.upper_bound(num));
    }
    s.insert(num);
  }
  cout << s.size();
}
