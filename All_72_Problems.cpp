/*
Name : Debjeet Baral
Student ID : 04325105101120
Section : 4C1
*/

// Problem No-1
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << "WELCOME, " << s << "!";
    return 0;
}

// Problem No-2
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}

// Problem No-3
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double w, h;
    cin >> w >> h;
    cout << fixed << setprecision(1) << w * h;
    return 0;
}

// Problem No-4
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double c;
    cin >> c;
    double f = c * 9.0 / 5.0 + 32;
    cout << fixed << setprecision(1) << f;
    return 0;
}

// Problem No-5
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string name;
    int age;
    cin >> name >> age;
    cout << "Hello " << name << ", you are " << age << " years old.";
    return 0;
}

// Problem No-6
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c;
    cin >> a >> b >> c;
    cout << a * b * c;
    return 0;
}

// Problem No-7
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << (n % 2 == 0 ? "EVEN" : "ODD");
    return 0;
}

// Problem No-8
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << max(a, b);
    return 0;
}

// Problem No-9
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int marks;
    cin >> marks;
    cout << (marks >= 40 ? "PASS" : "FAIL");
    return 0;
}

// Problem No-10
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n > 0) cout << "POSITIVE";
    else if (n < 0) cout << "NEGATIVE";
    else cout << "ZERO";
    return 0;
}

// Problem No-11
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int age;
    cin >> age;
    cout << (age >= 18 ? "Eligible" : "Not Eligible");
    return 0;
}

// Problem No-12
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double amount;
    cin >> amount;
    if (amount >= 1000) amount *= 0.9;
    cout << fixed << setprecision(1) << amount;
    return 0;
}

// Problem No-13
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int marks;
    cin >> marks;
    if (marks >= 90) cout << "A";
    else if (marks >= 80) cout << "B";
    else if (marks >= 70) cout << "C";
    else if (marks >= 60) cout << "D";
    else cout << "F";
    return 0;
}

// Problem No-14
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({a, b, c});
    return 0;
}

// Problem No-15
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 0) cout << "Zero";
    else if (n < 0) cout << "Negative";
    else if (n % 2 == 0) cout << "Positive & Even";
    else cout << "Positive & Odd";
    return 0;
}

// Problem No-16
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string user, pass;
    cin >> user >> pass;
    if (user == "admin" && pass == "1234") cout << "Login successful";
    else cout << "Invalid credentials";
    return 0;
}

// Problem No-17
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double t;
    cin >> t;
    if (t >= 20) cout << "Hot";
    else if (t >= 10) cout << "Cool";
    else cout << "Cold";
    return 0;
}

// Problem No-18
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
        cout << "Invalid";
    else if (a == b && b == c) cout << "Equilateral";
    else if (a == b || b == c || a == c) cout << "Isosceles";
    else cout << "Scalene";
    return 0;
}

// Problem No-19
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cout << i;
    return 0;
}

// Problem No-20
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i += 2) cout << i;
    return 0;
}

// Problem No-21
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    cout << n * (n + 1) / 2;
    return 0;
}

// Problem No-22
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++) cout << n << "X" << i << "=" << n * i << '\n';
    return 0;
}

// Problem No-23
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    int cnt = 0;
    if (n == 0) cnt = 1;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    cout << cnt;
    return 0;
}

// Problem No-24
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}

// Problem No-25
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    cout << fact;
    return 0;
}

// Problem No-26
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cout << i << " ";
    }
    return 0;
}

// Problem No-27
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double p, r, t;
    cin >> p >> r >> t;
    cout << fixed << setprecision(1) << (p * r * t) / 100.0;
    return 0;
}

// Problem No-28
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double r;
    cin >> r;
    cout << fixed << setprecision(4) << 2 * 3.1416 * r;
    return 0;
}

// Problem No-29
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double weight, height;
    cin >> weight >> height;
    cout << fixed << setprecision(3) << weight / (height * height);
    return 0;
}

// Problem No-30
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long a;
    int b;
    cin >> a >> b;
    long long ans = 1;
    for (int i = 0; i < b; i++) ans *= a;
    cout << ans;
    return 0;
}

// Problem No-31
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}

// Problem No-32
#include <bits/stdc++.h>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << add(a, b);
    return 0;
}

// Problem No-33
#include <bits/stdc++.h>
using namespace std;
int larger(int a, int b) {
    return max(a, b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << larger(a, b);
    return 0;
}

// Problem No-34
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << (isPrime(n) ? "PRIME" : "NOT PRIME");
    return 0;
}

// Problem No-35
#include <bits/stdc++.h>
using namespace std;
long long factorial(int n) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) ans *= i;
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}

// Problem No-36
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int minutes;
    cin >> minutes;
    cout << minutes / 60 << " HRS " << minutes % 60 << " MIN";
    return 0;
}

// Problem No-37
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << (a + b + c) / 3.0;
    return 0;
}

// Problem No-38
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int year;
    cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        cout << "LEAP YEAR";
    else
        cout << "NORMAL YEAR";
    return 0;
}

// Problem No-39
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0;
    cin >> n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
    return 0;
}

// Problem No-40
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    cout << (s == t ? "YES" : "NO");
    return 0;
}

// Problem No-41
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int x : a) cout << x << " ";
    return 0;
}

// Problem No-42
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    reverse(a.begin(), a.end());
    for (int x : a) cout << x << " ";
    return 0;
}

// Problem No-43
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x % 2 != 0) cout << i << " ";
    }
    return 0;
}

// Problem No-44
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) cnt++;
    }
    cout << cnt;
    return 0;
}

// Problem No-45
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != 0) sum += x;
    }
    cout << sum;
    return 0;
}

// Problem No-46
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x, mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    cout << mx << " " << mn;
    return 0;
}

// Problem No-47
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << (is_sorted(a.begin(), a.end()) ? "Yes" : "No");
    return 0;
}

// Problem No-48
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 100) s.insert(x);
    }
    cout << s.size();
    return 0;
}

// Problem No-49
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, target, ans = -1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (i == 1) target = 0;
        if (x == target) ans = i;
    }
    cin >> target;
    ans = -1;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> target;
    for (int i = 0; i < n; i++) if (a[i] == target) { ans = i + 1; break; }
    cout << ans;
    return 0;
}

// Problem No-50
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << -x << " ";
    }
    return 0;
}

// Problem No-51
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, target, ans = -1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> target;
    for (int i = 0; i < n; i++) if (a[i] == target) ans = i + 1;
    cout << ans;
    return 0;
}

// Problem No-52
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int, greater<int>> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() < 2) cout << *s.begin();
    else {
        auto it = s.begin();
        ++it;
        cout << *it;
    }
    return 0;
}

// Problem No-53
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << s << "BeSt";
    return 0;
}

// Problem No-54
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << s.length();
    return 0;
}

// Problem No-55
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for (char c : s) if (isupper((unsigned char)c)) cout << c << " ";
    return 0;
}

// Problem No-56
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    for (char c : s) if (islower((unsigned char)c)) cout << c;
    return 0;
}

// Problem No-57
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for (char &c : s) {
        if (islower((unsigned char)c)) c = toupper((unsigned char)c);
        else if (isupper((unsigned char)c)) c = tolower((unsigned char)c);
    }
    cout << s;
    return 0;
}

// Problem No-58
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    cout << (s == t ? "Yes" : "No");
    return 0;
}

// Problem No-59
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int cnt[26] = {};
    for (char c : s) if (c >= 'A' && c <= 'Z') cnt[c - 'A']++;
    for (int i = 0; i < 26; i++) {
        if (cnt[i]) cout << char('A' + i) << "-" << cnt[i] << '\n';
    }
    return 0;
}

// Problem No-60
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int start = s.size() % 3;
    if (start == 0) start = 3;
    cout << s.substr(0, start);
    for (int i = start; i < s.size(); i += 3) cout << "," << s.substr(i, 3);
    return 0;
}

// Problem No-61
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    int cnt = 0;
    while (n > 0) {
        cnt += n % 2;
        n /= 2;
    }
    cout << cnt;
    return 0;
}

// Problem No-62
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int pos = (int)s.size() - 1;
    for (int i = 0; i + 1 < (int)s.size(); i++) {
        if (s[i] < s[i + 1]) {
            pos = i;
            break;
        }
    }
    s.erase(pos, 1);
    cout << s;
    return 0;
}

// Problem No-63
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s, target = "MANDZUKIC";
    cin >> s;
    int ans = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        int cnt = 0;
        while (cnt < 9 && i + cnt < (int)s.size() && s[i + cnt] == target[cnt]) cnt++;
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}

// Problem No-64
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long x = a * c, y = b * d;
    long long g = gcd(x, y);
    cout << x / g << " " << y / g;
    return 0;
}

// Problem No-65
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    int q = 0;
    while (n % 10 == 0) {
        n /= 10;
        q++;
    }
    cout << n << " x 10 ^ " << q;
    return 0;
}

// Problem No-66
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        ans = (ans * (int)((x % 10 + 10) % 10)) % 10;
    }
    cout << ans;
    return 0;
}

// Problem No-67
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    cout << (n > 0 && (n & (n - 1)) == 0 ? "YES" : "NO");
    return 0;
}

// Problem No-68
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, p = 1;
    cin >> n;
    while (p < n && p <= LLONG_MAX / 2) p *= 2;
    if (p == n) p /= 2;
    cout << n - p;
    return 0;
}

// Problem No-69
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s, word;
    getline(cin, s);
    stringstream ss(s);
    int cnt = 0;
    while (ss >> word) cnt++;
    cout << cnt;
    return 0;
}

// Problem No-70
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 2; i < n; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) cout << i;
    }
    return 0;
}

// Problem No-71
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "ASSASSIN";
    return 0;
}

// Problem No-72
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "I am a genius";
    return 0;
}
