/*  Given the string find the maximum frequency characters. */
//time complexity:O(n)
//space complexity:O(1)(Because we are using fixed space array i.e 256)

#include <iostream>
using namespace std;

char maxfreq(string str) {
    int count[256] = {0}, max = 0;
    char ch;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;    //using hash array

        if (max < count[int(str[i])]) {
            max = count[int(str[i])];
            ch = str[i];
        }

    }
    return ch;
}
int main() {
    
    bool loop;
    char decision;
    
    do
    {
        string str;
        cout<<"insert the string"<<endl<<">>";
        cin >> str;
        cout << "character with maximum frequency : " << maxfreq(str);
        cout<<endl<<"------------------------------"<<endl<<"do you want to continue? Y/N"<<endl<<">>";
        cin>>decision;
        if(decision=='Y'||decision=='y') loop=true;
        else loop=false;
        cout>>endl;
        
    }while(loop==true);
    return 0;
}
