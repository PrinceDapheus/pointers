#include <iostream>
using namespace std;
#include <memory>
#include <vector>
#include <algorithm>




int main(){

unique_ptr<int>number = make_unique<int>(50);
cout << *number <<endl;


    return 0;

}