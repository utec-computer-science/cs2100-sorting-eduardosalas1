#include <iostream>
#include <vector>
#include "sorts.cpp"
using namespace std;
template<class T>
void print_array(vector<T> * v){
    for(auto i : *v){
        cout<<i<<',';
    }
}

int main() {
    auto*prueba = new vector<int>();
    *prueba = {3,8,5,1,6};
    sorting<int> p(prueba);
    p.Merge_sort(0,4);//index inicial y final
    print_array(prueba);
    return 0;
}
