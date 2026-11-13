/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/*
 * File:   main.cpp
 * Author: Aionnio pane evre to xD
 *
 * Created on December 5, 2023, 8:06 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <pthread.h>
#include <thread>
#include <iomanip>
#include <cmath>
#include <chrono>
using namespace std;

/*[ 1 2 ] = 1+2
 *
 */

const int xp=10;
int onex[xp]={0,8,7,6,5,4,3,2,1};
int twox[xp]={1,0,8,7,6,5,4,3,2};
int threex[xp]={2,1,0,8,7,6,5,4,3};
int fourx[xp]={3,2,1,0,8,7,6,5,4};
int fivex[xp]={4,3,2,1,0,8,7,6,5};
int sixx[xp]={5,4,3,2,1,0,8,7,6};
int sevenx[xp]={6,5,4,3,2,1,0,8,7};
int eightx[xp]={7,6,5,4,3,2,1,0,8};
int ninex[xp]={8,7,6,5,4,3,2,1,0};
int timer_chrono=0;

int sum=0,m;
int cnt=0;
int da_main=0;
int gfirst=0;int dfn=0;
int cdi(int x)
{ m=0;sum=0;
    while(x>0)
    {
      m=x%10;
       // m=fmod(x,10);
        sum=sum+m;
      x=x/10;
    //  cout<<"so far " << sum << " " << m << " " ;
      // std::this_thread::sleep_for(std::chrono::milliseconds(timer_chrono));
    }
if(gfirst==0){gfirst=1;dfn=sum;}
if(sum>9 ){
    cdi(sum);
}
    return sum;
}

int correct_the(char k)
{
    string mk;
    char l;
    int mlk=0;
    mk+=to_string(k);
   // if(mk.size()-1==1){
        l=mk.at(0);
        mlk=stoi(&l);
   // }
    return mlk;
}

int reporter=0;

string mynumber;
const int xpp=6000; // it was 500
int x_nine[xpp];
int y_nonine[xpp];
int cntrl_digit[xpp];
int lrs[xpp];
int mp=0;
int lp=0;
int lst_digit=0;
int lkpp=0;
int spasta(string mip){
    int glen=0;
    int at_step=0;
    char k;
    int mlk[1];
    int gpo=0;
    int opg=0;
    int lk_cor=0;
    for(int i=0;i<=mip.size()-1;i++)
    {
        glen+=1;
        if(glen%2==0){
           // cout<<mip.at(i-1) << " " << mip.at(i) <<"\n";
            k=(mip.at(i-1));
            lk_cor=correct_the(k);
            mlk[0]=stoi(&k);
            if(mlk[0]==0){cntrl_digit[mp]=9;}
            if(mlk[0]!=0){cntrl_digit[mp]=mlk[0];}
            k=(mip.at(i));
            lk_cor=correct_the(k);
            mlk[1]=stoi(&k);
            lkpp=lkpp + mlk[0];
            lkpp=lkpp+mlk[1];
           // cout<<lkpp << " " << mlk[0] << " " <<  mlk[1] <<" | ";
           // cout<<mlk[0] << " " << mlk[1] <<"\n";
            gpo=mlk[0]*10 + mlk[1];
            y_nonine[mp]=gpo;
            opg=mlk[0]*10+9;
            x_nine[mp]=opg;
            mp+=1;
            //cout<<"we have these values " << opg << " with " << gpo <<" "<< x_nine[mp-1] << " " << y_nonine[mp-1] <<"\n";
           // std::this_thread::sleep_for(std::chrono::milliseconds(timer_chrono));
        }
        mlk[0]=0;
        mlk[1]=0;
        gpo=0;opg=0;
        std::this_thread::sleep_for(std::chrono::milliseconds(timer_chrono));
    }
    if(glen%2!=0){
    k=mip.at(glen-1); lst_digit=stoi(&k);cout<<"last digit " << lst_digit <<"\n";
    cntrl_digit[mp]=lst_digit;
    opg=lst_digit*10+9;
    x_nine[mp]=opg;
    y_nonine[mp]=lst_digit;
    lkpp=lkpp+lst_digit;
    cout<<lkpp << " " << lst_digit <<"\n";
    }
    cout<<"\n";
   // if(reporter==0){
     int ct_them=0;string s;string rm;
     for(int i=0;i<=mp;i++){
       if(cntrl_digit[i]>9){
         s.clear();s+=to_string(cntrl_digit[i]);
         //cout<<"removing second number from " << s <<"\n";
         rm.clear(); rm+=s.at(0);
         ct_them=stoi(rm);
         //cout<<"returning only first digit "<< ct_them <<"\n";
         cout<<"fixed @ pos " << i << " control digit " << cntrl_digit[i] << " with " << ct_them << "\n" ; //" \\|/ ";
         cntrl_digit[i]=ct_them;
         std::this_thread::sleep_for(std::chrono::milliseconds(timer_chrono));
     }
    }
    //}

    if(reporter==1){
    cout<<"Index as I of table   | Value \n";
    cout<<"reporting x_nine values [max range values]: \n";for(int i=0;i<=mp;i++){cout<<i <<" --> " << x_nine[i]<<" || ";}
    cout<<"\n";
    cout<<"Index as I of table   | Value \n";
    cout<<"reporting y_nonine values [ur current values]: \n";for(int i=0;i<=mp;i++){cout<<i << " --> "<< y_nonine[i] <<" || ";}
    cout<<"\n";
    cout<<"Index as I of table   | Value \n";
    cout<<"reporting control digits [first digit]: \n";for(int i=0;i<=mp;i++){cout<<i << " --> " << cntrl_digit[i] << " || ";}
    }
    cout<<"\n";
    cout<<"number of rows " << mp <<"\n";
    return 0;
}

int counteri=0;
int get_the_fnlnumber(int cntrl_digit,int pos)
{
    int rexy=0;
    pos=pos-1;
    //cout<<"\n";
    cout<<"@fnl using control_digit " << cntrl_digit << " and pos as  " << pos << " with cd " << pos+1 << "\n";
    if(cntrl_digit==1){
        for(int i=0;i<=pos;i++){if(i==pos){rexy=onex[i]; }}
    }
    if(cntrl_digit==2){
        for(int i=0;i<=pos;i++){if(i==pos){rexy=twox[i]; }}
    }
    if(cntrl_digit==3){
        for(int i=0;i<=pos;i++){if(i==pos){rexy=threex[i]; }}
    }
    if(cntrl_digit==4){
        for(int i=0;i<=pos;i++){if(i==pos){rexy=fourx[i]; }}
    }
    if(cntrl_digit==5){
        for(int i=0;i<=pos;i++){if(i==pos){rexy=fivex[i]; }}
    }
    if(cntrl_digit==6){
        for(int i=0;i<=pos;i++){if(i==pos){rexy=sixx[i]; }}
    }
    if(cntrl_digit==7){
        for(int i=0;i<=pos;i++){if(i==pos){rexy=sevenx[i]; }}
    }
    if(cntrl_digit==8){
        for(int i=0;i<=pos;i++){if(i==pos){rexy=eightx[i]; }}
    }
    if(cntrl_digit==9){
        for(int i=0;i<=pos;i++){if(i==pos){rexy=ninex[i]; }}
    }
    cout<<"counter " << " control digit "<< " position "<< " returned number " << "\n";
    cout<<"  "<<counteri   << "             " << cntrl_digit << "          " << pos << "         " << rexy <<"\n";
    cout<<"\n";
    counteri+=1;
    return rexy;
}

int xpl=0;
int cu_sum_of=0;
int at_five=0;
int remove_them()
{
    lp=0;
    int l_two_di=0;
    int r_two_di=0;
    int m=0;
    int lrsi=0;
    for(int i=0;i<=mp;i++)
    {
        xpl+=1;
        dfn=0;
        l_two_di=x_nine[i]-y_nonine[i];
        if(l_two_di>=10){
        m=cdi(l_two_di);
        cout<<"\n";
        cout<<"using m " <<m  << " of "<< l_two_di <<" ---> ";
        //lrsi=get_the_fnlnumber(cntrl_digit[i],m);
        //if(m==0){lrsi=cntrl_digit[i];}
        //lrs[lp]=lrsi;
        lrsi=(cntrl_digit[i]*10)-m;
        if(cntrl_digit[i]==0){lrsi=m-(cntrl_digit[i]*10);}
        cout<<"       " << x_nine[i] << " - " << y_nonine[i] << " = " << l_two_di <<"  ";
        //cout<<"       " << cntrl_digit[i] << " - " << m << " = " << lrs[lp] <<" --> ";
        cout<<"       " << cntrl_digit[i]*10 << " - " << m << " = " << lrsi <<" --> ";
        cout<<"\n";
        cout<<"                                     ----> sum as first sum " << dfn <<" >> " << m <<" ||  \n";
        }
        if(l_two_di<10){
        cout<<"\n";
        cout<<"using l_two_di " << l_two_di << " ---> ";
        //lrsi=get_the_fnlnumber(cntrl_digit[i],l_two_di);
        //if(l_two_di==0){lrsi=cntrl_digit[i];}
        //lrs[lp]=lrsi;
        lrsi=(cntrl_digit[i]*10)-l_two_di;
        if(cntrl_digit[i]==0){lrsi=l_two_di-(cntrl_digit[i]*10);}
        cout<<"         " << x_nine[i] << " - " << y_nonine[i] << " = " << l_two_di <<"  ";
        //cout<<"  ----> " << cntrl_digit[i] << " - " << l_two_di << " = " << lrs[lp] <<" || \n";
        cout<<"       " << cntrl_digit[i]*10 << " - " << l_two_di << " = " << lrsi <<" --> ";
        }
        cu_sum_of=cu_sum_of+lrsi;
        at_five=at_five+lrsi;
        if(xpl%5==0){cout<<at_five << " " << cu_sum_of << " " ;cout<<"\n"; at_five=0;}
        lp+=1;
        std::this_thread::sleep_for(std::chrono::milliseconds(timer_chrono));
    }
    cout<<"\n";
    cout<<"last sum of final table " << cu_sum_of <<"\n";
    return 0;
}

int fnl_lsi=0;
int add_them(){
    for(int i=0;i<=lp;i++)
    {
        fnl_lsi=fnl_lsi+lrs[i];
      //  cout <<lrs[i] << " " << fnl_lsi << " | " ;
        // std::this_thread::sleep_for(std::chrono::milliseconds(timer_chrono));
    //    cout<<lrs[i] << " " ;
    }
    dfn=0;
    //cout<<"\n";
    cout<<"Generating last sum of " << fnl_lsi <<"\n";
    int mf=cdi(fnl_lsi);
    cout<<"\n";
    return mf;
}


int manual(){
cout<<"\n";
cout<<"|-------------------------------------------------------------\n";
cout<<"|voyeristic behaviours and others have fun\n";
cout<<"|using [0] to return absolute values whenever need it \n";
cout<<"|using number sequence addition theory with [9+1]/[0+1]\n";
cout<<"|to return the result number 0 can be replaced with 9 [0=9]\n";
cout<<"|Control_Digit as Index     :       Index_Position    \n";
cout<<"|                           :    1 2 3 4 5 6 7 8 9 10 \n";
cout<<"|                           :  -----results:--------- \n";
cout<<"|1([0])-index_position with :  | 0 8 7 6 5 4 3 2 1 0  \n";
cout<<"|2([0])-index_position with :  | 1 0 8 7 6 5 4 3 2 1  \n";
cout<<"|3([0])-index_position with :  | 2 1 0 8 7 6 5 4 3 2  \n";
cout<<"|4([0])-index_position with :  | 3 2 1 0 8 7 6 5 4 3  \n";
cout<<"|5([0])-index_position with :  | 4 3 2 1 0 8 7 6 5 4  \n";
cout<<"|6([0])-index_position with :  | 5 4 3 2 1 0 8 7 6 5  \n";
cout<<"|7([0])-index_position with :  | 6 5 4 3 2 1 0 8 7 6  \n";
cout<<"|8([0])-index_position with :  | 7 6 5 4 3 2 1 0 8 7  \n";
cout<<"|9([0])-index_position with :  | 8 7 6 5 4 3 2 1 0 8  \n";
cout<<"|-------------------------------------------------------------\n";
return 0;
}


int manu=0;
int main(int argc, char** argv) {
    //cout<<"show reporting values 1 to show 0 to no show\n";
    //cin>>reporter;
    //cout<<"show manual press 1 to show 0 to no show\n";
    //cin>>manu;
    //if(manu==1){manual();}
    //cout<<"enter chrono pause in for by default no but it will burn the cpu \n";
    //cin>>timer_chrono;
    //cout<<"u enter timer " << timer_chrono <<"\n";
    //cout<<"enter a number\n";
    //cin>>mynumber;
    cout<<"number , chrono, manual [0/1], range value reporter[0/1]\n";
    mynumber=argv[1];
    timer_chrono=stoi(argv[2]);
    manu=stoi(argv[3]);
    reporter=stoi(argv[4]);
    if(manu==1){manual();}
    dfn=0;sum=0;gfirst=0;
    int m=spasta(mynumber);
    cout<<"\n";
    cout<<"for ur number: " << mynumber <<" with length " << mynumber.size()-1 << " the cd is ";
    int mji=cdi(lkpp);
    cout<<lkpp << " >> " << mji <<"\n";
    //cout<<"\n";
    int l=remove_them();
    cout<<"\n";
    dfn=0;sum=0;gfirst=0;
    //int la=add_them();
    int la=cdi(cu_sum_of);
    cout<<"final result ";
    cout<<"for main number cd " << mji << " : \n";
    //cout<<fnl_lsi << " >> " << la <<" ---> ";
    cout<<"la " << la <<"\n";
    if(mji==la){cout<<"SAME RESULT SET !!!\n";}
    if(mji!=la || la!=mji){cout<<"ERROR !!! \n";}
    return 0;
}

