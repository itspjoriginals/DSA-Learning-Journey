#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    Hero(){
        cout<<"Simple Constructor called"<<endl;
    }
};

int main(){
    Hero Spidy;
    cout<< "Health is "<< Spidy.health <<endl;
    cout<< "Level is "<< Spidy.level <<endl;

    return 0;
}