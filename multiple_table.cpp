//
//  multiple_table.cpp
//  
//
//  Created by Rawdhah alshaqaq on 9/8/19.
//

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int i ;
    cout << "Enter any number you want to find the Multi table of ";
    cin >> i;
    cout <<" Here is a Multiplication Table of number "<< i <<endl;
    cout <<"  ---------------------------------------\n";
    
    int result = 0;
    
    for(int j = 1; j <= 10;j++ )
    {
        
        result = i * j;
        cout << i <<" * "<< j <<" = "<< result <<endl;
    }
    
    
    
    return 0;

