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

    };

int main(){

    vec v = vec(10);

    int y;
    cout <<"enter somthing" <,endl;
    cin >> y;
    vec v2 = vec(y)


    return 0;
}