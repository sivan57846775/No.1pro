#include <iostream.h>
int main() {
 int i;
 for(i = 1; i <= 99; ++i) {
  if(i * i % 10 == i || i * i % 100 == i)
	  cout<<"i="<<i<<endl;
 }
 return 0;
}
