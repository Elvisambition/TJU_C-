//��3��7��ѡ�񷨶�data�����е�10������С�����������
#include <iostream.h>
void main( )
{ int data [10];
  int i,j,temp;
  cout<<"���� 10������:"<<endl;
  for (i=0; i<10; i++)
	  cin>>data[i];
  for(i=0; i<9; i++)
  { for(j=i+1; j<10; j++)
    if (data[i]>data[j])
	{ temp=data[i];               //���������н���
      data[i]=data[j];
	  data[j]=temp;  }
  }
  cout<<"������:";
  for(i=0; i<10; i++)
    cout<<data[i]<<"   ";
  cout<<endl;
}
