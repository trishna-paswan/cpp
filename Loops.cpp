// FOR LOOP
#include <iostream>
using namespace std;

int main(){
    int my_num[] = {2, 3, 4, 5, 6};
    for( int i = 0; i < 5; i++ ){
        cout << my_num[i] << endl;
    }
    for(int i:my_num){
        cout << i << endl;
    }
    return 0;
}
// WHILE LOOP
#include <iostream>
using namespace std;

int main(){
    int my_number[] = {4, 5, 6, 7, 8, 9, 0};
    int i = 0;
    while(i < 7){
        if(i == 3) break;
        cout << "Current number is: " << my_number[i] << endl;
        i++;
    }
    return 0;
}
// DO WHILE LOOP
#include <iostream>
using namespace std;

int main(){
    int my_number[] = {4, 5, 6, 7, 8, 9, 0};
    int i = 0;
    do{
        if(i == 3) break;
        cout << "Current number is: " << my_number[i] << endl;
        i++;
    } while(i < 7);
    return 0;
}
