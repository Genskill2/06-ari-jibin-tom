#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <cs50.h>

string ari(string s) {
   int ch=0,wd=0,sn=0;
for(int i=0;s[i]!='\0';i++){

if(isalnum(s[i])
   ch++;
   
else if(s[i]=' ')
   wd++;
   
else if(s[i]='.' || s[i]='!' || s[i] == '?')
   sn++;
   
  }
  
  wd++;
  
  float ar = 4.71*(float)(ch/wd) + 0.5*(float)(wd/sn) -21.43 ;
  
  int val = ceil (ar);
  
  switch(val){
  
      case 1 : return "Kindergarten";
              break;
      case 2 : return "First/Second Grade";
              break;
      case 3 : return "Third Grade";
              break;
      case 4 : return "Fourth Grade";
              break;
      case 5 : return "Fifth Grade";
              break;        
      case 6 : return "Sixth Grade";
              break;
      case 7 : return "Seventh Grade";
              break;        
      case 8 : return "Eighth Grade";
              break;
      case 9 : return "Ninth Grade";
              break;
      case 10 : return "Tenth Grade";
              break;        
      case 11 : return "Eleventh Grade";
              break;        
      case 12 : return "Twelfth grade";
              break;
      case 13 : return "College student";
              break;      
              
         }     
      if (val>=14)
      return "Professor";
              break;      
              
      }        
