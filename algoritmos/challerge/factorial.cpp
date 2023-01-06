#include<iostream>

int iteractiveFactorial(int n){
    int fact = 1;

    for (int i = 2; i <=n; i++)
    {
        fact *=i;
    }
    return fact;
}

int recurFactorial(int n){
    if(n ==1){
        return n;
    }
   return  recurFactorial(n-1)* n;
    

     
}

int main(int argc, char const *argv[])
{
 std::cout<<iteractiveFactorial(5)<<std::endl;   
 std::cout<<recurFactorial(5)<<std::endl;   

    return 0;
}

