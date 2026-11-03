/*
    File: C++ string funcs.cpp
    Topic: String function examples demonstrating common C++ string operations.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1="Hello";
	string str2="World";
	string str3="C++ Programming";
	string str4="Welcome to C++";
	
	string str5=str1+str2;
	cout<<"1.After concatenation:"<<str5<<endl;
	
	cout<<"2.Length of str3:"<<str3.length()<<endl;
	
	cout<<"3.First character of str4:"<<str4[0]<<endl;
	
	size_t found=str3.find("Programming");
	if(found!=string::npos)
	cout<<"4.Substring 'Programming' found at position:"<<found<<endl;
	
	string subStr=str3.substr(0,3);
	cout<<"5.Substracting(first 3 charts):"<<subStr<<endl;
	
	if(str1.compare(str2)==0)
	cout<<"6.str1 and str2 are equal."<<endl;
	else
	cout<<"6.str1 and str2 are not equal."<<endl;
	
	str3.insert(5,"\namazing");
	cout<<"7.After insert:"<<str3<<endl;
	
	str3.erase(5,8);
	cout<<"8.After erase:"<<str3<<endl;
	
	str3.replace(0,3,"Hello");
	cout<<"9.After replace:"<<str3<<endl;
	
	for(char &c:str2)
	{
		c=toupper(c);
	}
	cout<<"10.str2 in uppercase:"<<str2<<endl;
	
	for(char &c:str4)
	{
		c=tolower(c);
	}
	cout<<"11.str4 in lowercase:"<<str4<<endl;
	
	if(str5.empty())
	cout<<"12.str5 is empty."<<endl;
	else
	cout<<"12.str5 is not empty."<<endl;
	
    str1.clear();
    cout<<"13.After clear:str1="<<str1<<""<<endl;
    
    str1="First string";
    str2="Second string";
    str1.swap(str2);
    cout<<"14.After swap:str1=<<'''str1<<''',str2='''<<str2'''"<<endl;
    
    const char*cstr=str2.c_str();
    cout<<"15.C-string:"<<cstr<<endl;
    
    str3.resize(5);
    cout<<"16.After resizing str3 to 5 characters:"<<str3<<endl;
    
    return 0;
}
