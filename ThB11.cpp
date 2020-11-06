#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
#include<string>

using namespace std;

class Hanghoa{
 private:
 string nameMh;
 string codeMh;
 float  costMh;
 int    amountMh;
 float  totalCost;
 public:
 Hanghoa(){
     this->nameMh = this->codeMh="";
     this->costMh=0.0;
     this->amountMh=0;
     this->totalCost=0.0;
 }
 Hanghoa(string nameMh,string codeMh,float costMh,int amountMh,float totalCost){
     this ->nameMh =nameMh;
     this ->codeMh =codeMh;
     this ->costMh =costMh;
     this ->amountMh=amountMh;
 }
~Hanghoa(){
     this->nameMh = this->codeMh="";
     this->costMh=0.0;
     this->amountMh=0;
     totalCost=0.0;
}
//Overloading toán tử nhập xuất cin cout
friend istream &operator>>(istream &input,Hanghoa &obj){
    cin.ignore(); //xóa bộ nhớ đệm trước khi nhập chuỗi
    cout<<"Ten mat hang: ";fflush(stdin); getline(input, obj.nameMh);
    cout<<"Ma mat hang : ";fflush(stdin); getline(input, obj.codeMh);
    cout<<"Gia mat hang: ";input>>obj.costMh;
    cout<<"So luong    : ";input>>obj.amountMh;
    return input;
}
friend  ostream &operator<<(ostream &os,Hanghoa obj){
    cout<<"Ten hang hoa: "<<obj.nameMh<<endl;
    cout<<"Ma mat hang : "<<obj.codeMh<<endl;
    cout<<"Gia mat hang: "<<obj.costMh<<endl;
    cout<<"So luong    : "<<obj.amountMh<<endl;
    return os;
}
float operator >(const Hanghoa &obj){
    totalCost=obj.amountMh*obj.costMh;
    return totalCost;
}

};
int main(){
    //float  totalCost;
    //totalCost =0;
    Hanghoa();
    cout<<"nhap so mat hang: ";int n;cin>>n;
    Hanghoa *arr =new Hanghoa[n];
    for ( int i = 0; i < n; i++){
            cin>>arr[i];
    } 
    cout<<endl<<endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;   
}