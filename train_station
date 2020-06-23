#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define error(x)   cerr<<#x<<" "<<x<<endl;
#define all(x)      (x).begin(),(x).end()
#define Sort(x)      sort(all(x))
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef string str;
const int MAXN=1e5 + 10;
const ll MODE = (ll)1e9 + 7;
const ll INF = (ll)1e18 + 7;
vector <int> vec;
vector <int> v;
ll ans=INF;
ll n;
class train{
public:
    int id;
    train* next_train;
    train(int _id){
        id = _id;
        next_train = nullptr;
    }
};
class station{
public:
    int id;
    string name;
    station* next_station;
    station* previous_station;
    station(string _name, int _id){
        name = _name;
        id = _id;
        next_station = nullptr;
        previous_station = nullptr;
    }
};
class passenger{
public:
    string name;
    string destination;
    string curr_station;
    int id;
    passenger(string _name, string _destination, string _curr_station, int _id){
        name = _name;
        destination = _destination;
        curr_station = _curr_station;
        id = _id;
    }
};

class metro_sys{
public:
    vector<passenger*> passengers;
    train* first_train;
    station* first_station;
    void add_train(train* new_train){
        train* curr_train = first_train;
        while(curr_train->next_train != nullptr){
            curr_train = curr_train->next_train;
        }
        curr_train->next_train = new_train;
    }
    void add_station(station* new_station){
        station* curr_station = first_station;
        while(curr_station->next_station != nullptr){
            curr_station = curr_station->next_station;
        }
        curr_station->next_station = new_station;
    }

    void add_passenger(passenger* new_passenger){
        passengers.push_back(new_passenger);
    }

    void remove_train(int _id){
        if(first_train->id == _id){
            if (first_train->next_train != nullptr){
                train* temp = first_train->next_train;
                delete first_train;
                first_train = temp;
            }
            else
                delete first_train;
        }
        train* prev_train = first_train;
        if (first_train->next_train == nullptr){
            cout << "no train exist with this id\n";
            return;
        }
        train* curr_train= first_train->next_train;
        while (true){
            if (curr_train->id == _id){
                prev_train->next_train = curr_train->next_train;
                delete curr_train;
                return;
            }
            prev_train = curr_train;
            curr_train = curr_train->next_train;
        }
        cout << "no train exist with this id\n";
    }

    void remove_station(int _id){
        if(first_station->id == _id){
            if (first_station->next_station != nullptr){
                station* temp = first_station->next_station;
                delete first_station;
                first_station = temp;
            }
            else
                delete first_station;
        }
        station* prev_stattion = first_station;
        if (first_station->next_station == nullptr){
            cout << "no station exist with this id\n";
            return;
        }
        station* curr_station = first_station->next_station;
        while (true){
            if (curr_station->id == _id){
                prev_stattion->next_station = curr_station->next_station;
                delete curr_station;
                return;
            }
            prev_stattion = curr_station;
            curr_station = curr_station->next_station;
        }
        cout << "no station exist with this id\n";
    }
};
