#include <bits/stdc++.h>
#define Boaster                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;
#define ll long long
#define mod 1000000007
#define MOD 998244353998244353

#define  vi         vector<int>
#define  vll        vector<ll>
#define  pb         push_back
#define  pf         push_front
#define  sz(a)      (int)a.size()
#define  pi         acos(-1.0)
#define  cos(a)     cos(a*pi/180)
#define  sin(a)     sin(a*pi/180)
#define  tan(a)     tan(a*pi/180)
#define  cosi(a)    acos(a)/(pi/180)
#define  sini(a)    asin(a)/(pi/180)
#define  tani(a)    atan(a)/(pi/180)
#define  rev(v)     reverse(v.begin(),v.end())
#define  srt(v)     sort(v.begin(),v.end())
#define all(x)      x.begin(), x.end()
#define  pit(x)    fixed<<setprecision(x)
#define  mem(a,x)   memset(a,x,sizeof(a))
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define countv(v,a) count(v.begin(),v.end(),a)
#define endl '\n'
#define pll pair<ll,ll>
#define F first
#define S second
const ll MX = 1e18;

ll gcd(ll a, ll b) {while (b) {ll x = a % b; a = b; b = x;} return a;}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
ll pw(ll n, ll k) {ll ans = 1; assert(k >= 0); n %= mod; while (k > 0) {if (k & 1) ans = (ans * n) % mod; n = (n * n) % mod; k >>= 1;} return ans % mod;}
ll multiply(ll x, ll y) {ll ret = ((x % MOD) * (y % MOD)) % MOD; if (ret < 0) {ret += MOD;} return ret;}

bool sortByVal(const pll &a, const pll &b) {return  (a.second > b.second);}
long long BigMod(long long a, long long b, long long c) {
    long long x = 1, y = a;
    while (b > 0) {
        if (b % 2 == 1)
            x = (x * y) % c;
        y = (y * y) % c;
        b = b / 2;
    }
    return x % c;
}
ll mx(ll a, ll b) {
    if (a > b) return a;
    else return b;
}


// const int N = 300001;
// int block_size;
// struct Query {
//     int l, r, idx;
//     bool operator<(Query other) const
//     {
//         return make_pair(l / block_size, r) <
//                make_pair(other.l / block_size, other.r);
//     }
// } vq[N];

// int v[N];
// int cnt[N], element[N];
// ll ans;
// ll n, q;
// inline void remove(ll idx) {
//     ll x = v[idx];
//     if (cnt[x] == ans and element[cnt[x]] == 1) {
//         ans--;
//     }
//     element[cnt[x]]--;
//     cnt[x]--;
//     element[cnt[x]]++;
// }
// inline void add(ll idx) {
//     ll x = v[idx];
//     cnt[x]++;
//     element[cnt[x]]++;
//     ans = mx(ans, cnt[x]);
// }
// // inline  ll get_answer() {
// //     return ans;
// // }



// void mo_s_algorithm() {
//     vector<ll> answers(q + 1);
//     // TODO: initialize data structure
//     ll cur_l = 1;
//     ll cur_r = 0;
//     // invariant: data structure will always reflect the range [cur_l, cur_r]
//     for ( int i = 1; i <= q; i++) {
//         while (cur_l > vq[i].l) {
//             cur_l--;
//             add(cur_l);
//         }
//         while (cur_r < vq[i].r) {
//             cur_r++;
//             add(cur_r);
//         }
//         while (cur_l < vq[i].l) {
//             remove(cur_l);
//             cur_l++;
//         }
//         while (cur_r > vq[i].r) {
//             remove(cur_r);
//             cur_r--;
//         }
//         answers[vq[i].idx ] = ans;
//     }
//     for (int i = 1; i < answers.size(); i++) cout << answers[i] << endl;
// }

// // int main(int argc, char const * argv[])
// // {
// //     Boaster;
// // #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);

// // #endif
// //     // solveA();
// //     // int t = 1; cin >> t; for (int i = 1; i <= t; i++) {
// //     //     // cout << "Case " << i << ": " << endl;
// //     // while (scanf("%d", &n) && n) {
// //     //     cin >> q ;
// //     //     for (int i = 1; i <= n; i++) {
// //     //         cin >> v[i];
// //     //         v[i] += 1e5;
// //     //     }
// //     //     block_size = sqrt(n);
// //     //     ll a, b;
// //     //     for (int i = 1; i <= q; i++) {
// //     //         cin >> a >> b;
// //     //         vq[i].l = a;
// //     //         vq[i].r = b;
// //     //         vq[i].idx = i ;
// //     //     }
// //     //     ans = -1e5;
// //     //     sort(vq + 1, vq + 1 + q);
// //     //     mo_s_algorithm();
// //     // }
// //     int t = 1; cin >> t; for (int i = 1; i <= t; i++) {
// //         ll n, mx = 0; cin >> n;
// //         vector<ll>v(n); for (auto &i : v) cin >> i;
// //         // for (auto &i : v) cin >> i;
// //         // for (int i = 1; i < n; i++) {
// //         //     if (v[i] < v[i - 1] and mx < i) {
// //         //         if (i != n - 1) mx = i - 1;
// //         //     }
// //         // }
// //         // if (!is_sorted(all(v))) prev_permutation(all(v));
// //         // for (auto i : v) cout << i << ' ';
// //         // cout << endl;

// //         for (int i = 0; i < n - 1; i++) {
// //             if (v[i] > v[i + 1] and ((v[i] + v[i + 1]) % 2 == 1)) {
// //                 swap(v[i], v[i + 1]);
// //             }
// //         }
// //         bool check = is_sorted(all(v));
// //         cout << ( check ? "Yes" : "No") <<  endl;
// //     }

// //     return 0;
// // }

// bool find_dot(vector<vector<char>> &board, int &row, int &col) {
//     for (int i = 1; i <= 9; i++) {
//         for (int j = 1; j <= 9; j++) {
//             if (board[i][j] == '.') {
//                 row = i, col = j;
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// void setChar(vector<vector<char>> &board, int &row, int &col, char c) {board[row][col] = c;}
// void resetChar(vector<vector<char>> &board, int &row, int &col) {board[row][col] = '.';}
// bool rowchecker(vector<vector<char>> &board, int &row, char c) {
//     for (int i = 1; i <= 9; i++) {
//         if (board[row][i] == 'c') return false;
//     }
//     return true;
// }
// bool colcheker(vector<vector<char>> &board, int &col, char c) {
//     for (int i = 1; i <= 9; i++) {
//         if (board[i][col] == 'c') return false;
//     }
//     return true;
// }
// bool validcheker(vector<vector<char>> &board, int &row, int &col, char c) {
//     int newR = (row / 3) * 3;
//     int newC = (col / 3) * 3;

//     for (int i = newR; i < newR + 3; i++) {
//         for (int j = newC; j < newC + 3; j++) {
//             if (board[i][j] == c) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// bool solve(vector<vector<char>> &board) {
//     for (int i = 1; i < 10; i++) {
//         for (int j = 1; j < 10; j++) {
//             // check is sudoku is solved or not
//         }
//     }
// }
// bool SudokuSolver(vector<vector<char>> &board) {
//     int row = 0 , col = 0;
//     if (find_dot(board, row, col)) {
//         int flag = 0;
//         for (int i = 1; i < 10; i++) {
//             char c = char(i + '0');
//             bool rowCheck = 0, colCheck = 0 , isValid = 0;
//             rowCheck = rowchecker(board, row, c);
//             colCheck = colcheker(board, col, c);
//             isValid = validcheker(board, row, col, c);

//             if ( rowCheck and colCheck and isValid) {
//                 flag = 1;
//                 setChar(board, row, col, c);
//                 if (SudokuSolver(board)) {
//                     return true;
//                 }
//                 resetChar(board, row, col);
//             }
//             if (!flag)  return false;
//         }
//     } else {
//         return true;
//     }
//     return false;
// }

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, vector<int>>mp; vector<int>v(2);
        for (int i = 0; i < nums.size(); i++)  mp[nums[i]].push_back(i);

        for (int i = 0; i < nums.size(); i++) {
            if (mp[target - nums[i]].size()) {
                if (target - nums[i] == nums[i] and mp[nums[i]].size() > 1) {
                    v[0] =  mp[nums[i]][0] ; v[1] = mp[target - nums[i]][1];
                    break;
                }
                else {
                    // cout << mp[nums[i]][0] << ' ' << mp[target - nums[i]][0] << endl;
                    v[0] =  mp[nums[i]][0] ; v[1] = mp[target - nums[i]][0];
                    break;
                }
            }


        }
        return v;
    }
};
void solve(vector<int>&nums, int target) {
    map<int, vector<int>>mp;
    for (int i = 0; i < nums.size(); i++)  mp[nums[i]].pb(i);

    for (int i = 0; i < nums.size(); i++) {
        if (mp[target - nums[i]].size()) {
            std::vector<int>  it = mp[nums[i]]->second;
            if (target - nums[i] == nums[i] and it.size() > 1) {
                cout << mp[nums[i]][0] << ' ' << mp[target - nums[i]][1] << endl;
                return;
            }
            else {
                cout << mp[nums[i]][0] << ' ' << mp[target - nums[i]][0] << endl;
                return;
            }
        }


    }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    vector<int>v = {3, 2, 4};
    solve(v, 6);

}

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>vis(1e4 + 5, 0);
//         vector<int>v(2);
//         for (int i = 0; i < nums.size(); i++) {

//             if (vis[target - nums[i]]) {
//                 if (target - nums[i] == nums[i] and vis[nums[i]] == 1)  continue;
//                 v[0] = i;
//                 for (int j = 0; j < nums.size(); j++) {
//                     if (nums[j] == target - nums[i]) {
//                         v[1] = j;
//                         break;
//                     }
//                 }
//                 break;
//             }
//             vis[nums[i]] += 1;
//         }
//         return v;
//     }
// };



