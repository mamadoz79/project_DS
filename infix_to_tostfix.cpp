#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define error(x) 	cerr<<#x<<" "<<x<<endl;
#define all(x)			(x).begin(),(x).end()
#define Sort(x)			sort(all(x))
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef string str;
const int MAXN=1e5 + 10;
const ll INF = (ll)1e18 + 7;
vector <string> v;
vector <int> vec;


int prec(char c) { 
    if(c == '^') 
        return 3; 
    else if(c == '*' || c == '/') 
        return 2; 
    else if(c == '+' || c == '-') 
        return 1; 
    else
        return -1; 
} 
void infixToPostfix(string s) {
    std::stack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string ns; 
    for(int i = 0; i < l; i++) { 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
        ns+=s[i]; 
  
        else if(s[i] == '(')
        st.push('('); 
           
        else if(s[i] == ')') {
            while(st.top() != 'N' && st.top() != '(') { 
                char c = st.top(); 
                st.pop(); 
               ns += c; 
            } 
            if(st.top() == '(') { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
          
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    while(st.top() != 'N') { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    } 
    cout << ns << endl; 
  
} 
int main() { 
    string exp;
    cin >> exp; 
    infixToPostfix(exp); 
    return 0; 
} 
