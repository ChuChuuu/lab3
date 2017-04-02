#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    int Number = 0  , weight = 0 , total = 0;
    int i;
   
    ifstream infile ("file.in");
    if (!infile){
     cerr <<" failing opening" << endl;
    }
   

    infile >> Number ;
    vector <int> cows;

    for(i = 0 ; i < Number ; ++i){
        infile >> weight ;
        cows.push_back(weight);
    }

    sort(cows.begin() ,cows.end());
    reverse(cows.begin() , cows.end());   



    for ( i = 0 ; i < cows.size() ; ++ i){
        cout<< cows.at(i) << endl ;

    }
   
    for ( i = 0; i < 5 ; ++i){
        cout << cows.at(i) << endl;
        total = total + cows.at(i) ;
    }
   
    cout << total << endl;

   return 0 ;
}
