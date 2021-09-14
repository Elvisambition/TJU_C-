//例3．7用选择法对data数组中的10个数由小到大进行排序。
#include <iostream.h>
void main( )
{ int data [10];
  int i,j,temp;
  cout<<"输入 10个整数:"<<endl;
  for (i=0; i<10; i++)
	  cin>>data[i];
  for(i=0; i<9; i++)
  { for(j=i+1; j<10; j++)
    if (data[i]>data[j])
	{ temp=data[i];               //两个数进行交换
      data[i]=data[j];
	  data[j]=temp;  }
  }
  cout<<"排序结果:";
  for(i=0; i<10; i++)
    cout<<data[i]<<"   ";
  cout<<endl;
}
