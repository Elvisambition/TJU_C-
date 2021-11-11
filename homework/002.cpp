#include <iostream>
using namespace std;

class numbers{
private:
    int a[100] = {0};
    int counter;
    int sum = 0;
    int mul = 1;
    int length;
public:
    numbers(int m){
        length = m;

        for(counter = 0; counter< m ; counter++){
            cin >> a[counter];
        }
    }

    int sum_cal(){
        for(int i = 0; i < length; i++){
            sum = sum + a[i];
        }
    }

    int mul_cal(){
        for(int i = 0; i < length; i++){
            mul = mul * a[i];
        }
    }

    int sum_ho(){
        return sum;
    };
    int mul_ho(){
        return sum;
    }

    void show(){
        cout << sum << "\n" << mul;
    }



};

int main(){
    numbers num(5);
    num.sum_cal();
    num.mul_cal();
    num.show();
}
