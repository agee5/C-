#include <iostream>
#include <string>
using namespace std;

 int main()
 {
     int var;
     bool yn;
     char x;
     string str1 ("Hello from C++");
     string str2 = "Programming is fun";
     string str3;
     str3 = " by G. Kolb";
     string str4;
     string str6;
     string str5;
     string str7;
     string str8;
     cout << str1 << endl;
     cout << str2 << endl;
     cout << str3 << endl;


         cout << "Please enter your first name: ";
     cin >> str4;
     cout << "\nPLease enter your last name: ";
     cin >> str5;
         cout << "Welcome " << str4 << " "<< str5 << endl;
         str6 = str4 + " " + str5;
         cout << "Welcome " << str6 << endl;
         //cin.get(x) ;

         cout << "Enter your name: " ;
         getline(cin, str7);
         cout << "Welcome " << str7 << endl;
         cout <<"String size is " << str7.size() << endl;
         cout <<"String size is " << str4.size() << endl;
         cout <<"String empty? " << str7.empty() << endl;
         if ((str6.compare(str7)) == 0)
         {
             cout << "string are the same "<< endl;
         }
         else
         {
             cout << "Strings are different "<< endl;
             str7.swap(str6);

         }

                str8.append ("haha");
            cout <<"String size is " << str8.size() << endl;
            str8.assign (str3);
            cout << str8 <<endl;
            var = str7.find("K");
            cout << "K is character " << var << endl;



     return 0;
 }
