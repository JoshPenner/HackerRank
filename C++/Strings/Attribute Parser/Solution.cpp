/*
Problem: https://www.hackerrank.com/challenges/attribute-parser/problem 
*/

#include <iostream>
#include <sstream>      // std::stringstream
#include <map>
#include <string>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    map <string, string> tagMap;
    string tagName;
    
    for (int lineHRML = 0; lineHRML < N; lineHRML++)
    {
        string tagNameTemp, attName, attValue, equals;
        string key;
        
        cin >> tagNameTemp;
        
        // if end tag
        if(tagNameTemp[1] == '/')
        {
            // remove nested tag and "."
            tagName = tagName.substr(0, (tagName.size() - (tagNameTemp.size()-3)));
            if (tagName.back() == '.') tagName = tagName.substr(0, tagName.size()-1);
        }
        // if no attributes
        else if (tagNameTemp.back() == '>')
        {
            // remove "<" and ">"
            tagNameTemp = tagNameTemp.substr(1,tagNameTemp.size()-2); 
            
            // add "." and temp tag name to full tag name
            if(!tagName.empty() && tagName.back() != '.') tagName = tagName.append(".");
            tagName = tagName.append(tagNameTemp);
        }
        // if opening tag and contains attributes
        else
        {
            // remove "<"
            tagNameTemp = tagNameTemp.substr(1,tagNameTemp.size()-1); 
            
            // add "." and temp tag name to full tag name
            if(!tagName.empty() && tagName.back() != '.') tagName = tagName.append(".");
            tagName = tagName.append(tagNameTemp);
            
            cin >> attName >> equals >> attValue;
            
            // iterate through attributes
            while(attValue.back() != '>')
            {
                // assign key value pairs
                key = tagName + "~" + attName;
                attValue = attValue.substr(1,attValue.size()-2); // remove extra chars
                tagMap.insert(make_pair(key,attValue));
                
                cin >> attName >> equals >> attValue;
            }
            
            // assign last key value pair in tag
            key = tagName + "~" + attName;
            attValue = attValue.substr(1,attValue.size()-3); // remove extra chars
            tagMap.insert(make_pair(key,attValue));
        }
    }
    
    for (int lineQuery = N; lineQuery < N+Q; lineQuery++)
    {
        string key;
        cin >> key;
        if (tagMap.find(key) == tagMap.end())
        {
            cout << "Not Found!" << endl;
        }
        else
        cout << tagMap[key] << endl;
    }
    
    return 0;
}
