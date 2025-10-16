#include <iostream>
int main(){
    int num;
    std::cout<<"Enter Natural Number: ";
    std::cin>>num;
    for(int i=10 ; i>0 ; i--){
        int mul;
        mul=i*num;
        std::cout<<" "<<i<<" X "<<num<<" = "<<mul<<std::endl;
    }
    return 0;
}