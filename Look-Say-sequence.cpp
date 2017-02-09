//
//  Look-Say-sequence.cpp
//  
//
//  Created by Peter Asmussen on 08/02/2017.
//
//


/*
 'NOTER'
 1. Læs element
        Hvis det er sidste element, og nuværende er ens med forrige, tilføj counter til vector
        Hvis det er sidste element, og nuværende er forskellig fra forrige, tilføj counter=1 til vector
        Hvis det ikke er sidste element, og nuværende er ens med næste, counter++
        Hvis det ikke er sidste element, og nuværende er forskellig fra næste, men ens med forrige, tilføj counter til vector og counter = 1
        Hvis det ikke er sidste element, og nuværende er forskellig med både næste og forrige, tilføj counter til vector og counter = 1
 
 2. Tilføj til final collection:
        hvis nuværende element er forskelligt fra næste, men ens med forrige
        hvis nuværende element er forskelligt fra næste, og forskelligt fra forrige
 */

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    // Creating vectors and other variables for sorting through input
    // amountOfInts and finalCollection are not needed. Created for test purposes only
    vector<int> inputCollection, amountOfInts, finalCollection;
    int input;
    int counter = 1;
    int getNextElement, getPreviousElement;
    
    // Take input and insert into datastructure, will fail if input is not an integer
    while(true){
        
        cin >> input;
        
        if(cin.fail()){
            break;
        }
        
        inputCollection.push_back(input);
    }
    
    // Read through the input collection, and assert consecutive amout of integers
    for(int i = 0; i<inputCollection.size(); i++){
        getNextElement = i+1;
        getPreviousElement = i-1;
        
        /*  Special case for first element in input sequnce,
         *  if current element is different from next element, counter is added to amount-vector
         *  and value of current element is added to a finalCollection-vector
         *  Results are printed
         */
        if(i == 0 && inputCollection[i] != inputCollection[getNextElement]){
            amountOfInts.push_back(counter);
            finalCollection.push_back(inputCollection[i]);
            
            cout << counter << " " << inputCollection[i] << " ";
        }
        
        /*  Check if current element is the last of the collcetion, and is equal to previous element
         *  If true, counter is added to amount-vector and
         *  value of current element is added to a finalCollection-vector.
         *  Results are printed
         */
        else if(i+1 == inputCollection.size()
           && inputCollection[i] == inputCollection[getPreviousElement]
           && getPreviousElement>=0){
            amountOfInts.push_back(counter);
            finalCollection.push_back(inputCollection[i]);
            
            cout << counter << " " << inputCollection[i] << " ";
            
        }
        
        /*  Check if current element is the last of the collection, and is different from previous element
         *  If true, counter is added to amount-vector and
         *  value of current element is added to a finalCollection-vector.
         *  Results are printed
         *  Counter is reset
         */
        else if(i+1 == inputCollection.size()
           && inputCollection[i] != inputCollection[getPreviousElement]
           && getPreviousElement>=0){
            amountOfInts.push_back(counter);
            finalCollection.push_back(inputCollection[i]);
            
            cout << counter << " " << inputCollection[i] << " ";
            
            counter = 1;
        }
        
        /*  Check if current element is equal to the next element.
         *  If true, counter is incremented
         */
        else if(inputCollection[i] == inputCollection[getNextElement]
           && getNextElement<=inputCollection.size()){
            counter++;
        }
        
        /*  Check if current element is different from next, and equal to the previous.
         *  If true, counter is added to amount-vector and
         *  value of current element is added to finalCollection-vector
         *  Results are printed
         *  Counter is reset
         */
        else if(inputCollection[i] != inputCollection[getNextElement]
           && inputCollection[i] == inputCollection[getPreviousElement]
           && getPreviousElement>=0){
            amountOfInts.push_back(counter);
            finalCollection.push_back(inputCollection[i]);
            
            cout << counter << " " << inputCollection[i] << " ";
            
            counter = 1;
        }
        
        /*  Check if current element is different from next and previous element.
         *  If true, counter is added to amount-vector and
         *  value of current element is added to finalCollection-vector
         *  Results are printed
         *  Counter is reset
         */
        else if(inputCollection[i] != inputCollection[getNextElement]
           && inputCollection[i] != inputCollection[getPreviousElement]
           && getNextElement<=inputCollection.size() && getPreviousElement>=0){
            amountOfInts.push_back(counter);
            finalCollection.push_back(inputCollection[i]);
            
            cout << counter << " " << inputCollection[i] << " ";
            
            counter = 1;
        }
    }
    
    // Clearing vectors for good measure
    inputCollection.clear();
    amountOfInts.clear();
    finalCollection.clear();
}
