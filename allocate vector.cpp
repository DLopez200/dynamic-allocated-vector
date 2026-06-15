#include <iostream>
using namespace std;

class vec {
    private:
    int* arr;
    int arr_size;

    public:

    vec(int size){
        arr = new int[size];
        arr_size = size;
    }

    ~vec(){
        delete[] arr;
    }

    int size(){
        return arr_size;
    }

    int& at(int idx){
        return arr[idx];
    }

    };

int main(){

    vec v = vec(10);

    for(int i =0; i < v.size(); i++){
        v.at(i) = i;
    }

    for(int i=0; i < v.size(); i++){
        cout << v.at(i)<< endl;
    }
    int y;
    cout <<"enter somthing" <<endl;
    cin >> y;
    vec v2 = vec(y);


    return 0;
}