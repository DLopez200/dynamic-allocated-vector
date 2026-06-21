#include <iostream>
using namespace std;

class vec {
    private:
    int* arr;
    int arr_size;
    int arr_cap;


    public:
    vec(){
        arr = nullptr;
        arr_size = 0;
        arr_cap = 0;
    }

    vec(int size){

        if(size == 0){
            arr = nullptr;
            arr_size = 0;
            arr_cap = 0;
        }else{
        arr = new int[size];
        arr_size = size;
        arr_cap = size;
        }
    }

    ~vec(){
        delete[] arr;
    }

    int size(){
        return arr_size;
    }

    int cap(){
        return arr_cap;
    }

    void push_back(int x){
        if(arr_size < arr_cap){
            arr[arr_size] = x;
            arr_size++;
        }
        else{
            if(arr_cap == 0){
                arr_cap = 1;
            }
            else{
                arr_cap *=2;//doubled the array capacity
            }
            
            int* new_arr = new int[arr_cap];

            for(int i = 0; i < arr_size; i++){
                new_arr[i] = arr[i];
            }
            new_arr[arr_size] = x;

            delete[] arr;
            arr = new_arr;
            arr_size++;

            cout << "array reseized to " << arr_cap <<endl;
        }
        cout <<"pushed back "<< x <<endl;
    }
    int pop_back(){
        if(arr_size == 0){
            cout << "error noting to popback" <<endl;
            return -1;
        }
        //cout <<arr_size <<endl;

        arr_size --;
        return arr[arr_size];
    }

    int& at(int idx){
        return arr[idx];
    }

    int& operator[](int idx){
        return arr[idx];
    }



    };

int main(){

    vec v = vec();

  

    for(int i=0; i <100; i++){
        v.push_back(i);
    }

    //cout <<v.size()<<endl;

/*    for(int i =0; i <v.size(); i++){ //this condition will never complete
                                    // due to int i and v.size meeting at the 50 amrk
        cout << v.pop_back() <<endl;
    }
        */

    while(v.size() > 0){
        cout <<v.pop_back() << endl;
    }
/*
    for(int i =0; i < v.size(); i++){
        v[i] = i;
    }

    for(int i=0; i < v.size(); i++){
        cout << v.at(i)<< endl;
    }
   
   
    int y;
    cout <<"enter somthing" <<endl;
    cin >> y;
    vec v2 = vec(y);
*/

    return 0;
}