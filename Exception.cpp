// EXCEPTIONS
#include <iostream>
using namespace std;

int main(){
    char call_api = 'h';
    try{
        cout << "trying to use API value\n";
        throw call_api;
    } catch(int x){
        cout << "integer exception handled\n";
    } catch (float y){
        cout << "float exception handled\n";
    } catch (...){
        cout << "Something went wrong\n";
    }
    cout << "Keeping on moving with rest of the code\n";
    return 0;
}
