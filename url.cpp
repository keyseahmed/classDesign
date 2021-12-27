#include<iostream>
#include "Url.h"

URL::URL(std::string url)
{
    std::string scheme;     // stores the https:
    std::string authority;  // stores the example.com
    std::string path;       // stores and displays the path of the url. 


    // creating variables for slicing of URL.
    int x; 
    int y;
    int z; 
    int n;
    // ask the user to put his/her url in here. 
    std::cout<<"Please enter a URL : "; 
    // let the user to input his/her url and storing it in url var.
    std::cin>>url;                       

    // I use use find() to find the postion of : character from the url of the user. 
    y = url.find(":");
    // use for loop to find forward slash / and double forward slash // . 
    for (int i=0;i<url.size();i++) {
        if(url[i]=='/' && url[i+1]=='/'){
            x = i;
            i++;}
        else if(url[i]=='/' && url[i+1]!='/') {
            z=i;
            break;}
    }
    // assigning scheme variable the characters from index 0 to y+1, nb 'y' was the position of ':'
    // it assigns scheme the value from the url and it starts 0 and stops at index positions 6, using substr(start, end) functions. 
    scheme= url.substr(0,y+1); 
    
    // in order to get the middle portion of URL we use the variable n then we find out the URL - anything before ':' this char
    // which is y and anything after / or // then, I store authority the portion of the URL from x to n.

    n=((url.size()-y)-(url.size()-z))-1;

    authority = url.substr(x,n);      
    path = url.substr(z);             
    std::cout<<"\n";
    std::cout<<"Scheme : "<<scheme<<"\n";  
    std::cout<<"Authority : "<<authority<<"\n"; 
    std::cout<<"Path : "<<path<<"\n";
}
std::string URL::getScheme() 
{
    return scheme;
}
std::string URL::getAuthority() 
{
    return authority;
}
std::string URL::getPath()
 {
    return path;
}
std::string URL::getUrlComplete() 
{
    return scheme+"://"+authority+path;
}