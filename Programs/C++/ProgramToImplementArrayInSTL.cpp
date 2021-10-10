#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;
int main() {
   array<int, 7> a; //declaring array
   array<int, 7>::iterator it; //declaring an array as iterator
   int c, i; //declaring integer variables
   a.fill(0);
   int cnt = 0;
   while (1) {
      cout<<"1.Size of the array"<<endl;
      cout<<"2.Insert Element into the Array"<<endl;
      cout<<"3.Front Element of the Array"<<endl;
      cout<<"4.Back Element of the Array"<<endl;
      cout<<"5.Display elements of the Array"<<endl;
      cout<<"6.Exit"<<endl;
      cout<<"Enter your Choice: ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Size of the Array: "; // print size of the array.
            cout<<a.size()<<endl;
            break;
         case 2:
            cout<<"Enter value to be inserted: "; // enter values in the array.
            cin>>i;
            a.at(cnt) = i;
            cnt++;
            break;
         case 3:
            cout<<"Front Element of the Array: "; //print front element of the array.
            cout<<a.front()<<endl;
            break;
         case 4:
            cout<<"Back Element of the Arrary: "; //print back element of the array.
            cout<<a.back()<<endl;
            break;
         case 5:
            for (it = a.begin(); it != a.end(); ++it ) //print all elements of the array.
            cout <<" "<< *it;
            cout<<endl;
            break;
         case 6:
            exit(1); //exit
            break;
         default:
            cout<<"Wrong Choice"<<endl;
      }
   }
   return 0;
}