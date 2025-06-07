#include <iostream>

int main(int argc, const char * argv[]) { // parameters are not imp
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
/*
 here
 i can write multi line
 comment
 */


#include <iostream>
using namespace std;

int main(){
   // std::cout << "Hello There\n";  // add to the next line
  //  std::cout << "Hello There" << std::endl ; //alternate of next line
    cout << "Hello There" << endl ; // std imported
    return 0;
    
}

#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string my_color;
    cout << "Enter your favourite color: \n";
    getline(cin, my_color);
    cout << "Hey " << my_color << " is my favrt too!" << endl;
    
//    int number; //VARIABLE
//    cin >> number;
//    printf("Your ID is %d\n", number +3 );
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(){
    string first;
    string last;
    
    cout << "Enter your first name : \n";
    cout << "Enter your last name: \n";
    getline(cin,first);
    getline(cin,last);
    cout << "Hey! My name is " << first << " " << last << "." << endl;
    
}
