#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    int Number , weight;
    int i;

    cin >> Number ;
    vector <int> cows;

    for(i = 0 ; i < Number ; ++i){
        cin >> weight ;
        cows.push_back(weight);
    }

    for ( i = 0 ; i < cows.size() ; ++ i){
        cout<< cows[i] << endl ;

    }

   return 0 ;
}
