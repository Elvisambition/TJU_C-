#include <fstream.h>
#include <stdlib.h>
void main(){
   ifstream fin("f1.txt");
   ofstream fout1("f2.txt");
   ofstream fout2("f3.txt");
   if(!fin||!fout1||!fout2){
      cout<<"Cannot open the file!"<<endl;
      exit(1);
   }
   char ch;
   while((ch=fin.get ())!=EOF)
   {
	   if(ch>='0'&&ch<='9')
		   fout1.put (ch);
	   else
		   fout2.put (ch);
   }
   fin.close();
   fout1.close();
   fout2.close();
}