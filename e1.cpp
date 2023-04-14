#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

const int MAX = 10;

int main(){
  std::string line;
  fstream inputFile;
  size_t pos;
  std::string utoken,fntoken,lntoken,pwdtoken,yrtoken,axtoken,statusToken;
  //  int numLines=0;
  //int numFields=0;

  inputFile.open("ii1.txt");
  std::getline(inputFile,line);
  std::cout<<line<<endl;

  pos=line.find('\t');;
  utoken=line.substr(0,pos);
  line.erase(0,pos+1);

  pos=line.find('\t');;
  fntoken=line.substr(0,pos);
  line.erase(0,pos+1);
  
  pos=line.find('\t');;
  lntoken=line.substr(0,pos);
  line.erase(0,pos+1);

  pos=line.find('\t');;
  yrtoken=line.substr(0,pos);
  line.erase(0,pos+1);

  pos=line.find('\t');;
  axtoken=line.substr(0,pos);
  line.erase(0,pos+1);
  
  pos=line.find('\t');;
  statusToken=line.substr(0,pos);
  line.erase(0,pos+1);
  
  inputFile.close();

  std::cout<<utoken<<endl;
  std::cout<<fntoken<<endl;
  std::cout<<lntoken<<endl;
  std::cout<<yrtoken<<endl;
  std::cout<<axtoken<<endl;
  std::cout<<statusToken<<endl;
  


  
  //  column [0] will represent the user id, column [1] the user’s first name, column [2] the user’s last name,
  //column [3] the user’s password, column [4] the user’s initial membership year, column [5] the user’s
  //account access, U- General User and A – Administrator, and column [6] the user’s tech status,.
}


