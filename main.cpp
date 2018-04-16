#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  vector<int> fr;
  vector<int> fr_fr;
  vector<int> res;

  //read data
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int fr_id, m = 0;
    cin >> fr_id;
    cin >> m;
    fr.push_back(fr_id);
    for (int j = 0; j < m; j++)
    {
      int fr_fr_id;
      cin >> fr_fr_id;
      fr_fr.push_back(fr_fr_id);
    }
  }
  //solve
  for (int i = 0; i < fr_fr.size(); i++)
  {
    int fr_fr_id = fr_fr[i];
    bool check = 1;
    for (int j = 0; j < res.size(); j++)
      if (res[j] == fr_fr_id)
      {
        check = 0;
        break;
      }
    if (check)
      for (int j = 0; j < fr.size(); j++)
        if (fr[j] == fr_fr_id)
        {
          check = 0;
          break;
        }
    if (check)
      res.push_back(fr_fr_id);
  }

  cout << res.size();
  return 0;
}