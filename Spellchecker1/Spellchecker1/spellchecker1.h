#ifndef __Spellchecker1__spellchecker1__
#define __Spellchecker1__spellchecker1__

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

class spellchecker
{
public:
    void open(string dictionary_text);
    
    void build(ifstream &text_file, ofstream &dictionary_file);
    
    
    
    
    
    
    
    
    
    
    
private:
    ifstream textfile;
    ofstream dictionaryfile;
};














#endif 

