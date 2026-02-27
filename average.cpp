#include<iostream>
#include<cstdlib>
using namespace std;


int main(int argc,char *argv[]){
    int sum,num;
    if(argc < 2){
        cout << "Please input numbers to find average.";
    }else{
        for(int i = 1;i<argc;i++){
            num = atoi(argv[i]);
            sum += num;
        }
        cout << "---------------------------------\n";
        cout << "Average of "<< argc-1 <<" numbers = "<< sum/(argc-1);
        cout << "\n---------------------------------";   
    }
}