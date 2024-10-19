#include<iostream>
#include<cmath>
using namespace std;

double dis(double x1,double y1,double x2,double y2){
  return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
struct circle{
  double x,y;
};
bool check(circle c[],int n,circle cs,circle ct){
  double r=dis(cs.x,cs.y,ct.x,ct.y);
  for(int i=0;i<n;i++){
    double eq=(pow(c[i].x-ct.x,2)+pow(c[i].y-ct.y,2)-pow(r,2));
    if(eq<=0) return false;
  }
return true;
}
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
  int n;
  cin>>n;
  circle c[n],cs,ct;
  for(int i=0;i<n;i++) cin>>c[i].x>>c[i].y;
  cin>>cs.x>>cs.y>>ct.x>>ct.y;
  check(c,n,cs,ct)?cout<<"Yes"<<endl:cout<<"No"<<endl;
  }
  return 0;
}