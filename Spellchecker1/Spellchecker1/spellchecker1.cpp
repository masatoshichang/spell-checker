#include "spellchecker1.h"

using namespace std;

void spellchecker::open(string dictionary_text)
{
    textfile.open(dictionary_text);
    
    if(textfile.is_open())
    {
        cout << "File open success!" << endl;
    }
    else
    {
        cout << "Cannot open file!" << endl;
    }
    
    
    ofstream dictionaryfile("binary_dictionary.bin", ios::binary);
    
    build(textfile, dictionaryfile);
    
    
}


void spellchecker::build(ifstream &text_file, ofstream &dictionary_file)
{
    
    string str;
    
    while(text_file >> str)
    {
        dictionary_file << str << endl;
    }
    
    
    
    ifstream::pos_type size;
    size = dictionary_file.tellp();
    
    dictionary_file.close();
    
    
    ifstream readdictionary("binary_dictionary.bin", ios::in | ios::binary);
    
    char* memblock;
    
    //size = readdictionary.tellg();
    
    cout << "Binary File Size: " << size << endl;
    memblock = new char[size];
    readdictionary.seekg(0, ios::beg);
    readdictionary.read(memblock, size);
    readdictionary.close();
    
    
    cout << (string)memblock << endl;
    
}
    
    
    
    
    