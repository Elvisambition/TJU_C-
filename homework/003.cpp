#include <iostream>
#include <cstring>
using namespace std;

char yes[] = "yes";
char no[] = "no";

class stringA{
public:
    stringA(char *s);
    int f1();
    void f2();
    char *f3(char find);
private:
    char Astr[80];
    int length;

};

stringA::stringA(char *s) {
    length = strlen(s);
    for(int i = 0; i < length; i++ ){
        Astr[i] = s[i];
    }
}

int stringA::f1() {
    int sum = 0;
    for(int i = 0; i < length; i++){
        if(Astr[i] >= 'a' && Astr[i] <= 'z' || Astr[i] >= 'A' && Astr[i] <= 'Z'){
            sum = sum + 1;
        }
    }
    return sum;
}

void stringA::f2() {

    for(int i = 0; i < length; i++){
        if((i+1) % 5 == 0){
            cout << Astr[i] << endl;
        }else{
            cout << Astr[i];
        }
    }
}
char* stringA::f3(char find) {
    char *ch = Astr;
    int m = 0;
    for(int i = 0;i < length; i++){
        if(*ch==find){
            m = m + 1;
        }
        ch++;
    }
    if(m != 0){
        ch = "yes";
    }else{
        ch = "no";
    }
    return ch;
}

int main(){

    char ch[80];
    int length;
    char find;
    cin >> length;

    for(int i = 0; i < length; i++){
        cin >> ch[i];
    }
    stringA str(ch);
    cout << str.f1() << endl;
    str.f2();
    cin >> find;
    cout << str.f3(find)<< endl;
}
