
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<iostream>
using namespace std;

 int main(){
 	initwindow(800,700);
 	int n;
	cout<<"nhap chieu dai day nhi phan ";
	cin>>n;
   int a[n]; 
    for (int i = 1; i <= n; i++) {
        cout << "Nhap vao bit thu a[" << i << "] : ";
        cin >> a[i];}
        
        int t=0;
        for(int k=1;k<=n;k=k+2){
         
		if (a[k]==0&a[k+1]==0){
		 for (int x=90*t;x<=90*(t+1);x+=1){
		float y=100*sin(-(x+11.25)*3.14/45);
		putpixel(x,y+300,15);
		delay(10);}}
		
		if (a[k]==0&a[k+1]==1){
		 for ( int x=90*t;x<=90*(t+1);x+=1){
		float y=100*sin(-(x+78.75)*3.14/45);
		putpixel(x,y+300,14);
		delay(10);}}
		if (a[k]==1&a[k+1]==1){
		 for ( int x=90*t;x<=90*(t+1);x+=1){
		float y=100*sin(-(x+56.25)*3.14/45);
		putpixel(x,y+300,13);
		delay(10);}}
		if (a[k]==1&a[k+1]==0){
		 for ( int x=90*t;x<=90*(t+1);x+=1){
		float y=100*sin(-(x+33.75)*3.14/45);
		putpixel(x,y+300,12);
		delay(10);}}
		
		
		
		t+=1;
		;}
		int k;float h[4]; int q=45; int l=0;
		cout<<"tin hieu giai dieu che la   "<<endl;
    while(q<=45*n){
	     for(int m=1;m<=4;m++){
				h[m]=100*sin(-(q+11.25+22.5*(m-1))*3.14/45);
				k=getpixel(q,h[m]+300);
				if (k==15){cout<<"00";break;}
			    if (k==14){cout<<"01";break;}
		        if (k==13){cout<<"11";break;}
			    if (k==12){cout<<"10";break;}
				
				
				}
				
				q=q+90;
			}
			 
		getch();
		return 0;}
		
