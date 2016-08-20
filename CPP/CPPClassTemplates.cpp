//
//  CPPClassTemplates.cpp
//  HackerRank
//
//  Created by Fabrizio Duroni on 20/08/16.
//  Copyright © 2016 Fabrizio Duroni. All rights reserved.
//
//  https://www.hackerrank.com/challenges/c-class-templates

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

template <class T>
class AddElements {
    
    T element;
    
public:
    
    AddElements(T newElement) : element{newElement} {};
    
    T add(T otherElement) {
        
        return element + otherElement;
    }
};

template<>
class AddElements<string> {
    
    string element;
    
public:
    
    AddElements(string newElement) : element{newElement} {};
    
    string concatenate(string otherElement) {
        
        return element + otherElement;
    }
    
};

int main () {
    
    int n,i;
    
    cin >> n;
    
    for(i=0;i<n;i++) {
        
        string type;
        
        cin >> type;
        
        if(type=="float") {
            
            double element1,element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            cout << myfloat.add(element2) << endl;
        } else if(type == "int") {
            
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint (element1);
            cout << myint.add(element2) << endl;
        } else if(type == "string") {
            
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring (element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
