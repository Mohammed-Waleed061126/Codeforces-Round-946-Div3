#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <fstream>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define imp cout<<"-1"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
// ----------------------------Functions---------------------------- //
ll string_to_num(char c, string word){
  ll val = 0;
  if (c == 'x')
  {
    for (ll i = 0; i < word.size(); i++)
    {
      val *= 10;
      val += word[i]-48;
    }
  }
  else
  {
    val += c-48;
  }
  return val;
}
bool isPrime(ll k)
{
  if (k == 1)
  {
    return false;
  }
  for (ll i = 2; i * i <= k; i++)
  {
    if (k % i == 0)
    {
      return false;
    }
  }
  return true;
}
// ----------------------------------------------------------------- //
void solution(){
  ll size;
  string word, w = "", res = "";
  vector <pair<char,char>> v;
  cin >> size >> word;
  ll freq[26] = {0};
  for (ll i = 0; i < size; i++)
  {
    freq[word[i]-97]++;
  }
  for (ll i = 0; i < 26; i++)
  {
    if (freq[i])
    {
      w += (char)(i+97);
    }
  }
  for (ll i = 0; i < w.size(); i++)
  {
    v.push_back({w[i],w[w.size()-1-i]});
  }
  for (ll i = 0; i < size; i++)
  {
    for (ll j = 0; j < v.size(); j++)
    {
      if (word[i] == v[j].first)
      {
        res += v[j].second;
        break;
      }
    }
  }
  cout << res << el;
}

int main(){ MW_HY
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int ntimes  = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}