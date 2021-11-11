#include <iostream>
using namespace std;

class Rectangle{
private:
    double left_under[2] = {0,0};
    double right_on[2] = {1,1};
public:
    Rectangle(double *leu, double *rio){
        if(leu[0] > rio[0] || leu[1] > rio[1] || leu[0] == rio[0] || leu[1] == rio[1]){
        }else{
            left_under[0] = leu[0];
            left_under[1] = leu[1];
            right_on[0] = rio[0];
            right_on[1] = rio[1];
        }
    }

    int s(){
        return (right_on[0] - left_under[0])*(right_on[1] - left_under[1]);
    }


};

int main(){
    double(a[2]);
    double(b[2]);

    for(int i = 0;i < 2; i++){
        cin >> a[i];
    }
    for(int i = 0;i < 2; i++){
        cin >> b[i];
    }


    class Rectangle rec(a,b);
    cout << rec.s();
}
