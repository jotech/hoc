#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

/*
renumbering after cut_off
**/

int main() {
  string pattern = "-->";
    
  string sline="";
  ifstream source("hoc1.srt");
  ofstream target("output.txt");
  bool between = false;
  
  while(source){
    getline(source, sline);
    //cout << sline << "\n";
    size_t found;

    if(between && sline.length() == 0){
      between = false;
    }

    found = sline.find(pattern);
    if(!between){
      target << sline << "\n";
      if(found != string::npos) between = true;
    }
  }
}

